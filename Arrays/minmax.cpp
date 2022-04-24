#include <iostream>

using namespace std;

int getMin(int a[], int size)
{
    // minimum initialized with maximum possible value and then compared with array elements
    int min = INT_MAX;
    // finding the minimum value in the array by traversing all elements
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    } // end for
    return min;
}

int getMax(int a[], int size)
{
    // maximum initialized with minimum possible value and then compared with array elements
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    } // end for
    return max;
}

int main()
{

    int arr[100], num;
    cin >> num;
    // accepting array elements
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int mininmum = getMin(arr, num);
    int maximum = getMax(arr, num);
    int res = maximum - mininmum;
    cout << res << endl;
}