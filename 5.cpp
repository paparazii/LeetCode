class Solution {
public:
    string longestPalindrome(string s) {
        int max_s=0,max_l=0;
        for(int i=0;i<s.size();i++)
        {
            int start=i, end=i;
            while((end+1)<s.size()&&s[end+1]==s[end])end++;
            while(start-1>=0&&end+1<s.size()&&s[start-1]==s[end+1])
            {
                start--;
                end++;
            }
            if(end-start+1>max_l)
            {
                max_l=end-start+1;
                max_s=start;
            }
        }
        return s.substr(max_s,max_l);
    }
};
