#include <iostream>
#include <fstream>

bool find_substring(const std::string &find, const std::string &target) {
    int found = target.find(find);
    if (found == std::string::npos)
        return false;
    else
        return true;
        
}

int main() {
    std::ifstream inFile {};
    std::string find {};
    std::string wordRead {};
    int match = 0;
    
    inFile.open("romeoandjuliet.txt");
    if(!inFile) // check did file opened corectly
    {
        std::cerr << "File could not open" << std::endl;
        return 1;
    }
   
    std::cout << "Please enter the word you would like to find how many times written in Romeo and Juliet : ";
    std::cin >> find;

    while (inFile >> wordRead)
    {
        if (find_substring(find, wordRead)) 
            match++;      
    }

    std::cout << find << " was found " << match << " times " << std::endl;
    
    inFile.close();
    return 0;
}
