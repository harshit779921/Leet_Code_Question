class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minimum = prices[0]
        max_profit = 0
        for i in prices[1:]:
            if minimum > i:
                minimum = i
            else:
                max_profit = max(max_profit, i - minimum)
            
        return max_profit