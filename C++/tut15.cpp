#include<iostream>
using namespace std;

// Function Prototype syntax
// type function_name (arguments);

/*****Acceptable*********/
// int sum (int a, int b);
// int sum (int, int);
// void greet(void);
// void greet();

/***** Not Acceptable *********/
// int sum (int a, b);

int sum (int a, int b);
void greet(void);

int main() {
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    greet();
    return 0;
}

int sum(int a, int b) {
    int c = a + b;
    return c;
}

void greet() {
    cout << "Hello Good Morning";
}