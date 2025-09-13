#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array: ";
    cin>>n;

    int arr[n];
    cout <<"enter the elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

        int x;
        cout << "enter the number to be compared: ";
        cin >> x;

        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > x)
            count++;
        }
        cout <<"Total " << count << " elements are greater than " << x << ".";
        return 0;
    
    
}