# Write your MySQL query statement below
SELECT S.stock_name, 
SUM(CASE WHEN S.operation = 'Sell' THEN S.price ELSE 0 END)
-
SUM(CASE WHEN S.operation = 'Buy' THEN S.price ELSE 0 END)  
AS capital_gain_loss
FROM Stocks S
GROUP BY stock_name;