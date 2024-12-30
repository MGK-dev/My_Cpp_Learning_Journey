#include<iostream>
using namespace std;


int main() {

    /* In the example below, we use the >= comparison operator to find out 
    // if the age (25) is greater than OR equal to the voting age limit, which is set to 18*/

    int myAge = 5;
    int votingAge = 18;
    // cout << (myAge >= votingAge);

    // Output "Old enough to vote!" if myAge is greater than or equal to 18. Otherwise output "Not old enough to vote.":

    if (myAge >= votingAge) {
        cout << "Old enough to vote!";
    } else {
        cout << "Not old enough to vote.";
    }

    return 0;
}