# Write your MySQL query statement below
-- SELECT 
--     d.name AS Department,
--     e1.name AS Employee,
--     e1.salary AS Salary
-- FROM employee e1 
-- JOIN department d 
-- ON e1.DepartmentId = d.id
-- WHERE 3 > (SELECT COUNT(distinct(salary)) FROM employee e2 
-- 			WHERE e1.DepartmentId = e2.DepartmentId AND e1.Salary < e2.salary
-- 		  );

SELECT 
    res.Department,
    res.Employee,
    res.salary
FROM (
    SELECT 
        b.name AS Department,
        a.name AS Employee,
        a.salary,
        DENSE_RANK() OVER (
            PARTITION BY a.departmentid 
            ORDER BY a.salary DESC
        ) AS rnk
    FROM employee a 
    JOIN Department b 
    ON  a.departmentid = b.id
) res
WHERE res.rnk <= 3;