//program to check whether a number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n; //taking a number from the user
    if (n<0)
    {
        cout<<"Invalid number!"<<endl; //if n is negative, print error message
    }
    else if (n==0 || n==1)
    {
        cout<<n<<" is neither prime nor not prime"<<endl; //if n is 0 or n is 1, print this message
    }
    else
    {
        for (int i=2;i<n;i++) //if n is positive, check from 2 to n-1, if any number divides n
        {
            if (n%i==0) //if n is divisible by any number, increase the value of count variable
            {
                count+=1;
            }
        }
        if (count==0) //check if n is divisible by any number, then print prime message
        {
            cout<<n<<" is a prime number"<<endl;
        }
        else //if n is not divisible by any number, then print not prime message
        {
            cout<<n<<" is not a prime number"<<endl;
        }
    }
    return 0;
}