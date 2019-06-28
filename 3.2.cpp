/* Assigment 3.2 Given a list of N integers, find its mean (as a double), maximum value, minimum value,
and range. Y our program will first ask for N , the number of integers in the list, which the
user will input. Then the user will input N more numbers. */

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Enter quantity of integer numbers N: ";
    cin >> N;
    int acc = 0;

    // First value proccessed separetly
    cout << "Enter first integer: ";
    cin >> acc;
    int MinVal = acc;
    int MaxVal = acc;

    //Remaining values
    for (int i=1; i<N; ++i)
    {
        int a;
        cout << "Enter integer number " << (i+1) << ": ";
        cin >> a;
        acc += a;

        if (a < MinVal)
        {
            MinVal = a;
        }

        if (a > MaxVal)
        {
            MaxVal = a;
            }
        }
    cout << "Mean: " << (double)acc/N << endl;
    cout << "Maximum: " << MaxVal << endl;
    cout << "Minimum: " << MinVal << endl;
    cout << "Range: " << (MaxVal-MinVal) << endl;

    return 0;
}
