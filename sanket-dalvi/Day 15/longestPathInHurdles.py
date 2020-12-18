def solve(arr, i, j, last, pathArr, prev):
    if i == j == last:
        paths.add("".join(pathArr))
    elif 0 <= i <= last and 0 <= j <= last:
        prev = prev.copy()
        prev.add((i,j))
        if i > 0 and (i-1, j) not in prev and arr[i-1][j]:
            solve(arr, i-1, j, last, pathArr+["U"],prev)
        if i < last and (i+1, j) not in prev and arr[i+1][j]:
            solve(arr, i+1, j, last, pathArr+["D"],prev)
        if j > 0 and (i, j-1) not in prev and arr[i][j-1]:
            solve(arr, i, j-1, last, pathArr+["L"],prev)
        if j < last and (i, j+1) not in prev and arr[i][j+1]:
            solve(arr, i, j+1, last, pathArr+["R"],prev)

def findPath(arr, n):
    global paths
    paths = set()
    solve(arr, 0, 0, n-1, [],set())
    return max(map(len, paths))


# Test
arr = [
    [1, 0, 0, 0],
    [1, 1, 0, 1],
    [1, 1, 0, 0],
    [0, 1, 1, 1]
]
print(findPath(arr, len(arr)))
arr = [
    [1,0],
    [1,0]
]
print(findPath(arr, len(arr)))
