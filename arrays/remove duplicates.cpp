class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1){
            return nums.size();
        }
        int i = 0;
        for(int j = 1; j < nums.size() ; j++){
             if(nums[i]!=nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//t.c: 0(n)
//s.c:0(1)