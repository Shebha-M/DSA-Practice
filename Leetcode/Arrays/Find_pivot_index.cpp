class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int totSum = 0;
        for(int i=0; i<n; i++)
            totSum += nums[i];

        for(int i=0; i<n; i++)
        {
            int rightSum=0, leftSum=0;
            int t=i+1;
            while(t<n)
            {
                rightSum += nums[t];
                t++;
            }
            leftSum = totSum - rightSum-nums[i];
            if(leftSum == rightSum)
                return i;
        }
        return -1;
    }
};