/*
   Problem link
   https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicate-elements-from-sorted-array

 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int remove_duplicate(int arr[], int n)
    {
        int i = 0;
        int j = 1;
        int count = 1;
        // two pointer method
        while (j < n)
        {
            if (arr[i] != arr[j])
            {
                // if elements are different then move it to i+1 th index
                arr[i + 1] = arr[j];
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicate(a, N);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}