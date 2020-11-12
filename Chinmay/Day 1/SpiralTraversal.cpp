class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> spiral;
        int lr = 0, lc = 0, rr = r-1, rc = c-1;
        while(lr <= rr && lc <= rc)
        {
            for(int i = lc; i <= rc; i++)
            {
                spiral.push_back(matrix[lr][i]);
            }
            
            lr++;
            if(lr > rr) break;
            
            for(int i = lr; i <= rr; i++)
            {
                spiral.push_back(matrix[i][rc]);
            }
            
            rc--;
            if(lc > rc) break;
            
            for(int i = rc; i >= lc; i--)
            {
                spiral.push_back(matrix[rr][i]);
            }
            
            rr--;
            if(lr > rr) break;
            
            for(int i = rr; i >= lr; i--)
            {
                spiral.push_back(matrix[i][lc]);
            }
            lc++;
        }
        return spiral;
    }
};