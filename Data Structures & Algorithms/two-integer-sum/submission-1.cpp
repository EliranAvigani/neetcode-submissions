// put numbers from i or j into hashmap. take target integer, subtract by whatever is in the array i or j. if its there then boom you found it, if not then not there. 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;

        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];

            if (map.find(complement) != map.end()){
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
