#include <bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> pp;

class Solution{   
public:

    //Method 1: Using priority queues..
    // int median(vector<vector<int>> &matrix, int r, int c){
    //     priority_queue<pp,vector<pp>,greater<pp>> pq;
    //     int count=0;
    //     int k=(r*c)/2;
    //     for(int i=0;i<r;i++)
    //     {
    //         pq.push({matrix[i][0],{i,0}});
    //     }
        
    //     while(!pq.empty()&&count<k)
    //     {
    //         pair<int,pair<int,int>> p=pq.top();
    //         pq.pop();
    //         pair<int,int> coor=p.second;
    //         int x=coor.first;
    //         int y=coor.second;
    //         count++;
    //         if(y+1<c)
    //         {
    //             pq.push({matrix[x][y+1],{x,y+1}});
    //         }
            
            
    //     }
    //     pair<int,pair<int,int>> a=pq.top();
    //     return a.first;
    // }



    //Method 2: Using Binary Search..
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        int min = INT_MAX, max = INT_MIN;
        for (int i=0; i<r; i++)
        {
            if (matrix[i][0] < min)
                min = matrix[i][0];
     
            if (matrix[i][c-1] > max)
                max = matrix[i][c-1];
        }
     
        int req = (r * c + 1) / 2;
        while (min < max)
        {
            int mid = min + (max - min) / 2;
            int val = 0;
            for (int i = 0; i < r; i++)
                val += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            if (val < req)
                min = mid + 1;
            else
                max = mid;
        }
        return min;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  