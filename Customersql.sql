CREATE DATABASE Customers;
USE Customers;

CREATE TABLE CUSTOMERS(
C_id INT NOT NULL PRIMARY KEY,
CName VARCHAR(20) NOT NULL,
Age INT NOT NULL,
Address CHAR(50),
Salary DECIMAL(10 ,2)
);

INSERT INTO CUSTOMERS(C_id, CName, Age, Address, Salary)VALUES
(1, 'Roy', 32, 'Ahmedabad', 2000.00),
(2, 'John', 25, 'Delhi', 1500.00),
(3, 'Bob', 23, 'Kota', 2000.00),
(4, 'Ram', 25, 'Mumbai', 6500.00),
(5, 'Komal', 27, 'Indore', 10000.00);

select *from CUSTOMERS;

select C_id, CName, Salary from CUSTOMERS where Salary > 3000 AND Age >23;

select * from CUSTOMERS where CName LIKE 'r%' AND Age >= 20 AND Salary < 10000;

select *from CUSTOMERS where NOT (Salary > 6500 AND Age <30);

