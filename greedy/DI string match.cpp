class Solution {
public:
    vector<int> diStringMatch(string s) {//idid
        int low = 0;//n=4;0,1,2,3,4;l=0
        int high = s.size();//h=4
        vector<int> res;
        for(int i= 0; i < s.size(); i++){//idid
            if(s[i]=='I'){//s[i]=i
                res.push_back(low);//res=0,4
                low++;//l=1
            }else{
                res.push_back(high);//h=3
                high--;
            }
        }
         res.push_back(high);
        return res;
    }
};
//https://leetcode.com/problems/di-string-match/?envType=problem-list-v2&envId=greedy