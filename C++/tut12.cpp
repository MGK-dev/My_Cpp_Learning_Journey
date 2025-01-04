#include<iostream>
using namespace std;

int main() {
    int a = 3;
    // int* b = &a;
    int* b;
    b = &a;

    // & ---> (address of) operator
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;


     // * ---> (value at) Dereference operator
    cout<<"The value at address b is: "<<*b<<endl;

    // ** ---> pointer to pointer

    int** c = &b;

    cout<<"The address of c is: "<<&b<<endl;
    cout<<"The address of c is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at c) is: "<<**c<<endl;


   
    return 0;
}