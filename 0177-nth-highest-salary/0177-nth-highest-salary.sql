CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      with subquery as (
        select salary ,
        DENSE_RANK() OVER(ORDER BY salary DESC) AS rnk
        FROM Employee
      )
      SELECT MAX(SALARY)
      FROM subquery
      WHERE rnk = n

  );
END