#include <iostream>
using namespace std;

void selectionSort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int num, arr[num];
    cout << "Enter a number";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter element " << i + 1 << " of array";
        cin >> arr[i];
    }
    selectionSort(arr, num);
}
