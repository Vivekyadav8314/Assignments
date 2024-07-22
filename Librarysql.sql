CREATE SCHEMA library_system;

USE library_system;

CREATE TABLE Books(
   book_id INT PRIMARY KEY,
   title VARCHAR(255) NOT NULL,
   author VARCHAR(255) NOT NULL,
   genre VARCHAR(100),
   pub_year INT,
   ISBM VARCHAR(20) UNIQUE
);
   
CREATE TABLE Member (
   member_id INT PRIMARY KEY AUTO_INCREMENT,
   first_name VARCHAR(50) NOT NULL,
   last_name VARCHAR(50) NOT NULL,
   address VARCHAR(255),
   phone_number VARCHAR(15) UNIQUE
);
  
  CREATE TABLE Borrowing(
  borrowing_id INT PRIMARY KEY,
  book_id INT,
  member_id INT,
  date_borrowed DATE NOT NULL,
  date_due DATE NOT NULL,
  date_returned DATE,
  FOREIGN KEY (book_id) REFERENCES Books(book_id),
  FOREIGN KEY (member_id) REFERENCES Member(member_id),
  CHECK (date_returned IS NULL OR date_returned >= date_borrowed)
);

CREATE TABLE Reservation(
  reservation_id INT PRIMARY KEY,
  book_id INT,
  member_id INT,
  date_reserved DATE NOT NULL,
  FOREIGN KEY (book_id) REFERENCES Book(book_id)
  FOREIGN KEY(member_id)REFERENCES Member(member_id)
);

INSERT INTO Books (book_id, title, author, genre, pub_year, ISBN) VALUES
(101, 'abc', 'Anurag Thakur', 'xyz', '2022', 0987654321),
(102, 'bcd', 'HC Verma', 'xyz', '2022', '1234567890');

INSERT INTO Member(member_id, first_name, last_name, address, phone_number) VALUES
(1, 'R', 'Roy', 'Delhi', '6203649568'),
(2, 'J', 'Roy', 'Mumbai', '8314873456');

INSERT INTO Borrowinnng(borrowing_id, date_borrowed, book_id, member_id, date_due, date_returned) VALUES
(1001, '2024-03-13', 101, 1, '2024-03-23', '2024-03-29'),
(1002, '2024-03-13', 102,  2, '2024-03-23', '2024-03-29');

INSERT INTO Reservation(reservatio_id, book_id, member_id, date_reserved)VALUES
(11, 101, 1, '2024-03-30'),
(12, 102, 2, '2024-03-30');