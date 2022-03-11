
//  Brute Froce Approach

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        int i = 0, j = 0;
        int count = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                // cout << a[i] << " ";
                i++;
                count++;
            }
            else if (b[j] < a[i])
            {
                // cout << b[j] << " ";
                j++;
                count++;
            }
            else
            {
                // cout << b[j];
                j++;
                i++;
                count++;
            }
        }

        // print remaining element in the array
        while (i < n)
        {
            // cout << a[i]<<" ";
            i++;
            count++;
        }
        while (j < m)
        {
            // cout << b[j] << " ";
            j++;
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
} // } Driver Code Ends