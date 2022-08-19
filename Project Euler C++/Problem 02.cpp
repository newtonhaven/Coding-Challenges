#include <iostream>

int main(){

    int n1 = 1, n2 = 1, n3, sum = 2; // fib starts with 1 1 2 3 5... but code starts with 2 3 5... so that sum equal to two 

// fibonacci loop
    while( n3 < 3000000 ){ // loop end 3million bc it reach 3million run one more time, then reach 4million now over 3million it stops. 
        n3 = n1 + n2;
            if ( n3 % 2 != 0 ) // adds even numbers into sum
                sum += n3;
        n1 = n2;
        n2 = n3;
    }
std::cout << sum << std::endl; // sum is 4613732
  return 0;
}