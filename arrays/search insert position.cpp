class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // index
        // binary search
        // 1. search space should be monotonous
        // 2. it should be bounded

        // 1. true
        // 2. search space is [0 to n - 1] which is bounded

        int n = nums.size();
        int left = 0, right = n - 1;

        // [1, 3, 6, 8]
        // target = 9
        // left = 4, right = 3

        // answer index where we should insert 9
        // left

        while (left <= right) {
            // int is roughly 2e8
            int mid = (left + right) / 2;

            if (target > nums[mid]) {
                left = mid + 1;
            }
            if (target < nums[mid]) {
                right = mid - 1;
            }
            if (target == nums[mid]) {
                return mid;
            }
        }

        // answer is somewhere between left and right always
        return left;
    }
};
//https://leetcode.com/problems/search-insert-position/?envType=problem-list-v2&envId=array