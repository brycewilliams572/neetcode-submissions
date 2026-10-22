class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> newVec;
        for (int i = 0; i < nums.size(); i++){
            newVec.insert(nums[i]);
        }
        if (newVec.size() != nums.size()){
            return true;
        }
        return false;
    }
};