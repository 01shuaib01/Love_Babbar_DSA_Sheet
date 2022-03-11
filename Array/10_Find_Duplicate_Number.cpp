
#include<bits/stdc++.h>
#include<vector>

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        /*
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans = ans ^ nums[i];
        }
        for(int i=1;i<nums.size();i++){
            ans = ans ^ i;
        }

        return ans;
        */
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};