#include <iostream>

int main(){

int num =1, countr = 1;

while(true){
        if(num % countr == 0) // checks if it is evenly divisible by
        {
            countr++;
            if(countr == 20)  // if it's divisible by all of the numbers from 1 to 20
            {
                std::cout << num; // prints number in this case it's 232792560
                break;
            }
        }
        else{   // if it is not; adds one to num and reset countr
            num++;
            countr = 1; 
        }
    }
return 0;
}