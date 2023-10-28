//program to calculate the sum of elements in each row of a matrix
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,sum=0;
    cout<<"Enter rows of the matrix: ";
    cin>>rows;
    cout<<"Enter columns of the matrix: ";
    cin>>cols;
    int arr[rows][cols];
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cout<<"Enter element of "<<i+1<<" row and "<<j+1<<" column: ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array: "<<endl;
    for (int i=0; i<rows; i++)
    {
        cout<<"| ";
        for (int j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is: "<<sum<<endl;
        sum=0;
    }
    return 0;
}