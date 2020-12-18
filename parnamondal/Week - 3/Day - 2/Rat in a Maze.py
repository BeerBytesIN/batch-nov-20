# Time Complexity - O(3^(n^2))
# Space Complexity - O(3^(n^2))

def findPath(arr, n):
    # code here
    res=[]
    if arr[n-1][n-1]==0:
        return res
    def issafe(i,j,n,arr,vis):
        if i<n and i>=0 and j<n and j>=0 and arr[i][j]==1 and vis[i][j]==False :
            return True
        return False
    
    vis=[[False for i in range (n)]for j in range (n)]
    puzz=[]
    def check(i,j,puzz,vis):
        if i==n-1 and j==n-1:
            res.append(''.join(map(str,puzz)))
            return 
        if not issafe(i,j,n,arr,vis):
            return
        else:
            vis[i][j]=True
            if issafe(i+1,j,n,arr,vis):
                puzz.append('D')
                #vis.ap([i+1,j])
                check(i+1,j,puzz,vis)  
                #vis.remove([i+1,j])
                puzz.pop()
            if issafe(i,j-1,n,arr,vis):           
                puzz.append('L')
                #vis.append([i,j-1])
                check(i,j-1,puzz,vis)
                #vis.remove([i,j-1])
                puzz.pop()
            if issafe(i,j+1,n,arr,vis):
                puzz.append('R')
                #vis.append([i,j+1])
                check(i,j+1,puzz,vis)
                #vis.remove([i,j+1])
                puzz.pop()
            if issafe(i-1,j,n,arr,vis):
                puzz.append('U')
                #vis.append([i-1,j])
                check(i-1,j,puzz,vis)
                #vis.remove([i-1,j])
                puzz.pop()
            vis[i][j]=False
        
    if arr[0][0]==1:
        check(0,0,puzz,vis)
    
    #res=*res
    return res
