#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.erase(v.begin(), v.begin() + 2);
    cout << v.end() - v.begin() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}