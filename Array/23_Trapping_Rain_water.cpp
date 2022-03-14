// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        /*
        int left[n];
        int right[n];
        // left[0] = arr[0];
        for(int i = 0;i<n;i++)
        {
            left[i] = max(left[i-1],arr[i]);
        }

        right[n-1] = arr[n-1];
        for(int i = n-2;i>=0;i--){
            right[i] = max(right[i+1],arr[i]);
        }

        long long ans = 0;
        for(int i = 0;i<n;i++)
        {
            ans += (min(left[i],right[i]-arr[i]));
        }

        return ans;
        */
        int mxl[n], mxr[n], water[n];
        long long i, sum = 0;

        mxl[0] = arr[0];
        for (i = 1; i < n; i++)
        {
            mxl[i] = max(mxl[i - 1], arr[i]);
        }

        mxr[n - 1] = arr[n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            mxr[i] = max(mxr[i + 1], arr[i]);
        }

        for (i = 0; i < n; i++)
        {
            water[i] = min(mxl[i], mxr[i]) - arr[i];
        }

        for (i = 0; i < n; i++)
        {
            sum += water[i];
        }
        return sum;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends