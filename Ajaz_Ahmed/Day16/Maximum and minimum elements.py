class Solution:
    def middle(self,A,B,C):
        #code here
        if A > B and A > C:
            biggest = A
            if B > C:
                return B
            else:
                return C
        elif B > A and B > C:
            biggest = B
            if A > C:
                return A
            else:
                return C
        else:
             if B > A:
                 return B
             else:
                 return A
            
