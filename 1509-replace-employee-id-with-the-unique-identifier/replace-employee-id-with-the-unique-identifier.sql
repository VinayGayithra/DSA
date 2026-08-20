# Write your MySQL query statement below
SELECT b.unique_id,a.name
FROM EmployeeUNI b
RIGHT JOIN  Employees a
ON b.id=a.id;