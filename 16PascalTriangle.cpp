//program to print a Pascal's triangle using nested loops
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows to print: ";
    cin>>n;
    while(n<=0)
    {
        cout<<"Invalid Number! Enter a valid number: ";
        cin>>n;
    }
    for (int i=1;i<=n;i++)
    {
        int num=1;
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for (int k=1;k<=i;k++)
        {
            cout<<num<<" ";
            num=num*(i-k)/k;
        }
        cout<<endl;
    }
    return 0;
}