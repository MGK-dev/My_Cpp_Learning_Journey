#include <iostream>
using namespace std;

int main()
{
    //****** Array Examples *******
    // int marks[4] = {32, 34, 76, 99};
    int marks[] = {32, 34, 76, 99};
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 3278;
    mathMarks[2] = 4278;
    mathMarks[3] = 5278;

    cout << "These are math marks" << endl;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // chaange the value of an array

    marks[2] = 500;

    cout << "These are marks" << endl;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // ** Printing array with the help of loop ***

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }
    // int i = 0;
    // cout << "using while loop" << endl;
    // while (i < 4)
    // {

    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }

    // int i = 0;
    // cout << "using do-while loop" << endl;
    // do
    // {
    //     /* code */
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    //  *** Pointers and arrays ***
    int* p = marks;
    // cout << "The value of *p is " << *p << endl;
    // cout << "The value of *(p+1) is " << *(p+1) << endl;
    // cout << "The value of *(p+2) is " << *(p+2) << endl;
    // cout << "The value of *(p+3) is " << *(p+3) << endl;
    // cout << p<< endl;
    // cout << *p << endl;
    // cout << *(p++) << endl;
    // cout << *(p) << endl;
    // cout << *(++p) << endl;
    // cout << *(p++) << endl;

    cout << "Size of int: " << sizeof(int) << " bytes";

    return 0;
}