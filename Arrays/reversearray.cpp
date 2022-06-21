#include <iostream>
using namespace std;

void reverseArr(int a[], int size)
{
    int temp = 0;
    int i = 0, j = size - 1, n = size - 1;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int arr[100], num;
    cout << "Enter a number";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter element " << i + 1 << " of array";
        cin >> arr[i];
    }
    reverseArr(arr, num);
}