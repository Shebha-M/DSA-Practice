class Solution 
{
public:
    int romanToInt(string s) 
    {
        int sum = 0;
        map<char, int>mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
            
        for(int i=0; i<s.size(); i++)
        {
            int current = mp[s[i]];
            int next    = mp[s[i+1]];
            if(current >= next)
                sum += current;
            else                //if(current < next)
                sum -= current;
        }
        return sum;  
    }
};