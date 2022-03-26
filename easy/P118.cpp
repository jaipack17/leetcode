class Solution {
public:
    vector<vector<int>> generate(int numRows) {    
        vector<vector<int>> p(1);
        p[0] = {1}; 
        
        if (numRows > 1) p.push_back({1, 1});
        if (numRows > 2) {
            for (int i = 2; i < numRows; ++i) {
                vector<int> prev = p[i - 1];
                vector<int> r(i + 1);
                r[0] = 1;
                r[i] = 1; 
                for (int j = 0; j < prev.size() - 1; ++j) {
                    r[j + 1] = prev[j] + prev[j + 1];
                }
                p.push_back(r);
            }   
        }
        
        return p;
    }
};
