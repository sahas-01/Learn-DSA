#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sum, s;
    vector<int> v;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter sum ";
    cin >> s;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            // cout<<arrSum;
            // cout << sum << endl;
            if (sum == s)
            {
                // cout << i << " " << j;
                v.push_back(i);
                v.push_back(j);
                break;
            } // end of if
        }     // end of second for
    }         // end of main for
    // cout << v.size();
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }
}