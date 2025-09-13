#include<iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout<<"enter numbers: " << endl;
    for(int i=0;i <5;i++)
    {
        cout << "index " << i << ": ";
        cin>> numbers[i];
    }

    for(int i =0;i < 5 ;i++)
    {
        cout << "index "<<i << " output = " << numbers[i]<<endl;
    }
    return 0;
}