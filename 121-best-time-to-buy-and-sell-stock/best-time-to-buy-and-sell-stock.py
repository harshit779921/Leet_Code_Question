class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # minimum = prices[0]
        # max_profit = 0
        # for i in prices[1:]:
        #     if minimum > i:
        #         minimum = i
        #     else:
        #         max_profit = max(max_profit, i - minimum)
            
        # return max_profit

        # Optimal
        max_profit = 0
        min_price = float("inf")

        for i in range(0, len(prices)):
            min_price = min(min_price, prices[i])
            max_profit = max(max_profit, prices[i] - min_price)

        return max_profit