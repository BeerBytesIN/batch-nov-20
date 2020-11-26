# Time Complexity - 0(N^target)
# Space Complexity - O(N) considering each one


class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        def dfs(candidates, path, result):
            sum_path = sum(path)
            
            # base case 1:
            if sum_path == target:
                # to avoid multiple solutions
                # if sorted(path) not in result:
                result.append(path[:])
                # backtracking
                return
            
            # base case 2
            elif sum_path > target:
                # backtracking
                return
            else:
                for i in range(len(candidates)):
                    if candidates[i] > target:
                        # No need to explore the childs, will not lead to a solution.
                        # Jump to the next iteration from the for loop
                        continue
                    # We do not want to go down a tree that starts by the same number the previous branch did.
                    # Applicable after the first branch has been analysed and we have a SORTED input
                    if i>=1 and candidates[i] == candidates[i-1]:
                        # Problems statement specifies that we cannot use the same element twice
                        continue
                    dfs(candidates[i+1:], path+[candidates[i]], result)
                    # No need to pop the element from path, because path is not modified before accesing dfs, so we keep the earlier value still.
                    # path.pop()
        
        result = []
        dfs(sorted(candidates), [], result)
        return result