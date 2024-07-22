CREATE DATABASE libsystem;

USE libsystem;

CREATE TABLE Books (
    BookID INT AUTO_INCREMENT PRIMARY KEY,
    Title VARCHAR(255),
    Author VARCHAR(255),
    ISBN VARCHAR(50),
    Genre VARCHAR(100),
    Quantity INT,
    AvailableQuantity INT
);
INSERT INTO Books (Title, Author, ISBN, Genre, Quantity, AvailableQuantity)VALUES 
       ('To Kill a Mockingbird', 'Harper Lee', '9780061120084', 'Fiction', 5, 5),
       ('1984', 'George Orwell', '9780451524935', 'Science Fiction', 3, 3),
       ('The Catcher in the Rye', 'J.D. Salinger', '9780316769488', 'Fiction', 4, 4),
       ('Pride and Prejudice', 'Jane Austen', '9780141439518', 'Romance', 6, 6),
       ('The Great Gatsby', 'F. Scott Fitzgerald', '9780743273565', 'Fiction', 7, 7);

CREATE TABLE Members (
    MemberID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100),
    Email VARCHAR(255),
    Address VARCHAR(255)
);
INSERT INTO Members (Name, Email, Address)VALUES 
       ('John Doe', 'john.doe@example.com', '123 Main St, Anytown'),
       ('Jane Smith', 'jane.smith@example.com', '456 Oak St, Anycity'),
       ('Alice Johnson', 'alice.johnson@example.com', '789 Elm St, Anyvillage');

CREATE TABLE Borrowing (
    BorrowID INT AUTO_INCREMENT PRIMARY KEY,
    MemberID INT,
    BookID INT,
    BorrowDate DATE,
    ReturnDate DATE,
    FOREIGN KEY (MemberID) REFERENCES Members(MemberID),
    FOREIGN KEY (BookID) REFERENCES Books(BookID)
);
INSERT INTO Borrowing (MemberID, BookID, BorrowDate, ReturnDate)VALUES 
       (1, 1, '2024-06-01', '2024-06-15'),
       (2, 3, '2024-06-05', NULL),
       (3, 5, '2024-06-10', NULL);

CREATE TABLE Reservation (
    ReservationID INT AUTO_INCREMENT PRIMARY KEY,
    MemberID INT,
    BookID INT,
    ReservationDate DATE,
    FOREIGN KEY (MemberID) REFERENCES Members(MemberID),
    FOREIGN KEY (BookID) REFERENCES Books(BookID)
);
INSERT INTO Reservation (MemberID, BookID, ReservationDate)VALUES 
       (1, 2, '2024-06-08'),
       (3, 4, '2024-06-12');



       
	
