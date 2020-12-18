# Time Complexity - O(1)
# Space Complexity - O(N)

class MyCircularDeque:

    def __init__(self, k: int):
        """
        Initialize your data structure here. Set the size of the deque to be k.
        """
        self.cq = []*k        
        self.size = 0
        self.max_len = k

    def insertFront(self, value: int) -> bool:
        """
        Adds an item at the front of Deque. Return true if the operation is successful.
        """
        if(self.size == self.max_len):
            return False
        self.cq.insert(0, value)
        self.size+=1
        return True

    def insertLast(self, value: int) -> bool:
        """
        Adds an item at the rear of Deque. Return true if the operation is successful.
        """
        if(self.size == self.max_len):
            return False
        self.cq.append(value)
        self.size+=1
        return True

    def deleteFront(self) -> bool:
        """
        Deletes an item from the front of Deque. Return true if the operation is successful.
        """
        if(not self.size):
            return False
        self.cq.pop(0)
        self.size-=1
        return True

    def deleteLast(self) -> bool:
        """
        Deletes an item from the rear of Deque. Return true if the operation is successful.
        """
        if(not self.size):
            return False
        self.cq.pop()
        self.size-=1
        return True

    def getFront(self) -> int:
        """
        Get the front item from the deque.
        """
        return -1 if not self.size else self.cq[0]

    def getRear(self) -> int:
        """
        Get the last item from the deque.
        """
        return -1 if not self.size else self.cq[-1]

    def isEmpty(self) -> bool:
        """
        Checks whether the circular deque is empty or not.
        """
        return not self.size

    def isFull(self) -> bool:
        """
        Checks whether the circular deque is full or not.
        """
        return self.size == self.max_len


# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()