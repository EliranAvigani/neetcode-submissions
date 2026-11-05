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
//we create an unordered_set which is an empty hash table. this eforces unique elements, not ordered. here we used count to see how many times a specific key pops up and returns how many times it appears. in this case count returns either 0 or 1 if the value is not present or present.

//time and space: Time is O(n) search time. Space is O(n)