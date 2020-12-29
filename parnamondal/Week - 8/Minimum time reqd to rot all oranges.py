# Time Complexity : O(r*c)
# Space Complexity : O(r*c)

def rotOranges(mat,r,c):
    '''
    mat: matrix, list of list, filled with 0,1,2
    r:   row
    c:   column
    
    return: minimum time taken to rot all the oranges (-1 if it is impossible).
    '''
    
    #code here
    import collections
    q = collections.deque()
    min_time = 0
    
    for i in range(r):
        for j in range(c):
            if mat[i][j] == 2:
                q.append((i, j))
    
    while q:
        new_q = collections.deque()
        
        while q:
            i, j = q.popleft()
            
            for nr, nc in ((i-1, j), (i+1, j), (i, j-1), (i, j+1)):
                if 0 <= nr < r and 0 <= nc < c and mat[nr][nc] == 1:
                    new_q.append((nr, nc))
                    mat[nr][nc] = 2
        
        if not new_q:
            break
        
        min_time += 1
        q = new_q
    
    for i in range(r):
        for j in range(c):
            if mat[i][j] == 1:
                return -1
    
    return min_time
            