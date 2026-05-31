class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int, int>mp;
        int cnt =0;
        int num = n;
        while(num !=0)
            {
                int last = num %10;
                mp[last]++;
                num /=10;
            }

        int sum = 0;
        for(auto it : mp)
        {
           sum += it.first * it.second;
        }
        return sum;
    }
};