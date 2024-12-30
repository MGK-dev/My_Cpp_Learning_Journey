#include<iostream>
using namespace std;

int c = 45;

int main() {

    // ******** Build in data types *********

    // int a, b, c;
    // cout << "Enter the value of a: "<<endl;
    // cin >> a;
    // cout << "Enter the value of b: "<<endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is " << c <<endl;
    // cout << "The global c is " << ::c;

    //  ******** Float, double and long double literals ***************

    // float d = 34.4F;
    // long double e = 34.4L;
    // cout << "The sizr of 34.4 is: " << sizeof(34.4) << endl;
    // cout << "The sizr of 34.4f is: " << sizeof(34.4f) << endl;
    // cout << "The sizr of 34.4F is: " << sizeof(34.4F) << endl;
    // cout << "The sizr of 34.4l is: " << sizeof(34.4l) << endl;
    // cout << "The sizr of 34.4L is: " << sizeof(34.4L) << endl;
    // cout << "The value of d is: " << d << endl << "The value of e is: " << e << endl;

    // ******* Reference Variables ***********

    // float x = 455;
    // float & y = x;
    // cout << x << endl;
    // cout << y << endl;

     // ******* Type casting ***********

     int a = 45;
     float b = 45.56;
     cout << "The value of a is: " << a << endl;
     cout << "The value of b is: " << b << endl;
     cout << "The value of b is: " << (int)b << endl;
     int c = int(b);
     cout << "The value of c is " << c << endl;

     cout << "The expression is " << a + b << endl;
     cout << "The expression is " << a + int(b) << endl;
     cout << "The expression is " << a + (int)b << endl;

    return 0;
}











// int sum(int a, int b);
// void g();

// int main() {
//     int num1, num2;
//     cout<<"Enter No 1 "<<endl;
//     cin>>num1;
//     cout<<"Enter No 2 "<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1, num2);

//     g();

//     return 0;
// }

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }
// void g() {
//     cout<<"\n Hello, Good Morning";  //greetings
// }