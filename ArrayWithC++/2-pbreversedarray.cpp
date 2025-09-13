#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "enter the numbers: "<<endl;
    for(int i=0;i<=4;i++)
    {
        cin >> arr[i];
    }

    cout << "NUMBERS IN REVERSED ORDER IS ";
    for(int i=4;i >=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}