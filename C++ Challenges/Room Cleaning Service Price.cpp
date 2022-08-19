#include <iostream>

int main(){
    int smallroom, bigroom;

    std::cout << " Welcome to the Mr.T's Room Cleaning Service" << std::endl;
    std::cout << "How many small rooms would you like to cleaned: ";
    std::cin >> smallroom;

    std::cout << "How many big rooms would you like to cleaned: ";
    std::cin >> bigroom;

    std::cout << "\nEstimate for carpet cleaning service\nNumber of small rooms: "<< smallroom << std::endl;
    std::cout << "Number of big rooms: " << bigroom  << std::endl;
    std::cout << "\n25$ per sall room\n35$ per large room" << std::endl;

    double cost = (25*smallroom)+(35*bigroom);
    double tax = (cost*6)/100;
    std::cout << "Cost : $" << cost << " Tax: $" << tax << std::endl;
    std::cout << "===================================" << std::endl;

    std::cout << "Total estimate: $" << cost+tax << "\nThis estimate is valid for 30 days" << std::endl;
    
    return 0;
}