#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, a[i]);
        cout << maximum << " ";
    }
}