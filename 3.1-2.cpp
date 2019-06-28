/*Assigment 3.1-2 What happens if we declare an identifier
in a block, and then redeclare that same identifier in a
block nested within that block?*/

#include <iostream>

using namespace std;

int main()
{
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
        cout << arg1 << endl;
    }
    return 0;
}

/*Did the program compie? YES. warning: variable ‘arg1’ set but not used [-Wunused-but-set-variable]|'*/
