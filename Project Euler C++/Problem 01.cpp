#include <iostream>

int main(){
int sum = 0;

for(int i = 0 ; i <= 1000 ; i++ ) // loop for numbers from zero to one thousand
    if( i % 5 == 0 || i % 3 == 0 ){ sum += i; } // checking every number if they are multiple of 3 or 5, if they are adding to the sum

std::cout << sum << std::endl; // sum is 233168
}