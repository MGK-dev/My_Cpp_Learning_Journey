#include <iostream>
using namespace std;

// f(x) = x^2 + 2

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    // int a = 4, b = 5;
    // cout<<"Operators in C++:"<<endl;
    // cout<<"The sum of a + b = "<<a+b<<endl;
    // cout<<"The sum of a - b = "<<a-b<<endl;
    // cout<<"The sum of a * b = "<<a*b<<endl;
    // cout<<"The sum of a / b = "<<a/b<<endl;
    // cout<<"The sum of a % b = "<<a%b<<endl;
    // cout<<"The sum of a++ = "<<a++<<endl;
    // cout<<"The sum of  -- = "<<a--<<endl;
    // cout<<"The sum of ++a = "<<++a<<endl;
    // cout<<"The sum of --a = "<<--a<<endl;
    // //comparison operators
    // cout<<"Comparison Operators in C++:"<<endl;
    // cout<<"The value of a == b is "<<(a==b)<<endl;
    // cout<<"The value of a != b is "<<(a!=b)<<endl;
    // cout<<"The value of a > b is "<<(a>b)<<endl;
    // cout<<"The value of a < b is "<<(a<b)<<endl;
    // cout<<"The value of a >= b is "<<(a>=b)<<endl;
    // cout<<"The value of a <= b is "<<(a<=b)<<endl;
    // cout<<endl;
    //     //logical operators
    // cout<<"logical Operators in C++:"<<endl;
    // cout<<"The value of logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    // cout<<"The value of logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    // cout<<"The value of logical not operator (!(a==b)) is "<<(!(a==b))<<endl;

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // if (age > 150 || age < 4)
    // {
    //     cout << "Invalid age";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can vote.";
    // }
    // else
    // {
    //     cout << "You cannot vote";
    // }
    //     int age;
    //     cout<<"enter your age"<<endl;
    //     cin>>age;

    //     switch (age)
    //     {
    //     case 12:
    //         cout<<"you are 12 year old"<<endl;
    //         break;
    //     case 18:
    //         cout<<"you are 18 year old"<<endl;
    //         break;
    //     default:
    //         cout<<"you are neither 12 years nor 18 years old."<<endl;
    //         break;
    //     }

    // int index = 1;
    // while (index < 34)
    // {
    //     cout<<"We are at index no "<<index<<"."<<endl;
    //     index++;
    // }
    // do
    // {
    //     cout << "We are at index no " << index << endl;
    //     index++;
    // } while (index < 10);

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<"We are at index no "<<i<<endl;
    // }
    int a, b;

    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    cout<<"The function returned "<<add(a,b)<<endl;

    return 0;
}