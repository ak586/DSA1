#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[j - 1] > arr[j])
                swap(arr[j], arr[j - 1]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    for (int x : arr)
        cout << x << " ";
    return 0;
}
