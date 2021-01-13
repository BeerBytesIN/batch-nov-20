# Number of paths with exactly k coins

# Time Complexity - 0(N*N*K)
# Space Complexity - O(N*N)

def number_of_paths_with_k_coins(a,i,j,n,k,sum,cache):
    if i>n-1 or j>n-1:
        return 0
    sum += a[i][j]
    if i == n - 1 and j == n - 1 and sum == k:
        return 1

    if (i, j, sum) in cache:
        return cache[(i, j, sum)]
    cache[(i, j, sum)] = number_of_paths_with_k_coins(
        a, i + 1, j, n, k, sum, cache) + number_of_paths_with_k_coins(
            a, i, j + 1, n, k, sum, cache)
    return cache[(i, j, sum)]
    
for _ in range(int(input())):
    k = int(input())
    n = int(input())
    v = input().split()
    temp_v = 0
    a = []
    while temp_v < len(v):
        temp_j = 0
        temp = []
        while temp_j < n:
            temp.append(int(v[temp_v]))
            temp_v+=1
            temp_j+=1
        a.append(temp)
    print(number_of_paths_with_k_coins(a, 0, 0, n, k, 0,{}))