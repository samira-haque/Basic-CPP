#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {33, -12, 44, 66, 900, 56899, -9};

    int max = INT_MIN;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "max value is " << max;
    return 0;
}