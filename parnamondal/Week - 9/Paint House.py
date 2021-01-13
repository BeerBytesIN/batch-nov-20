# Time Complexity : O(logN)
# Space Complexity : O(1)

'''Ways to paint N paintings such that adjacent paintings don’t have same colors
Last Updated : 25 Aug, 2020
Given two integers n and m, where n represent some paintings numbered from 1 to n and m represent some colours 1 to m with unlimited amount. The task is to find the number of ways to paint the paintings such that no two consecutive paintings have the same colors.

Note: Answer must be calculated in modulo 10^9 +7 as answer can be very large.
Examples:

Input: n = 4, m = 2 
Output: 2

Input: n = 4, m = 6
Output: 750


Answer is m*(m-1)^n

we can use log (n) to find the power root , that's how the compexities

'''