// Top K Frequent Elements

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first > p2.second;

    return p1.second > p2.second;
}

void Solution(int arr[], int n, int k)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    vector<pair<int, int>> mapArr(mpp.begin(), mpp.end());

    sort(mapArr.begin(), mapArr.end(), compare);

    for (int i = 0; i < k; i++)
    {
        cout << mapArr[i].first << endl;
    }
}

int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    Solution(arr, n, k);
    return 0;
}