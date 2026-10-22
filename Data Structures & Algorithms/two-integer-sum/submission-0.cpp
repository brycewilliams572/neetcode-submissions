class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> data;
        vector<int> output = {-1,-1};
        for (int i = 0; i < nums.size(); i++){
            int differenceVal = target - nums[i];
            if(data.count(differenceVal) > 0){
                output[0] = data[differenceVal];
                output[1] = i;
                break;
            }
            data[nums[i]] = i;
        }
        return output;
    }
};
