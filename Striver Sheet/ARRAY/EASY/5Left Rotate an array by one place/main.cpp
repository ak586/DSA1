/*problem link
    https://takeuforward.org/data-structure/left-rotate-the-array-by-one/
    */

#include <bits/stdc++.h>
using namespace std;
// Left rotate by one
void rotateByOne(int arr[], int n)
{
    int temp = arr[0];
    // all elements will be shifted to left by one place
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    // first element will come at the last place
    arr[n - 1] = temp;
}

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
        rotateByOne(arr, n);
        for (int x : arr)
            cout << x << " ";
    }

    return 0;
}
