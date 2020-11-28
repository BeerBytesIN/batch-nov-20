int maxArea_single(int arr[],int n){
    int area=0,max_area=0;
    stack<int> s;
    int i=0;
    while(i<n){
        if(s.empty() || arr[s.top()]<=arr[i])
        s.push(i++);
        else{
            int top=s.top();
            s.pop();
            area=(s.empty()? i:i-s.top()-1)*arr[top];
            if(area>max_area)
            max_area=area;
            }
        }
        while(!s.empty()){
            int top=s.top();
            s.pop();
              area=(s.empty()? i:i-s.top()-1)*arr[top];
            if(area>max_area)
            max_area=area;
        }
        return max_area;
    }

int maxArea(int mat[MAX][MAX], int n, int m) {
    // Your code here
int arr[m];
for(int i=0;i<m;i++)
arr[i]=mat[0][i];
int max_area=maxArea_single(arr,m);
for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j])
        arr[j]++;
        else
        arr[j]=0;
    }
    max_area=max(max_area,maxArea_single(arr,m));
}
return max_area;
    
}