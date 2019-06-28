/* Assigment 3.1-3 Use it to answer the following question: Suppose an
identifier has two different declarations, one in an outer block and one in a nested
inner block. If the name is accessed within the inner block, which declaration is used? */

#include <iostream>

using namespace std;

int main()
{
    int arg1;
    arg1 = -1;
    {
        char arg1 = ’A’;
        cout << arg1 << "\n";
    }
    return 0;
}

/* answer: None, complier error: 'A' was not declared in the scope */
