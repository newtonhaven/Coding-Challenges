#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void add(&vec,sum){

    for (auto n : vec){
        sum += n;
    }
    cout << "sum is " << sum << endl;
}

void sub(){
    for(auto n : vec)
        sum -= n;
    cout << sum;
    cout << sum << enld;
}

void multi(){
    sum = 1;
    for (auto n : vec )
        sum *= n;
    cout << sum << endl;
}

void mod(){
   sum = vec.first
}


int main(){
    double sum = 0;
    vector<double> vec;
    char input;
    auto inputNumber;

    do
    {
        cout << "----------------------------------------" << endl;
        cout << "N - input numbers" << endl;
        cout << "S - stop input numbers" << endl;
        cout << "C - clear numbers" << endl;
        cout << "+ - addition of numbers" << endl;
        cout << "- - subtraction of two numbers" << endl;
        cout << "x - multiplication of numbers" << endl;
        cout << "/ - divide the numbers" << endl;
        cout << "% - modulus of two numbers" << endl;
        cout << "Q - exit" << endl;

        cin >> input;

        switch (input)
        {
            
        case 'n':
        case 'N':
            while (true)
            {
                cin >> inputNumber;
                if(inputNumber == 'S' || inputNumber == 's')
                    break;
                vec.push_back(inputNumber);
            }
            break;

        case 'C':
        case 'c':
            vec.clear();
            sum = 0;
            break;

        case '+':
            add(&vec);
            break;

        case '-':

            break;

        case '/':

            break;

        case '%':
            if(vec.size != 2){
                cout << "please enter only 2 values" << endl;
                break;
            }
            break;

        default:
            cout << "please enter valid input" << endl;
            cin >> input;
            break;
        }
    }while( input != 'Q' && input != 'q' ); // QUIT





    return 0;
}