#include <iostream>

int main(){

    auto number = 1;
    bool loop = true;
    int countr = 0;

    while (loop)
    {
        for (size_t i = 1; i <=number; i++)
        {
            if ( number % i == 0 )
            {
                countr++;
                if ( countr >= 500 )
                {
                    std::cout << "number is " << number << std::endl;
                    loop = false;

                }
            }
            
        }
        countr = 0;
        number += 1; 
        std::cout << number << std::endl;
    }
    return 0;
}