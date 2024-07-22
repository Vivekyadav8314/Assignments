 CREATE DATABASE compdtls;
 
 USE compdtls;
 CREATE TABLE CompDetails(
 CompName VARCHAR(100) PRIMARY KEY,
  RegDate DATE NOT NULL,
  StockPrice FLOAT, 
  country VARCHAR(50)
);

INSERT INTO CompDetails (CompName, RegDate, StockPrice, country) VALUES
('GizmoWork', '2019-10-21', 25, 'USA'),
('Canon', '2019-10-03', 65, 'Japan'),

('Hitachi', '2019-10-10', 15, 'India');

select * from CompDetails;

select  RegDate from CompDetails;

select *from CompDetails where country ='Japan';

select CompName from CompDetails where StockPrice =65;

select CompName, country from CompDetails where country IN ("USA", "India");

select MAX(StockPrice) from CompDetails;

select AVG(StockPrice) from CompDetails;

select DISTINCT(country) from CompDetails;

select COUNT(DISTINCT(country)) from CompDetails;

select CompName from CompDetails where country LIKE "%a";

