class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      //  1.integer:numRow
      //each number is sum of two
      if(numRows==1){
        return {{1}};
      }
      if(numRows==2){
        return {{1},{1,1}};

    }
    vector<vector<int>> answer = {{1}, {1, 1}};
for(int i=3;i<=numRows;i++)
{
    vector<int> newRow=vector<int>(i,1);
    answer.push_back(newRow);
    for (int j = 1; j <= i - 2; j++) {
    answer[i - 1][j] = answer[i - 2][j - 1] + answer[i - 2][j];
    }
}
return answer;
    }
};
//https://leetcode.com/problems/pascals-triangle/?envType=problem-list-v2&envId=array