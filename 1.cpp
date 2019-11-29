class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        if(nums.size()<2)return res;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i])!=0)
            {
                res.push_back(m[nums[i]]);
                res.push_back(i);
                break;
            }
            m[target-nums[i]]=i;
        }
        return res;
    }
};
