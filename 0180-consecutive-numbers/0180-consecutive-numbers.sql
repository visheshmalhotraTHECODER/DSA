# Write your MySQL query statement below
WITH subquery AS(
    SELECT num,
        LAG(num, 1) OVER (order by id ) AS prev1,
        LAG(num, 2) OVER (order by id ) AS prev2
    FROM Logs 
    )

    SELECT DISTINCT num AS ConsecutiveNums 
    from subquery
    WHERE num = prev1
    AND num = prev2;
