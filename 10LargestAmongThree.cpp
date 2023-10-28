//program to find the largest among three numbers using nested if-else statements
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is the largest among three numbers"<<endl;
        }
        else
        {
            cout<<c<<" is the largest among three numbers"<<endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" is the largest among three numbers"<<endl;
        }
        else
        {
            cout<<c<<" is the largest among three numbers"<<endl;
        }
    }
    return 0;
}