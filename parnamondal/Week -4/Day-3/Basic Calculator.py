# Time Complexity - O(N)
# Space Complexity - O(N)

class Solution:
	def calculate(self, s: str) -> int:

		# temp_res & res
		res = 0
		# num's sign
		sign = 1
		# calculate num
		num = 0

		stack = []

		# 1. digit
		# 2. (
		# 3. )
		# 5. -
		# 6. + 
		# other (no effect)
		for i in range(len(s)):
			# 1. digit (just for calculation)
			if s[i].isdigit():
				num = num*10 + int(s[i])
			# 2.( push
			elif s[i] == '(':
				# append current res and current sign
				stack.append(res)
				# could be stored in other stack, but not necessary
				stack.append(sign)

				# reset res & sign
				res = 0
				sign = 1

			# 3. ) pop
			elif s[i] == ')':
				# handle num stored in memory
				res += num*sign

				# handle num stored in stack
				# pop sign first
				res *= stack.pop()
				# then pop num
				res += stack.pop()

				# res num
				num = 0

			# 4. & 5.: + , -
			elif s[i] in '-+':
				res += num*sign
				sign = -1 if s[i]=='-' else 1
				# res num
				num = 0

		# for situation1, we did't add the current res and num stored in memeory, so add it here
		res+= num*sign


		return res
                
                
            
        