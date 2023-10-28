//program to find the GCD of two numbers using a for loop
#include<iostream>
using namespace std;
int main()
{
    int x,y,gcd;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    if (x<=0 || y<=0)
    {
        cout<<"Invalid numbers"<<endl;
    }
    else
    {
        int smallerNo=(x<y) ? x:y;
        for (int i=1;i<=smallerNo;i++)
        {
            if (x%i==0 && y%i==0)
            {
                gcd=i;
            }
        }
        cout<<"GCD of "<<x<<" and "<<y<<" is: "<<gcd<<endl;
    }
    return 0;
}