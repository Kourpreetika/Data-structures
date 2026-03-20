class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //algo:
        //1.start iteration on the elemts ogf the array nums.
        //2.check if all the elemts are presengt twice:
        //create an another vector ,store the values of the previous vector i the new vector,sort them ,check count(s[i]);
        //if count(s[i])==1
        //return s[i]
        //3.if not return nums[i]
        //nlog(n)+n=nlog(n);
        sort(nums.begin(),nums.end());//[1, 1, 2, 2, 4]
        for(int i= 0;i< nums.size()-1;i= i+2){//i=1
            if(nums[i] != nums[i+1]){//1 != 2(true)
                return nums[i];//
            }
        }
        return nums.back();//last element //nums[nums.size()-1]
    }    
};
//https://leetcode.com/problems/single-number/?envType=problem-list-v2&envId=array