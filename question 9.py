class Solution:
    def isPalindrome(self, x: int) -> bool:
        n=x
        sum=0
        if (n<0):
            return False
        while n!=0:
            sum=sum*10+n%10
            n=n//10
        return sum==x