//program to check if a number is prime or composite
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<0)
    {
        cout<<"Invalid number"<<endl;
    }
    else if (n==0 || n==1)
    {
        cout<<n<<" is neither prime nor composite"<<endl;
    }
    else
    {
        for (int i=2;i<n;i++)
        {
            if (n%i==0)
            {
                count+=1;
            }
        }
        if (count==0)
        {
            cout<<n<<" is prime"<<endl;
        }
        else
        {
            cout<<n<<" is composite"<<endl;
        }
    }
    return 0;
}