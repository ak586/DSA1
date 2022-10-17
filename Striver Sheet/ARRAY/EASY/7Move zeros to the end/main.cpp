/*
Problem link
https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array
*/
#include <bits/stdc++.h>
using namespace std;

// Brute force : copy non zero elements and paste it to one
//  end and paste the count of zeros to the another end



// optimised solution
// two pointer method
/*
take two pointers i and j one will point to non-zero elements
other pointing to zero if you find a non-zero value then replace zero-pointing
element by this value and move the pointer to the next and at last paste zeros
at the end
*/
void moveZerosToEnd(int arr[], int n)
{
    int count = 0;
    int i = 0, j = 0;
    while (i < n)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
        i++;
    }
    for (; j < n; j++)
    {
        arr[j] = 0;
    }
}

int main()
{
    int arr[] = {3, 5, 0, 0, 4};
    moveZerosToEnd(arr, 5);
    for (int a : arr)
        cout << a << " ";
}