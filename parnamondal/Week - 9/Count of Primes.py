# Time Complexity : O(n(log(log(n))))
# Space Complexity : O(N)

class Solution:
    def countPrimes(self, n: int) -> int:
        prime = [True for i in range(n+1)] 
        p = 2
        while (p * p <= n): 

            # If prime[p] is not changed, then it is a prime 
            if (prime[p] == True): 

                # Update all multiples of p 
                for i in range(p * p, n+1, p): 
                    prime[i] = False
            p += 1
        c=0
        # Print all prime numbers 
        for p in range(2, n): 
            if prime[p]: 
                c+=1
        return c