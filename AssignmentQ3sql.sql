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
    
   
    
    select AVG(amount) AS avg_order_value from orders;
    
    
    select customer_id, customer_name from customers where customer_id IN(select o.customer_id from orders o where o.amount > (select AVG(amount) from orders));
    
    