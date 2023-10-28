//program to find roots of the quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,r1,r2;
    cout<<"Enter coefficients of the quadratic equation: ";
    cin>>a>>b>>c;
    if (a==0 || b==0 || c==0)
    {
        cout<<"Invalid coefficients"<<endl;
    }
    else
    {
        d=b*b-4*a*c;
        if (d>0)
        {
            cout<<"Roots of the quadratic equation are real and distinct"<<endl;
            r1=-b+sqrt(d)/2*a;
            r2=-b-sqrt(d)/2*a;
            cout<<"Root 1: "<<r1<<endl;
            cout<<"Root 2: "<<r2<<endl;
        }
        else if (d==0)
        {
            cout<<"Roots of the quadratic equation are real and equal"<<endl;
            r1=-b/2*a;
            cout<<"Root 1 = Root 2= "<<r1<<endl;
        }
        else
        {
            cout<<"Roots of the quadratic equation are imaginary and unequal"<<endl;
            r1=-b/2*a;
            r2=sqrt(-d)/2*a;
            cout<<"Real Part: "<<r1<<endl;
            cout<<"Imaginary Part: "<<r2<<endl;
        }
    }
    return 0;
}