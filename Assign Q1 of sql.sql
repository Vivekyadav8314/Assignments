CREATE DATABASE Customer;
USE Customer;

CREATE TABLE Customers(
customer_id INT AUTO_INCREMENT PRIMARY KEY,
customer_name VARCHAR(20),
email_address VARCHAR(30),
city VARCHAR(50)
);

INSERT INTO Customers( customer_name, email_address, city) VALUES
  ('John', 'john123@example.com', 'New York'),
  ('Jane', 'jane123@example.com', 'Los Angeles'),
  ('Michael', 'michael123@example.com', 'Chicago');
  
  select customer_name, email_address from Customers where city ='New York';
      
   select *from Customers;   
