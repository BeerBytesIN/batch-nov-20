#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        // code here 
        int Rs=0,Re=r-1,Cs=0,Ce=c-1;
        vector<int> v;
        while(Rs<=Re&&Cs<=Ce)
        {
            for(int i=Cs;i<=Ce;i++)
            {
                v.push_back(matrix[Rs][i]);
            }
            for(int i=Rs+1;i<=Re;i++)
            {
                v.push_back(matrix[i][Ce]);
            }
            if(Rs==Re||Cs==Ce)
            {
                break;
            }
            for(int i=Ce-1;i>=Cs;i--)
            {
                v.push_back(matrix[Re][i]);
            }
            for(int i=Re-1;i>=Rs+1;i--)
            {
                v.push_back(matrix[i][Cs]);
            }
            
            Rs++;
            Re--;
            Ce--;
            Cs++;
        }
        return v;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int>> matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 