#include<iostream>
using namespace std;

int main()
{
    int arr[100]={13,45,67,86,66,12};

    cout<<"Elements before deletion"<<endl;

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(int i=2;i<5;i++)
    {
        arr[i]=arr[i+1];
    }

    cout<<"Elements after deletion"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
