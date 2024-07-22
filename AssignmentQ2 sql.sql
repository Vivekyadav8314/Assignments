--Q2. Craft a query using an INNER JOIN to combile ‘orders’ and ‘customer’ table for customers in a specofied region, and a LEFT JOINE to display all customers including those without orders.

CREATE DATABASE Q2customer;
USE Q2customer;


CREATE TABLE customers(
customer_id INT AUTO_INCREMENT PRIMARY KEY,
customer_name VARCHAR(20),
region VARCHAR(50)
);

INSERT INTO customers( customer_name, regio) VALUES
  ('John', 'New York'),
  ('Jane','Los Angeles'),
  ('Michael', 'Chicago');

  
  CREATE TABLE orders(
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_id INT,
    order_date DATE,
    amount DECIMAL(10,2),
    FOREIGN KEY(customer_id) REFERENCES customers(customer_id)
    );
    
    INSERT INTO orders(customer_id, order_date, amount) VALUES
    (1, '2023-01-10', 150.00),
    (3, '2023-01-15', 200.00),
    (1, '2023-03-20', 100.00);
    
    select c.customer_id, c.customer_name, c.regio, o.order_date, o.amount from customers c
    LEFT JOIN orders o ON c.customer_id = o.customer_id where c.regio = 'New York';