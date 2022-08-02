#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    for (int i = 0; i < l.size(); i++)
    {
        cout << l.front() << " ";
    }
    return 0;
}