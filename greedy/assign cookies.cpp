class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0,j = 0;
        int  count = 0;
        while(i<g.size()&& j<s.size()){
        if(s[j]>=g[j]){
            count ++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
        return count ;
    }
};
//https://leetcode.com/problems/assign-cookies/?envType=problem-list-v2&envId=greedy