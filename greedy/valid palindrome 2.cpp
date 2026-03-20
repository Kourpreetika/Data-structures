class Solution {
public:
//helper function//to check palindrome//Checks if substring s[left...right] is a palindrome
// First loop → find mismatch
// Second loop → verify palindrome after skipping one char
    bool isPalindrome(string &s , int left , int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
            return true;
        }
        bool validPalindrome(string s){
            int left = 0;
            int right = s.size()-1;
            while(left<right){
                if(s[left]!=s[right]){
                    return isPalindrome(s, left+1,right)|| isPalindrome(s, left,right-1);
                }
                left++;
                right--;
            }
            return true;
        }
};
//https://leetcode.com/problems/valid-palindrome-ii/?envType=problem-list-v2&envId=greedy