/*Assigment 2.2A Write a program that outputs “Hello,World!”
n times (where n is a non negative integer that the user
will input) with: a FOR loop*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Please enter a non negative integer number: ";
    cin >> i;
    for (int n=0; n<=i; n++) {
        cout << n <<" Hello World!555" << endl;
    }
}
