class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            if (hash.find(nums[i]) != hash.end())
            {
                ans.push_back(i);
                ans.push_back(hash[nums[i]]);
                return ans;
            }
            hash[target - nums[i]] = i;
        }
        return ans;
    }
};
