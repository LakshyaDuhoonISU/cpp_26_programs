//program to calculate the sum of series 1/1! + 2/2! + 3/3! + ... + N/N! using nested loops
#include<iostream>
using namespace std;
int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else 
    {
        return a*fact(a-1);
    }
}

int main()
{
    int n; double sum=0,i=1;
    cout<<"Enter length of series: ";
    cin>>n;
    if (n<0)
    {
        cout<<"Invalid series length"<<endl;
    }
    else if (n==0)
    {
        cout<<"Sum of series: "<<n<<endl;
    }
    else
    {
        while (i<n)
        {
            cout<<i<<"/"<<i<<"!"<<"+";
            sum+=i/fact(i);
            i++;
        }
        if (i==n)
        {
            cout<<i<<"/"<<i<<"!"<<endl;
            sum+=i/fact(i);
        }
        cout<<"Sum of series: "<<sum<<endl;
    }
    return 0;
}