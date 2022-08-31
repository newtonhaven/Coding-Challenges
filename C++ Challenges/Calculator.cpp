#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//the program continues to add, subtract, divide and multiply until it is stopped. holds sum in memory so that you can do multiple math operation
// for example add 5 number and divide by 5.

void add(double *sum){ // ADDITION
    double x;
    while (true)
    {
        cin >> x;
        *sum +=x;
        cout << "sum = " << *sum << endl;
        if(x==0)
            break;
    }
}

void sub(double *sum){ // SUBTRACTION
    double x;
    while (true)
    {
        cin >> x;
        *sum -= x;
        cout << "sum = " << *sum << endl;
        if(x==0)
            break;
    }
}

void multi(double *sum){ // MULTIPLIER
    double x,y;
    if (*sum == 0)
    {
        cin >> x;
        cin >> y;
            *sum = x*y;
        cout << "sum = " << *sum << endl;
    }
    
    while (true)
    {
        cin >> x;
        if(x==0)
            break;
        *sum *=x;
        cout << "sum = " << *sum << endl;
    }
}

void divide(double *sum){ // DIVIDER
    double x,y;
    if (*sum == 0)
    {
        cin >> x;
        cin >> y;
        if(x >= y)
            *sum = x/y;
        else
            *sum = y/x;
    }

    while (true)
    {
        cin >> x;
        if(x==0)
            break;
        *sum /=x;
        cout << "sum = " << *sum << endl;
    }
}

void mod(){ // MODULUS OF TWO INTEGER
    int x,y;
    cout << "please enter first number " << endl;
    cin >> x;
    cout << "please enter second number " << endl;
    cin >> y;

    if(x>=y){ // CHECKS FOR BIGGER NUMBER
        int mod = x%y;
        cout << "x % y = " << mod << endl;
    }
    else{
        int mod = y%x;
        cout << "y % x = " << mod << endl;
    }

}

void showMenu(){ // MENU TO SHOW HOW TO USE
    cout << "----------------------------------------" << endl;
        cout << "C - clear numbers" << endl;
        cout << "+ - addition of numbers" << endl;
        cout << "- - subtraction of two numbers" << endl;
        cout << "* - multiplication of numbers" << endl;
        cout << "/ - divide the numbers" << endl;
        cout << "% - divide the numbers" << endl;
        cout << "enter '0' (zero) for stop operation" << endl;
        cout << "Q - exit" << endl;
}

int main(){
    double sum = 0;
    char input;

    do
    {
        showMenu();

        cin >> input;

        switch (input)
        {
        
        case 'C':
        case 'c':
            sum = 0;
            break;

        case '+':
            add( &sum);
            break;

        case '-':
            sub( &sum);
            break;

        case '/':
            divide( &sum);
            break;

        case '*':
            multi( &sum);
            break;
        
        case '%':
            mod();
            break;

        default:
            cout << "please enter valid input" << endl;
            break;
        }
    }while( input != 'Q' && input != 'q' ); // QUIT
    cout << "goodbye" << endl;
    return 0;
}