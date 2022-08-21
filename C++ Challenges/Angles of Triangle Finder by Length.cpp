#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main(){

    double length1, length2, length3;
    cout << "\nWelcome to the angle finder\n" << endl; //welcome message and triangle
    cout << "          angle1\n             *\n            * *\n   length3 * * * length2\n          * * * *\n   angle2* * * * *angle3\n          length1" << endl;

        cout << "Please enter the first length of sides of triangle" << endl;
        cin >> length1;
        cout << "Enter the second length" << endl;
        cin >> length2;
        cout << "Enter the third length" << endl;
        cin >> length3;

    double angle1, angle2, angle3;
    angle1 = acosf((pow(length2,2) + pow(length3,2) - pow(length1,2)) / (2 * length2 * length3))* 180 / 3.14153;  // cos(a)= b^2 + c^2 - a^2 / 2bc is the formula
    angle2 = acosf((pow(length1,2) + pow(length3,2) - pow(length2,2)) / (2 * length1 * length3))* 180 / 3.14153;  // arccos gives radian so multiplying for degrees
    angle3 = 180 - (angle2 + angle1);
    
    cout << "angle one is " << round(angle1) <<
            " degrees\nangle two is " << round(angle2) << 
            " degrees\nangle three is " << round(angle3) << " degrees" << endl;
    return 0;
}