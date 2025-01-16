#include<iostream>
using namespace std;

inline int product(int a, int b) {
    return a * b;
}

// inline int add (int a, int b) {
//     return a + b;
// }
// int product(int a, int b) {
//     static int c = 0; //this executes only once
//     c = c + 1;          // next time when this function is run, the value of c wil be retained.
//     return a*b+c;
// }

// float moneyRecieved(int currentMoney, float factor = 1.04) {
//     return currentMoney * factor;
// }

void display(const int num) {
    cout << "Number is " << num << endl;
}

int main() {
    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
        // cout << add(3, 4) << endl;

    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // int money = 100000;
    // cout << "If you have " << money << " Rs, you will recieve " << moneyRecieved(money) << " Rs after 1 year." << endl;
    // cout << "For VIP : If you have " << money << " Rs, you will recieve " << moneyRecieved(money, 1.10) << " Rs after 1 year." << endl;

    display(5);

    return 0;
}