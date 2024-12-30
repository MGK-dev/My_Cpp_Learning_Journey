#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // int a = 32;
    // cout << "THe value of a was: " << a << endl;
    // a = 4;
    // cout << "THe value of a is: " << a << endl;
    // char c = 'a';
    // cout << "THe value of c was: " << c << endl;
    // c = '4';
    // cout << "THe value of c is: " << c << endl;

    // **** Constants in C++ *****
    // const int a = 33;
    // cout << "The value of a was: " << a << endl;
    // a = 55;
    // cout << "The value of a is: " << a << endl;

    // **** Manipulators in C++ *****
    // int a = 4, b = 34, c = 3456;
    // cout << "The value of a without setw() is: " << a << endl;
    // cout << "The value of b without setw() is: " << b << endl;
    // cout << "The value of c without setw() is: " << c << endl;

    // cout << "The value of a is: " << setw(4) << a << endl;
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl;

    // **** Operator Precedence in C++ *****
    int a=3, b=4;
    // int c = (a*5)+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;
   
    return 0;
}



 // int a = 3;
    // int* b = &a;
    // //(adress of) operator
    // cout<<"the address of a is: "<<&a<<endl;  //i will print address of a.
    // cout<<"the address of a is: "<<b<<endl;  //i will print address of a.

    // //(value at) derefrence operator
    // cout<<"The value at address b is: "<<*b<<endl;