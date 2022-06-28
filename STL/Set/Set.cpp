#include <bits/stdc++.h>
using namespace std;

// 1. All operations take logn time.
// 2. Unique + Sorted.
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.erase(s.begin());
    auto it = s.find(6);
    cout << *it << endl;
    // s.erase(s.begin(), s.begin() + 2);
    // cout << s.end() - s.begin() << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}