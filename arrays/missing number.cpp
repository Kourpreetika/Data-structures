class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // range is [0, n], number of elements is fixed n + 1
        // size of input is also fixed n

        // range [0, 3] -> elements in your range are 0, 1, 2, 3 (total 4)
        // now if I give you a vector nums containing n distinct elements (n = 3)
        // [0, 1, 2], [3, 1, 2], [1, 0, 3]
        // why will 1 number always be missing in nums vector

        int n = nums.size();

        // for example if n = 3
        // total 4 numbers: 0, 1, 2, 3
        // [0, 3, 1] => missing number is 2
        // numbers range from 0 to n (total n + 1 numbers)

        // algo:
        // for every number in nums, mark it as visited
        // the only number left unvisited is the answer

        vector<int> visited(n + 1); // access indices from 0 to n

        // Example state changes:
        // [0, 0, 0, 0]
        // [1, 0, 0, 0]
        // [1, 0, 0, 1]
        // [1, 1, 0, 1]

        for (int i : nums)
            visited[i] = 1;

        for (int idx = 0; idx <= n; idx++) {
            if (!visited[idx]) {
                return idx;
            }
        }

        // why will there be at least 1 zero in visited array?
        // control will never reach here — why is this true?
        return -1;
    }
};
//https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=array