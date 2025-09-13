#include<iostream>
using namespace std;

int main()
{
    int marks[3];
    
    cout << "Input physics marks: ";
    cin >> marks[0];
    
    cout << "Input chemistry marks: ";
    cin >> marks[1];
    
    cout << "Input math marks: ";
    cin >> marks[2];

    cout << "Physics marks = " << marks[0] << endl;
    cout << "Chemistry marks = " << marks[1] << endl;
    cout << "Math marks = " << marks[2] << endl;
}