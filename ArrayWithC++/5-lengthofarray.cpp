#include<iostream>
using namespace std;

int main()
{
    int arr[]={33,-12,44,77,98,43,79,90};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Length / Size of the array: "<< length <<endl;
    return 0;
}