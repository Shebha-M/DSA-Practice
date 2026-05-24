// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) 
    {
        int m = str2.size();
        
        for(int i=0; i<str1.size(); i++)
        {
            int k = 0;
            while(k<m)
            {
            char ch = str2[k];
            if(str1[i]==str2[k])
            {
                str1.erase(i,1);
                i--;
                break;
            }
            k++;
            }
        }
        return str1;
    }
};
