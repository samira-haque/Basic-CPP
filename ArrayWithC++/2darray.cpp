#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout << "enter the number of rows: ";
    cin >> r;
    cout <<"enter the number of columns: ";
    cin >> c;

    cout<<"enter the elements of array:\n";
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"printing the elements of array: \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<< arr[i][j];
        }
    }
    cout << endl;
    return 0;

}
