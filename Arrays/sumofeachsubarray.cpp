#include <iostream>
using namespace std;

void sumOfEachSubArray(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            cout << sum << " ";
        }
    }
}

void printSubArray(int a[], int n)
{
    cout << "The subarrays are" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}

void maximumSumSubArray(int a[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
                maxSum = max(maxSum, sum);
            }
        }
    }
    cout << "Maximum Sum is " << maxSum << endl;
}

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
    // sumOfEachSubArray(a, n);
    // printSubArray(a, n);
    maximumSumSubArray(a, n);
}