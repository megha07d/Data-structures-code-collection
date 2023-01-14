class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        //check if the given parameters are legit or not
        
        //first find measures of matrix u have
        
        //num of rows = num of elements in vector
        int r0 = mat.size();
        //num of columns = num of elements in first element of vector
        int c0= mat[0].size();
        
        //create a vector of vectors
        vector<vector<int>> res_mat;
        
        //legit?
        if (r0 * c0 != r * c)
            //not legit/ impossible parameters
            return mat;
        
        //traverse mat and load res_mat
        
        //create temp vec to load row-wise
        
        vector<int> temp;
        for(int i=0;i<r0;i++)
        {
            for(int j=0;j<c0;j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        
        //load in to res_mat
        int p=0;
        
        for(int i=0;i<r;i++)
        {
            vector<int> tempy;
            for(int j=0;j<c;j++)
            {
                tempy.push_back(temp[p++]);
            }
            
            //push this vector into res vector
            res_mat.push_back(tempy);
        }
        
        return res_mat;
        
        
    }
};