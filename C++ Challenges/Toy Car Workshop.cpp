// how many toy cars you can make with given(input). Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
int main(){

    int wheels, carbody, figures;

    cout << "Each toy car needs 4 wheels, 1 car body, and 2 figures"<<std::endl;
    cout << "Number of wheels ";
    cin >> wheels;
    cout << "Number of carbody ";
    cin >> carbody;
    cout << "Number of figures ";
    cin >> figures;

    int x = wheels /4;
    int y = figures /2;

    std::vector<int> vec {x,y,carbody};
    std::sort (vec.begin(),vec.end());

    cout << vec.at(0) << " cars you can make" <<std::endl;
    return 0;
}