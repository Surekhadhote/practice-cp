SELECT IFNULL((SELECT dISTINCT Salary
	             FROM Employee 
				 ORDER BY Salary DESC 
				 LIMIT 1,1),NULL) AS SecondHighestSalary;
