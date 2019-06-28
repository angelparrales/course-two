/*Assigment 2.2B Write a program that outputs “Hello,World!”
n times (where n is a non negative integer that the user
will input) with: a DO...WHILE loop*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    int n = 0;
    cout << "Please enter a non negative integer number: ";
    cin >> i;
    do {
        cout << "Hello World!555" << endl;
        ++n;
    } while (n<i);
}
