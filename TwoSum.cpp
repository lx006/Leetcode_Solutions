#include<iostream>
#include<vector>
using namespace std;


class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v2;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                    if(nums[i]+nums[j]==target)
                    {
                       v2.push_back(i);
                       v2.push_back(j); 
                        break;
                    }
            }
        }
        return v2;
    }
};

