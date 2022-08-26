#include <iostream>

int main(){ //bad code needed to be get fix

    int k = 1, number = 1;
    bool loop = true;
    int countr = 0;

    while (loop)
    {
        for (size_t i = 1; i <=number/2; i++)
        {
            if ( number % i == 0 )
                countr++;
        }

        if ( countr >= 500 )
        {
            loop = false;
            std::cout << number << std::endl;
        }

        k++;
        countr = 0;
        number += k; 
    }
    return 0;
}