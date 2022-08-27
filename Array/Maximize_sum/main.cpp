#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    long long sum = 0;

    for (int i = 0; i < T; i++)
    {
        int N;
        int k;
        cin >> N >> k;
        vector<int> arr(N);
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        int max = 0;
        int sum = 0;
        set<int> max_index;
        while (k != 0)
        {
            max = 0;
            for (int m = 0; m < N; m++)
            {
                if (arr[m] > arr[max] && max_index.find(m) == max_index.end())
                {
                    max = m;
                }
            }
            cout << max << endl;
            max_index.insert(max);
            k--;
        }

        cout << sum;
    }
}