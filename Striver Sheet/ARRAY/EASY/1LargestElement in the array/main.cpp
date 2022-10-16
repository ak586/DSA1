/* Problem link
        https : // practice.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array
                */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
        return max;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}
