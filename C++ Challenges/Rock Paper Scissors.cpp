#include <iostream>

using std::cout;
using std::endl;
 
char getComputerOption() {
    int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}
 
void chooseWinner(char user, char computer) {
    if (user == 'r' && computer == 'p') {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (user == 'p' && computer == 's') {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (user == 's' && computer == 'r') {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (user == 'r' && computer == 's') {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (user == 'p' && computer == 'r') {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (user == 's' && computer == 'p') {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie." << endl;
    }
}

int main(){

    char user; 
    char computer;
    int round = 1;
    cout << "Welcome to the rock, paper & scissors game" << endl;

    do{

        cout << "r - rock | p - paper | s - scissors | q- quit " << endl;
        std::cin >> user;
        while ( user!='r' && user!='p' && user!='s' && user!='q' )
        {
            cout << "Please enter only valid inputs " << endl;
            cout << "r - rock | p - paper | s - scissors | q- quit " << endl;
            std::cin >> user;
        }
        computer = getComputerOption();
        chooseWinner(user, computer);

    } while ( user != 'q' );

    return 0;
}