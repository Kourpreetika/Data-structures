class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //Whenever you see:
// Sliding window + max/min
// Need to remove from both ends
//Remove the element that is no longer inside the current window
deque<int> dq;//it stores inx;
vector<int> ans;//It stores maximum elements of each window

for(int i = 0;i < nums.size(); i++){
    //remove out of window
    if(!dq.empty() && dq.front() == i-k)//s the front index of deque outside the current window;
    dq.pop_front();
    //maintain decreasing order
while(!dq.empty() && nums[dq.back()]  < nums[i])
dq.pop_back();

dq.push_back(i);
 // store result
if(i >= k-1)
ans.push_back(nums[dq.front()]);
    }
    return ans;
  }
};

//https://leetcode.com/problems/sliding-window-maximum/?envType=problem-list-v2&envId=sliding-window