// program to display Fibonacci sequence upto N terms
#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter upto how many terms to display Fibonacci sequence upto: ";
    cin >> n; // take number of terms from the user
    cout << "Fibonacci sequence upto " << n << " terms:" << endl;
    for (int i = 0; i <= n; i++) // print fibonacci sequence from 0 to n+1 term
    {
        if (i == 0) // for printing the first term of the sequence
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 1) // for printing the second term of the sequence
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
}