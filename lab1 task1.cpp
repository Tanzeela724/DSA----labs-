#include<iostream>
using namespace std;

int main()
{
    int arr[100]={13,45,67,86,66,12};
    int value=45;

    for(int i=0;i<=6;i++)
    {
        if(arr[i]==value)
        {
            cout<<"value is available at index"<<i<<endl;
        }
    }

    return 0;
}
