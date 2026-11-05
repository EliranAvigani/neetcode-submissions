// i dont want to bruce force and compare everything against everything.
//perhaps hashmap to check uniqueness.
//dont remember what keyword is in c++
class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num:nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};