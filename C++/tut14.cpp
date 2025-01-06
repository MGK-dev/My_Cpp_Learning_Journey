#include<iostream>
using namespace std;

typedef struct employee
{
    /* data, these will use memory of 9 bytes in total */ 
    int e_id; //4 bytes
    char favChar; //1 bytes
    float salary; //4 bytes
} ep;

union money
{
    /* data, these will use memory of 4 bytes in total, that is size of the largest member */
    int rice; //4 bytes
    char car; // 1 bytes
    float pounds; //4 bytes
};

int main() {
    //   union money m1;
    //   m1.rice = 34;
    //   m1.car = 'a';
    //   cout << m1.car;

    //   ep khan;
    //   khan.e_id = 1;
    //   khan.favChar = 'c';
    //   khan.salary = 150000000;
    //   cout << khan.salary << endl;
    //   cout << khan.e_id << endl;
    //   cout << khan.favChar << endl;

    enum meal{breakfast, lunch, dinner};
    // meal m1 = breakfast;
    // meal m1 = dinner;
    meal m1 = lunch;
    cout << m1 << endl;
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;
      
    return 0;
}