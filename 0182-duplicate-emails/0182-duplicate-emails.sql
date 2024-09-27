# Write your MySQL query statement below

select email  as Email from (select email, count(email) as cnt from Person group by email) AS COUNTER where cnt > 1