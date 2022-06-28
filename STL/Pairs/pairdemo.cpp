#include <bits/stdc++.h>
using namespace std;

void pairprint(pair<int, int> p, pair<int, pair<int, int>> p1, pair<int, int> a[20])
{
    cout << "{" << p.first << "," << p.second << "}" << endl;
    cout << "{" << p1.first << "," << p1.second.first << "," << p1.second.second << "}" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "{" << a[i].first << "," << a[i].second << "}" << endl;
    }
}

int main()
{
    pair<int, int> p;
    pair<int, pair<int, int>> p1;
    p1.first = 1;
    p1.second.first = 2;
    p1.second.second = 3;
    p.first = 10;
    p.second = 20;
    pair<int, int> arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i].first = i;
        arr[i].second = i + 1;
    }
    pairprint(p, p1, arr);
    return 0;
    // cout << p.first << " " << p.second << endl;
}