//program to find the majority element in an array (element appearing more than N/2 times)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: "<<endl;
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
    int majorElement=-1;
    for (int i=0; i<n; i++)
    {
        int currentElement = arr[i];
        int count=0;
        for (int j=0; j<n; j++)
        {
            if (arr[j]==currentElement)
            {
                count++;
            }
            if (count>(n/2))
            {
                majorElement=currentElement;
                break;
            }
        }
    }
    if (majorElement==-1)
    {
        cout<<"No major element found"<<endl;
    }
    else
    {
        cout<<"Major element: "<<majorElement<<endl;
    }
    return 0;
}