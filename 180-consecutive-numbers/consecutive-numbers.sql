# Write your MySQL query statement below
WITH CTE AS (SELECT num,
LEAD(num,1) OVER() AS num1,
LEAD(num,2) OVER() AS num2
FROM Logs
)

SELECT DISTINCT num as ConsecutiveNums
FROM CTE 
WHERE num=num1 and num1 = num2