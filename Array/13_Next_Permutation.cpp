class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        /*  using built in function*/
        next_permutation(nums.begin(), nums.end());

        /*
        int n = nums.size(),k,l;
        for(int k = n-2;k >= 0;k--){
            if(nums[k] < nums[k+1])
                break;
        }

        if(k < 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
            for(int l = n-1; l > 0; l--){
                if(nums[l] > nums[k]){
                    break;
                }
            }
        swap(nums[k],nums[l]);
        reverse(nums.begin() + k + 1,nums.end());
        }

        */
    }
};