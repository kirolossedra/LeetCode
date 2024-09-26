SELECT o.name as Employee
FROM Employee o
WHERE o.salary > (
    SELECT i.salary
    FROM Employee i
    WHERE i.id = o.managerId
);