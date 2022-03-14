// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        //  brute  force
        /*
            int count = 0;

            if(N == 0)
                return 0;

            for (int i = 1; i <= N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i == arr[j])
                    {
                        count++;
                        break;
                    }
                }
            }
            // cout << count << endl;
            return count;
            */

        set<int> hashSet;
        for (int i = 0; i < N; i++)
        {
            hashSet.insert(arr[i]);
        }
        int longestStreak = 0;
        for (int i = 0; i < N; i++)
        {
            if (!hashSet.count(arr[i] - 1))
            {
                int currentNum = arr[i];
                int currentStreak = 1;

                while (hashSet.count(currentNum + 1))
                {
                    currentNum += 1;
                    currentStreak += 1;
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends