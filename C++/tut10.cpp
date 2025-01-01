#include <iostream>
using namespace std;

int main()
{

    /* ***** Loops in C++ *******
    for loop
    while loop
    do while loop */

    // ***** For Loops in C++ *******
    /*syntax:
    for(intialization; condition; updation){
        loop body(C++ code);
    }*/
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << i << endl;
    // }

    // ***** Infinite For Loops in C++ *******
    //  for (int i = 0; 34 <= 40; i++)
    // {
    //     cout << i << endl;
    // }
    // ***** While Loops in C++ *******
    // Syntax:
    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // ***** Infinite while Loops in C++ *******
    // int i = 1;
    //  while (true)
    //  {
    //     cout << i << endl;
    //     i++;
    //  }

    // ***** Do - While Loops in C++ *******
    // Syntax:
    // do
    // {
    //     /* code */
    // } while (/* condition */);

    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 10);

    // Table of 6 using do while loop
    int table = 6;
    int i = 1;
    do
    {
        cout<< table << " x " << i << " = " << i * table <<endl;
        i++ ;
    } while (i <= 10);
    

    return 0;
}