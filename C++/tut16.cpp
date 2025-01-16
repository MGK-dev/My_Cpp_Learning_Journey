#include<iostream>
using namespace std;

// void update(int &num) {
//     num = 10;
// }

// here swapping through values at addresses
void swapPointer(int* a, int* b) {
    int temp = *a;          
    *a = *b;
    *b = temp;
}
int main() {
    // int x = 5;
    // update(x);
    // cout << x << endl;

    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    
    return 0;
}