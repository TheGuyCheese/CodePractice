// Frequency of the Most Frequent Element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> numMap;

    for (int i = 0; i < n; i++)
    {
        numMap[arr[i]]++;
    }

    int minElement = 0, maxElement = 0;
    int minFrequency = n, maxFrequency = 0;
    for (auto it : numMap)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxFrequency)
        {
            maxElement = element;
            maxFrequency = count;
        }

        if (count < minFrequency)
        {
            minElement = element;
            minFrequency = count;
        }
    }
    cout << "Max: " << maxElement << " Min: " << minElement << endl;
    return 0;
}