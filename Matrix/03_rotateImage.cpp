class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        vector<vector<int>> a;
        vector<int> v;

        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                // cout << matrix[j][i] << " ";
                v.push_back(matrix[j][i]);
            }
            a.push_back(v);
            v.clear();
            // cout << endl;
        }
        matrix = a;
    }
};