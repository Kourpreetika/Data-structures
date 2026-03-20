class Solution{
    public:
     vector<int> twoSum (vector<int> & nums , int target){
    //array:nums[]
    //integer:target
    //return indices of two numbers sunch that they add up to target.
    //1.start  the iteration of nums
    //compare i and i+1 until there sum is target 
    //return indices
    for(int i = 0; i <  nums.size();i++){
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(nums[i] + nums[j]==target){
            return{i,j};
            }
        }
    }
        return {};
    }

};
//https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=array