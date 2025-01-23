# Write your MySQL query statement below
SELECT sp.name
FROM SalesPerson sp
WHERE sp.name not in(
    SELECT sp.name
    FROM SalesPerson sp
    LEFT join Orders o
    on sp.sales_id = o.sales_id
    LEFT join Company c
    on o.com_id = c.com_id
    where c.name = 'RED'
)