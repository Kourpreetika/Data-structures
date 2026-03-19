class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map <char, int> f;
       for(char c: s){
        f[c]++;
       }
       int ans = 0;
       bool OddElement = false;
       for(char i = 'a'; i <= 'z'; i++){
        if(f[i] % 2){
            OddElement = true;
            ans+= f[i] - 1;
        }
        else{
            ans+= f[i];
        }
       }
       for(char i = 'A'; i <= 'Z'; i++){
        if(f[i] % 2){
            OddElement = true;
            ans+= f[i] - 1;
        }
        else{
            ans+= f[i];
        }
       }
       return ans + OddElement;
    }
};