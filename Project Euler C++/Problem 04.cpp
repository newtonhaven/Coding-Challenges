#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

vector<int> palindromes{0}; // vector storage all palindromes, used vector because don't know how many palondromes

    for (size_t i = 999; i > 100; i--)     //   two for loop for compare product of
    {                                      //   of all the numbers with each other
        for (size_t j = 999; j > 100; j--) //   from 100 to 999
        {
            int n, num, digit, rev = 0;    // code does that reverse number and compares are they equal/palindromes or not

            num = i * j;
            n = num;
            do
            {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
            }while (num != 0);

            if (n == rev)       // if number is palindromes, adds to the vector
            {
               palindromes.push_back(n);
            }
        } 
    }
    cout << *max_element(palindromes.begin(),palindromes.end()); // print out biggest element(palindrome) in vector
   return 0; 
}