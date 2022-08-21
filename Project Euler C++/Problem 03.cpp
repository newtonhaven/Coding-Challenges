#include <iostream>

int main(){

    long long hold ,x = 2, pf = 600851475143;

    while ( x <= pf)
    {
        if(pf%x==0){          //  basically does prime factor calculation math.
            hold = x;        //  if our number is dividable by x, put x into hold and divide number. 
            pf/=x;          //  (doesn't increse the x), then try to divide, divided number again with x 
        }                  //  until number become not dividalbe by x. if not dividable by x, increases the x.
        else
        x++;
    }
    std::cout << hold;
    return 0;
}