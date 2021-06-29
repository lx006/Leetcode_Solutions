class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(i==(nums.size()-1))
            {
                return false;
            }
            else if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};
