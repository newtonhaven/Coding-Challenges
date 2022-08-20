#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<long long> vec {2};      // first prime placed in zero position of vector.
    for (long long i = 3; i <= 2000000 ; i++)   //loop from problem 7
    {
        bool check = true;  // condition begins in true
        for (auto x : vec)
        {
            if (i % x == 0)     // divides number by every element in vector 
            {
                check = false;  //if dividable set situation to false
                break;
            }
        }
        if (check)   // if conditon is still true adds number to vector
            vec.push_back(i); 
  }

    long long sum = 0;

    for (auto& n : vec) //range based loop to sum all of elements in vector
        sum += n;
  
  cout << sum;
  
  return 0;
}