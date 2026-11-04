#include<iostream>
using namespace std;

int main()
{
    int arr[100]={13,45,67,86,66,12};

    cout<<"Elements before insertion"<<endl;

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(int i=6;i>=3;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[3-1]=100;

    cout<<"Elements after insertion"<<endl;

    for(int i=0;i<=6;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
