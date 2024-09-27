SELECT 
    CASE 
        WHEN (SELECT COUNT(DISTINCT SALARY) FROM employee) > 1 THEN 
            (select salary from (select DISTINCT salary from employee  order by salary desc limit 2) AS SUB1  order by salary limit 1 )
        ELSE 
            NULL
    END AS SecondHighestSalary

FROM employee
LIMIT 1;



