//program to determine the grade of a student based on their marks of 5 subjects
#include<iostream>
using namespace std;
int main()
{
    double sum=0,marks;
    for (int i=1;i<=5;i++)
    {   
        start:
        cout<<"Enter marks (out of 100) of subject "<<i<<": ";
        cin>>marks;
        if (marks>100)
        {
            cout<<"Invalid marks! Enter valid marks"<<endl;
            goto start;
        }
        sum+=marks;
    }
    cout<<"Total marks: "<<sum<<endl;
    double avg=sum/5;
    cout<<"Average: "<<avg<<endl;
    if (avg>90)
    {
        cout<<"Congratulations! You got grade A"<<endl;
    }
    else if (avg>80 && avg<=90)
    {
        cout<<"Very good! You got grade B"<<endl;
    }
    else if (avg>60 && avg<=80)
    {
        cout<<"Good! You got grade C"<<endl;
    }
    else if (avg>40 && avg<=60)
    {
        cout<<"Not great! You got grade D"<<endl;
    }
    else
    {
        cout<<"You failed! Try again next time."<<endl;
    }
    return 0;
}