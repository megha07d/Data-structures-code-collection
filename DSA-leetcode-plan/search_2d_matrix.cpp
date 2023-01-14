class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        vector<int>::iterator start, end, flag;

        int max;

        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++)
        {
            max = matrix[i][n - 1];

            if (target > max)
                continue;

            start = matrix[i].begin();
            end = matrix[i].end();

            // search in a row - i
            flag = find(start, end, target);

            if (flag != end)
                return true;
        }

        return false;
    }
};