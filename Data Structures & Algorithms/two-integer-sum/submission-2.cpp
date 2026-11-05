// put numbers from nums into hashmap. take target integer, subtract by whatever is in the array i. if its there then boom you found it, if not then not there. 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;   //create map to hold int, int for key int for location of it index wise 

        for (int i = 0; i < nums.size(); i++){  //loop through  using i as long as i is less than nums length
            int complement = target - nums[i]; //the compelement number is the target - the number in nums

            if (map.find(complement) != map.end()){ //if you find complement and it is not past the end 
                return {map[complement], i};   // reutrn the complement found in map and index
            }
            map[nums[i]] = i;    //store numbers that we have already visited. dont check same index twice
        }
        return {};
    }
};
