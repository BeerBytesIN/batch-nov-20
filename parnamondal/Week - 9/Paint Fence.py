# Time Complexity - O(N)
# Space Complexity - O(N)


def countWays(n, k): 
      
    dp = [0] * (n + 1) 
    total = k  
    mod = 1000000007
      
    dp[1] = k 
    dp[2] = k * k     
      
    for i in range(3,n+1): 
        dp[i] = ((k - 1) * (dp[i - 1] + dp[i - 2])) % mod 
          
    return dp[n] 


''' diff = no of ways when color of last
        two posts is different
 same = no of ways when color of last 
        two posts is same
 total ways = diff + sum

for n = 1
    diff = k, same = 0
    total = k

for n = 2
    diff = k * (k-1) //k choices for
           first post, k-1 for next
    same = k //k choices for common 
           color of two posts
    total = k +  k * (k-1)

for n = 3
    diff = k * (k-1)* (k-1) 
           //(k-1) choices for the first place 
        // k choices for the second place
        //(k-1) choices for the third place
    same = k * (k-1) * 2
        // 2 is multiplied because consider two color R and B
        // R R B or B R R 
        // B B R or R B B  
           c'' != c, (k-1) choices for it

Hence we deduce that,
total[i] = same[i] + diff[i]
same[i]  = diff[i-1]
diff[i]  = (diff[i-1] + diff[i-2]) * (k-1)
         = total[i-1] * (k-1)'''