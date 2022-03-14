#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Maxaltra(int arr[], int n)
{
    int minVal = arr[0];
    int maxVal = arr[0];

    int maxProduct = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
            swap(maxVal, minVal);

        // maxVal and minVal stores the
        // product of subarray ending at arr[i].
        maxVal = max(arr[i], maxVal * arr[i]);
        minVal = min(arr[i], minVal * arr[i]);

        // Max Product of array.
        maxProduct = max(maxProduct, maxVal);
    }

    // Return maximum product found in array.
    // return maxProduct;

    cout << maxProduct << endl;
}

// brute force
/*
void maxPro(int arr[], int n)
{
    int pro = 1;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        pro = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            pro = pro * arr[j];
            maxi = max(maxi, pro);
        }
    }
    cout << maxi << endl;
}
*/

int main()
{
    // int arr[] = {6, -3, -10, 0, 2};
    int arr[] = {2, 3, 4, 5, -1, 0};
    int n = sizeof(arr) / sizeof(int);
    // maxPro(arr, n);
    Maxaltra(arr, n);
    return 0;
}