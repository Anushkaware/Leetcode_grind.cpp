
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i < row; i++) {
            int mini = INT_MAX;
            int prev_col = 0;

            for(int j = 0; j < col; j++) {
                if(matrix[i][j] < mini) {
                    mini = matrix[i][j];
                    prev_col = j;
                }
            }

            bool lucky = true;

            for(int k = 0; k < row; k++) {
                if(matrix[k][prev_col] > mini) {
                    lucky = false;
                    break;
                }
            }

            if(lucky) {
                ans.push_back(mini);
            }
        }

        return ans;
    }
};
