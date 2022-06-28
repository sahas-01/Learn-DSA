#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m[1] = 1;
    m[2] = 2;
    m[3] = 3;
    m[4] = 4;
    m[5] = 5;
    m[2] = 2;
    // m.erase(m.begin());
    // auto it = m.find(6);
    // cout << *it << endl;
    // s.erase(s.begin(), s.begin() + 2);
    // cout << s.end() - s.begin() << endl;
    cout << m.size() << endl;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}