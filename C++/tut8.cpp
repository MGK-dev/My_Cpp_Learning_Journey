#include<iostream>
using namespace std;

int main() {

    int a = 3;
    int* b = &a;
    //(adress of) operator
    cout<<"the address of a is: "<<&a<<endl;  //i will print address of a.
    cout<<"the address of a is: "<<b<<endl;  //i will print address of a.

    //(value at) derefrence operator
    cout<<"The value at address b is: "<<*b<<endl;
    return 0;
}