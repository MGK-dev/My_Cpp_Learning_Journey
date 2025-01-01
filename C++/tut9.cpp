#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age ?" << endl;
    cin >> age;

    // ****** Selection Control Structure: if-else-if else ladder ******
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "You cannot come to my party." << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid and you will get a kid pass to the party." << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "You are not yet born" << endl;
    // }

    // else
    // {
    //     cout << "You can come to the party." << endl;
    // }

    // ****** Selection Control Structure: Switch case ladder ******

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;
    default:
    cout << "No special cases"<< endl;
        break;
    }
    
    cout << "Done with switch case."<< endl;

    return 0;
}

// int marks[4] = {23, 25, 32, 36};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// int mathMarks[4];
// mathMarks[0] = 278;
// mathMarks[1] = 378;
// mathMarks[2] = 478;
// mathMarks[3] = 578;
// cout<<mathMarks[0]<<endl;
// cout<<mathMarks[1]<<endl;
// cout<<mathMarks[2]<<endl;
// cout<<mathMarks[3]<<endl;
// cout<<endl;
// //change 1 value
// mathMarks[2] = 678;
// cout<<mathMarks[0]<<endl;
// cout<<mathMarks[1]<<endl;
// cout<<mathMarks[2]<<endl;
// cout<<mathMarks[3]<<endl;

// cout<<"using for loop"<<endl;

// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks "<<i<<" is: "<<mathMarks[i]<<endl;
// }

// cout<<"using while loop"<<endl;
// int i = 0;
// while (i <= 3)
// {
//     cout<<"The value of marks "<<i<<" is: "<<mathMarks[i]<<endl;
//     i++;
// }

// cout<<"using do while loop"<<endl;
// int j = 0;
// do
// {
//     cout<<"The value of marks "<<j<<" is: "<<mathMarks[j]<<endl;
//     j++;
// } while (j <= 3);

// int* p = mathMarks;
// cout<<*(p++)<<endl;
// cout<<*(p++)<<endl;
// cout<<*(p++)<<endl;
// cout<<*(p++)<<endl;
// cout<<"The value of *p is "<<*p<<endl;
// cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
// cout<<"The value of *(p+3) is "<<*(p+3)<<endl;