class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int left=-1,res=0;
        for(int i=0;i<s.size();i++)
        {
            if(m.count(s[i])!=0)
                left=max(left,m[s[i]]);
            res=max(res,i-left);
            m[s[i]]=i;
        }
        return res;
    }
};
