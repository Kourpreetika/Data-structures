class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // given:array of strings:strs[]
        //algo:
        // 1.satrt iteration of the  first element of the array 
        // 2.if equivalent then check for the next element of the string
        //3.return the common elements stored in a string variable:str1;
        string strs1 = "";
        char ch ;
        for(int i = 0 ; i < strs.size() ; i++){//f
            for(int j = 0 ; j < strs.size() ; j++){//f
                if( strs[i]== strs[j]){//f==f
                    strs[i] = ch;//f=ch
                    strs1.push_back(ch);
                }
            }
        }
        return{};
    }
};