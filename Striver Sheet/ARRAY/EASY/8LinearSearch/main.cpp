/*
Problem link
https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win

*/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << linearSearch(arr, 5, 7) << endl;
    cout << linearSearch(arr, 5, 3) << endl;
    cout << linearSearch(arr, 5, 1) << endl;

    return 0;
}