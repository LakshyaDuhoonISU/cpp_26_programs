//program to find the Kth smallest element in an array
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array: |";
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"|"<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    start:
    cout<<"Enter value of K(>0 and <="<<n<<"): ";
    cin>>k;
    if (k<=0 || k>n)
    {
        cout<<"Invalid value of K"<<endl;
        goto start;
    }
    else
    {
        cout<<k<<"th smallest element is: "<<arr[k-1]<<endl;
    }
    return 0;
}