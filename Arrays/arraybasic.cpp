#include <iostream>
using namespace std;

int main()
{
    // basic array initialization
    int arr[] = {3, 4, 5, 6, 7};

    cout << arr[0];

    // with loop and input from user
    int num, a[10];
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    cout << a[0];
}