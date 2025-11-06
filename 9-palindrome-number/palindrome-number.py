class Solution:
    def isPalindrome(self, x: int) -> bool:
        ans = 0 
        temp = x
        while x>0:
            last_digit = x%10
            ans = ans*10+ last_digit
            x = x//10
        return temp == ans

# Most Optimize
        # x_str = str(x)
        # return x_str == x_str[::-1]