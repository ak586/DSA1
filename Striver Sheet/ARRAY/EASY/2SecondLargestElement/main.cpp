/* Problem link
    https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
*/
// finding the second largest element in the array which is different from the largest element
// Brute force approach is : Doing it by sorting  but we will do it without sorting
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function returns the second
    // largest element

    int print2largest(int arr[], int n)
    {

        int max1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[max1])
                max1 = i;
        }
        // cout<<max1;
        bool found = false;
        int max2;
        // checking if any element other than max exist
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[max1])
            {
                found = true;
                max2 = i;
            }
        }
        // if there are no elements other then maximum
        // element then return -1 this also covers the case when there
        // is only one element or all elements are same
        if (!found)
            return -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[max2] && arr[i] != arr[max1])
                max2 = i;
        }
        if (arr[max1] == arr[max2])
            return -1;
        return arr[max2];
    }
    // same logic can be applied in finding the second smallest element
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}