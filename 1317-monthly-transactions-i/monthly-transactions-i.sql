# Write your MySQL query statement below
SELECT DATE_FORMAT(trans_date,'%Y-%m') as month, 
Country, 
Count(*) as trans_count,
SUM( CASE WHEN state="approved" THEN 1 else 0 end) as approved_count, 
Sum(amount) as trans_total_amount,
SUM( CASE WHEN state="approved" THEN amount else 0 end )as approved_total_amount
FROM Transactions
GROUP BY month, Country
