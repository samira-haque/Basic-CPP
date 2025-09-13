#include<iostream>
using namespace std;

int main()
{
    int marks[10] ={45,36,90,56,35,39,98,20,12};
    cout << "failed students roll numbers are: " << endl;
    for(int i=0;i<10;i++)
    {
        if(marks[i] < 40)
        {
            cout << i << "\t";
        }
    }
    return 0;
}