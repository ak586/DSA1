#include <bits/stdc++.h>
using namespace std;

// bruteforce approach
// time: O(n ) space O(n)
void LeftRotate1(int arr[], int size, int k)
{
    if (k >= size)
        k =   k%size;
    int temp[k];
    int i;
    // step 1
    for (i = 0; i < k; i++)
        temp[i] = arr[i];
    // step 2 shift other elements to k position left
    for (i = k; i < size; i++)
    {
        arr[i - k] = arr[i];
    }
    // paste temp elements at the last of the array
    i = 0;
    while (i < k)
    {
        arr[i + size - k] = temp[i];
        i++;
    }
}

// more optimised solution
// Time O(n) Space O(1)
void reverse(int arr[], int start, int end)
{
    int i = start;
    int j = end;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void LeftRotate2(int arr[], int n, int k)
{
    if (k >= n)
        k = n % k;

    // step 1 reverse complete array
    reverse(arr, 0, n - 1);
    // step 2 reverse first n-k elements
    reverse(arr, 0, n - k - 1);
    // reverse last k elements
    reverse(arr, n - k, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    LeftRotate2(arr, 7, 3);
    for (int x : arr)
        cout << x << " ";
}
