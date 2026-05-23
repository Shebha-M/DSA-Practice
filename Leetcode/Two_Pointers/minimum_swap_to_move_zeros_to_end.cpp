// Problem: Minimum Swaps to Move Zeros
// Platform: LeetCode
// Pattern: Two Pointers

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0; 
        int n = nums.size();
        int j = n-1;
        int cnt=0;

        while(i<=j)
        {
            if(nums[i]==0 && nums[j]==0)
                j--;

            else if(nums[i]==0 && nums[j]!=0)
            {
                swap(nums[i], nums[j]);
                cnt++;
                j--;
                i++;
            }

            else if(nums[i]!=0 && nums[j]==0)
            {
                j--;
                i++;
            }

            else
            {
                i++;
            }
        }

        return cnt;
    }
};