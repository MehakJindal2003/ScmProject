#include<iostream>
using namespace std;
int main()
{
    int arr[20]={1,2,3,4,5,6};
    int pos;
    int n;
    int i;
    cout<<"Current array is : ";
    for(i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    cout<<"\nEnter the position and number : ";
    cin>>pos>>n;

    for(i=5;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=n;

    cout<<"New array : ";
    for(i=0;i<7;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
