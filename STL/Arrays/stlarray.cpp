#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr;
    cout << "Enter elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;
}