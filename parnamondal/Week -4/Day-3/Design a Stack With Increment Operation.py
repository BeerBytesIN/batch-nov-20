# Time Complexity - O(N)
# Space Complexity - O(N)

class CustomStack:

    def __init__(self, maxSize: int):
        self.maxSize=maxSize
        self.arr=[]
    def push(self, x: int) -> None:
        if len(self.arr)!=self.maxSize:
            self.arr.append(x)
            

    def pop(self) -> int:
        if len(self.arr)==0:
            return -1
        else:
            t=self.arr.pop()
            return t
        

    def increment(self, k: int, val: int) -> None:
        if len(self.arr)<k:
            for i in range (len(self.arr)):
                self.arr[i]+=val
        else:
            for i in range(k):
                self.arr[i]+=val
        


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)
