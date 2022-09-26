#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vec {2};    // first prime placed in zero position of vector.
    for (size_t i = 3; vec.size() <= 10000 ; i+=2) // increment by 2 bc prime numbers are odd except 2
    {
        bool check = true;  // condition begins in true
        for (const auto& x : vec)
        {
            if (i % x == 0) // divides number by every element in vector 
            {
                check = false;  //if dividable set situation to false
                break;
            }
        }
        if (check)  // if conditon is still true adds number to vector
            vec.emplace_back(i);
  }
  cout << vec.at(10000);
  return 0;
}