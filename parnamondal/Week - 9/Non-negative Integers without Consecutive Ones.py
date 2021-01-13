# Time Complexity - 0(logN)
# Space Complexity - O(1)


class Solution:
    def findIntegers(self, num: int) -> int:
        def parse(a):
            while a:
                yield a&1
                a>>=1
	    # in the beginning, these 4 values are undefined and special, you can try run the loop for the first time and deduce the initial value
        all0,all1,le0,le1 = 1,0,1,0
        for d in parse(num):
            # at the begining of i-th(i start from 0) loop
            # all0 means count of good-binary-string begins with 0 and has i chars
            # all1 means count of good-binary-string begins with 1 and has i chars
            # le0 means count of good-binary-string begins with 0 and <= num[n-i:]
            # le1 means count of good-binary-string begins with 1 and <= num[n-i:]
            
            # all0 and all1 can solve without num
            
            # now consider all (i+1) digit good-binary-string <= num[n-i-1:]
            # its leftmost digit depend on `d`
            if d==0:
                # new values update from old values
                all0,all1,le1,le0 = (
                    all0+all1,
                    all0,
                    0, # when leftmost digit is 1, it > num[n-i-1:]
                    le0+le1 # when the left most is 0, and the remain part start 0 or 1, but should <= num[n-i:]
                )
            else:
                # new values update from old values
                all0,all1,le1,le0 = (
                    all0+all1,
                    all0,
                    le0, # when leftmost digit 1, the remain part can only start with 0 and should <= num[n-i:]
                    all0+all1 # when leftmost digit is 0, the remain part is unlimited
                )
        return le0+le1