// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        // int maxSum = 0;
        int curSum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            curSum = curSum + arr[i];
            // maxi = max(curSum,maxi);
            if (curSum > maxi)
                maxi = curSum;
            if (curSum < 0)
                curSum = 0;
        }
        return maxi;
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends