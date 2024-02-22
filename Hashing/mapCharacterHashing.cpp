#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> charmap;

    for (int i = 0; i < s.size(); i++)
    {
        charmap[s[i]]++;
    }

    for (auto it : charmap)
    {
        cout << it.first << " --> " << it.second << endl;
    }

    return 0;
}