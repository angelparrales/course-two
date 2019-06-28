/*Assigment 2.2B Write a program that outputs “Hello,World!”
n times (where n is a non negative integer that the user
will input) with: a WHILE loop*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    int n = 0;
    cout << "Please enter a non negative integer number: ";
    cin >> i;
    while (n<i) {
        cout << "Hello World!555" << endl;
        ++n;
    }
}
