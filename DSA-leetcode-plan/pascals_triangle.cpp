class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        // vec of vecs is the answer
        vector<vector<int>> vec;

        for (int i = 0; i < numRows; i++)
        {
            //(size,vals)
            vector<int> v(i + 1, 1);

            // j=0 and j=i already filled with 1 - so chill
            // loop will not run for 2nd row in pascals triangle then , j=0 and 1
            for (int j = 1; j < i; j++)
            {
                // before row - adj two values added = v[j]
                v[j] = vec[i - 1][j - 1] + vec[i - 1][j];
            }

            vec.push_back(v);
        }

        return vec;
    }
};