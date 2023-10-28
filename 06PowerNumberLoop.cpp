//program to calculate the power of a number using a loop
#include<iostream>
using namespace std;
int main()
{
    int b,e,power=1;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Enter it's exponent: ";
    cin>>e;
    if (e==0)
    {
        cout<<b<<"^"<<e<<" = "<<1<<endl;
    }
    else if (e==1)
    {
        cout<<b<<"^"<<e<<" = "<<b<<endl;
    }
    else if (e>1)
    {
        for (int i=1;i<=e;i++)
        {
            power=power*b;
        }
        cout<<b<<"^"<<e<<" = "<<power<<endl;
    }
    else
    {
        for (int i=-1;i>=e;i--)
        {
            power=power*b;
        }
        cout<<b<<"^"<<e<<" = "<<"1/"<<power<<endl;
    }
    return 0;
}