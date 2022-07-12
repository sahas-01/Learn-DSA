#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 20;
    int *p = &n;
    // p++;
    // *p = 30;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &n << endl;

    // Pointer to pointer
    int **pp = &p; //Pointer which is pointing to the address of p
    cout << pp << endl; //Address of pp
    cout << *pp << endl; //Address of p
    cout << **pp << endl; //Value of p
    cout << *(*pp) << endl; //Value of p
    return 0;
}