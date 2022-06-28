#include <iostream>
using namespace std;

void arrayShuffle(int a[], int size)
{

    // i is for variable from beginning of array
    // j is for variable from (n+1)th to 2nth element
    // k will keep track of the elements in new array
    int i = 0, j = (size / 2), k = 0;
    int shuffledArray[2 * size];

    while (i < (size / 2) && j < size && k < 2 * size)
    {
        shuffledArray[k] = a[i];
        shuffledArray[k + 1] = a[j];
        i++;
        j++;
        k += 2;
    }
    for (int i = 0; i < k; i++)
    {
        cout << shuffledArray[i] << " ";
    }
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
    arrayShuffle(a, n);
}