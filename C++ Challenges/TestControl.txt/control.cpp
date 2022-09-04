#include <fstream>
#include <iostream>
#include <iomanip>

void printHeader(){ // print header of table
    std::cout << std::setw(15) << std::left << "Student" << std::setw(5) << "Score" << std::endl;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');  
}

void printBottom (double average){ // Print bottom part of table
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');  
    std::cout << std::setw(15) << std::left << "Average score" << std::setw(5) << std::right << average;
}

void printMain(const std::string &name, int score){ //prints student names and their score
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << std::setw(15) << std::left << name << std::setw(5) << std::right << score << std::endl;
}

int scores(const std::string &answer, const std::string &answerKey){ //calculate score
    int score =0;
    for (size_t i = 0; i < answerKey.size() ; i++) 
    {
        if (answer.at(i)  == answerKey.at(i))
            score++;
    }
    return score;
}

int main(){
    std::ifstream inFile;
    std::string name{};
    std::string answer{};
    int totalStudents = 0;
    int sum  = 0;

    inFile.open("answers.txt"); //file location
    if(!inFile) // check did file opened corectly
    {
        std::cerr << "File could not open" << std::endl;
        return 1;
    }

    std::string answerKey{};
    inFile >> answerKey; //puts first line (answer key) to string

    printHeader();
    
    while (inFile >> name >> answer)
    {
        totalStudents++;
        int score = scores(answer, answerKey);
        sum += score;
        printMain(name, score);
    }

    sum /= totalStudents;
    printBottom(sum);
    
    inFile.close();
    return 0;     
}