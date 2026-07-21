# Write your MySQL query statement below
SELECT MAX(num) as num
FROM (
    SELECT num
    FROM MyNumbers
    GROUP BY NUM
    HAVING COUNT(num)=1
)AS single_number;
