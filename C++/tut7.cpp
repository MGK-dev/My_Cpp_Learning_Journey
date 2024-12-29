#include<iostream>
using namespace std;

int sum(int a, int b);
void g();

int main() {
    int num1, num2;
    cout<<"Enter No 1 "<<endl;
    cin>>num1;
    cout<<"Enter No 2 "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);

    g();

    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c;
}
void g() {
    cout<<"\n Hello, Good Morning";  //greetings
}