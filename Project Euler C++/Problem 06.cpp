#include <iostream>

int main(){

int sqrsum =0,sum =0;

    for (size_t x = 1; x <= 100; x++)   // Loop for numbers from 1 to 100
    {
        sqrsum += (x*x);    //1^1 + 2^2 + 3^3 +....
        sum += x;           // 1 + 2 + 3 + 4 +.... 
    }

sum*=sum;                   // (1+2+3+4+...)^2
std::cout << sum-sqrsum;    // couts difference, so "25164150"
return 0;
}