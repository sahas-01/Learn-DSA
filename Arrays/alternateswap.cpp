#include <iostream>
using namespace std;

int swapalternates(int a[], int size)
{
    int temp = 0;
    for (int i = 0; i < size-1; i += 2)
    {
        for (int j = i + 1; j <= i + 1; j++)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    for (int i = 0; i < size; i++)
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

    swapalternates(arr, num);
}