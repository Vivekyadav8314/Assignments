CREATE DATABASE crs;
USE crs;

CREATE TABLE Customers (
    customer_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    address VARCHAR(255),
    phone VARCHAR(15),
    email VARCHAR(100) UNIQUE
);

CREATE TABLE Cars (
    car_id INT PRIMARY KEY AUTO_INCREMENT,
    make VARCHAR(50) NOT NULL,
    model VARCHAR(50) NOT NULL,
    year INT NOT NULL,
    status ENUM('available', 'rented', 'maintenance') NOT NULL,
    location_id INT,
    FOREIGN KEY (location_id) REFERENCES Locations(location_id)
);

CREATE TABLE Rentals (
    rental_id INT PRIMARY KEY AUTO_INCREMENT,
    car_id INT NOT NULL,
    customer_id INT NOT NULL,
    rental_date DATE NOT NULL,
    return_date DATE,
    status ENUM('ongoing', 'completed', 'canceled') NOT NULL,
    FOREIGN KEY (car_id) REFERENCES Cars(car_id),
    FOREIGN KEY (customer_id) REFERENCES Customers(customer_id)
);

CREATE TABLE Locations (
    location_id INT PRIMARY KEY AUTO_INCREMENT,
    address VARCHAR(255) NOT NULL,
    city VARCHAR(50) NOT NULL,
    state VARCHAR(50) NOT NULL,
    zip_code VARCHAR(10) NOT NULL
);

CREATE TABLE Payments (
    payment_id INT PRIMARY KEY AUTO_INCREMENT,
    rental_id INT NOT NULL,
    amount DECIMAL(10, 2) NOT NULL,
    payment_date DATE NOT NULL,
    payment_method ENUM('cash', 'credit_card', 'debit_card', 'paypal') NOT NULL,
    FOREIGN KEY (rental_id) REFERENCES Rentals(rental_id)
);

INSERT INTO Locations (address, city, state, zip_code) VALUES
('123 Main St', 'Springfield', 'IL', '62701'),
('456 Elm St', 'Shelbyville', 'IL', '62702');

INSERT INTO Customers (name, address, phone, email) VALUES
('Alice Johnson', '789 Oak St, Springfield, IL 62703', '555-1234', 'alice@example.com'),
('Bob Smith', '101 Pine St, Shelbyville, IL 62704', '555-5678', 'bob@example.com');

INSERT INTO Cars (make, model, year, status, location_id) VALUES
('Toyota', 'Camry', 2020, 'available', 1),
('Honda', 'Civic', 2019, 'maintenance', 2);

INSERT INTO Rentals (car_id, customer_id, rental_date, status) VALUES
(1, 1, '2024-06-01', 'ongoing');

INSERT INTO Payments (rental_id, amount, payment_date, payment_method) VALUES
(1, 100.00, '2024-06-01', 'credit_card');


select * from Locations 