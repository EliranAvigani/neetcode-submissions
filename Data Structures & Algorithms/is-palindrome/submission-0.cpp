//first thought is to have one pointer at the front and one at the rear. they both go from front to back and back to front at the same time, checking if they are equal to each other. whenever it stops being equal it is nota palindrome. ignore anything that isnt a letter or number
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while (left < right) {
            if(!isalnum(s[left])) {
                left++;
            } else if(!isalnum(s[right])) {
                right--;
            } else if (tolower(s[left])!=tolower(s[right])) {
                return false;
            } else {
                left++;
                right--;
            }
        }
        return true;
    }
};