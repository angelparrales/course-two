/*Assigment 3.1-1 What happens if we declare the same name
twice within a block, giving it two different meanings?*/

#include <iostream>

using namespace std;

int main()
{
    int arg1;
    arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';
    cout << arg1 << endl;
    return 0;
}

/*Did the program compie? NO. error: conflicting declaration 'char arg1'*/
