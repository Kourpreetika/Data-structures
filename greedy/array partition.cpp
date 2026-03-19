class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // given an array named nums[]
        // group them into n pairs
        int maxSum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0 ;i< nums.size();i+=2){
            maxSum += nums[i];
        }
        return maxSum;
    }
    //https://leetcode.com/problems/-partition/?envType=problem-list-v2&envId=greedy