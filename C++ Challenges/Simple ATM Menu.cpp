#include <iostream>


int main(){

    char input;
    int deposit;
    int money = 0;
    do
    { 
        std::cout << "\nA - add money\nS - send money\nW - withdraw money\nB - balance\nQ - Quit" << std::endl;
        std::cin >> input;
        
        switch (input) // menu
        {
        // Add money
        case 'A': // can't use || logic operator bc of that used 'falling through'. There is no break statetment so that case'A' trigers case'a'
        case 'a': 
            std::cout << "Money in account is " << money << std::endl;
            std::cin >> deposit;
            money+=deposit;
            std::cout << "\nNewBalance is " << money;
            break;

        //Send money
        case 's':
        case 'S': 
            std::cout << "Money in account is " << money << std::endl;
            std::cin >> deposit;
            money-=deposit;
            std::cout << "\nMoney sended! New balance " << money;
            break;

        //withdraw money
        case 'w':
        case 'W':
            std::cout << "Money in account is " << money << std::endl;
            std::cin >> deposit;
            money-=deposit;
            std::cout << deposit << "\nWithdrawed\nNewBalance is " << money;
            break;

        //balance
        case 'B':
        case 'b':  
            std::cout << "Money in account is " << money << std::endl;
            break;

        default:
            break;
        }
    } while (input != 'Q' && input != 'q' ); //quit

    std::cout << "Goodbye"<< std::endl;
    return 0;
}