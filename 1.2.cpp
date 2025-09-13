#include<iostream>
using namespace std;

int main()
{
    int marks[3];
    cout << "input physics : ";
    cin >> marks[0];
    cout<< "input chem : ";
    cin >> marks[1];
    cout << "input math";
    cin >> marks[2];

    cout << "physics marks = "<<marks[0]<< endl;
    cout << "chem marks = "<<marks[1]<<endl;
    cout<< "math marks = "<<marks[2]<<endl;
    return 0;
}
