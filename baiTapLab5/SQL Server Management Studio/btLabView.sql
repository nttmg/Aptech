CREATE DATABASE BookStore
GO
USE BookStore

CREATE TABLE Customer (
    CustomerID int IDENTITY(1,1) PRIMARY KEY,
	CustomerName varchar(50),
	Address varchar(100),
	Phone varchar(12)
)

CREATE TABLE Books (
    BookCode int PRIMARY KEY,
	Category varchar(50),
	Author varchar(50),
	Publisher varchar(50),
	Title varchar(50),
	Price int,
	InStore int
)

CREATE TABLE BookSold (
    BookSoldID int PRIMARY KEY,
	CustomerID int FOREIGN KEY REFERENCES Customer(CustomerID),
	BookCode int FOREIGN KEY REFERENCES Books(BookCode),
	Date Datetime,
	Price int,
	Amount int
)

INSERT INTO Customer (CustomerName, Address, Phone)
VALUES ('John', 'Hanoi', 123456789),
       ('Man', 'Hanoi', 123456789),
	   ('John', 'HCM', 123456789),
	   ('Lili', 'USA', 123456789),
	   ('Ray', 'Bangkok', 123456789);

SELECT * FROM Customer

INSERT INTO Books (BookCode, Category, Author, Publisher, Title, Price, InStore)
VALUES (22,'Manga', 'Jay', 'CCN Studio', 'NTT', 1200, 200),
       (45,'Action', 'Hila', 'RTH Studio', 'Smile', 400, 34),
	   (65,'Fantasic', 'Jay', 'LIH Studio', 'Alice', 9000, 777),
	   (21,'Adventure', 'Kobo', 'CCN Studio', 'Heru', 3450, 311),
	   (88,'Horror', 'Lily', 'CCN Studio', 'BN', 2235, 99)
SELECT * FROM Books  

INSERT INTO BookSold (BookSoldID, CustomerID, BookCode, Date, Price, Amount)
VALUES (12, 2, 65,'2022-12-22', 9000, 4),
       (43, 5, 65,'2022-3-23', 9000, 7),
	   (13, 2, 45,'2022-12-22', 400, 1),
	   (32, 1, 65,'2021-12-22', 5000, 4),
	   (87, 5, 21,'2022-9-22', 3450, 2),
	   (90, 3, 88,'2022-12-31', 2235, 1),
	   (34, 4, 22,'2021-12-22', 1200, 6),
	   (65, 3, 21,'2022-12-11', 3450, 3),
	   (11, 5, 65,'2022-12-22', 9000, 1),
	   (60, 2, 45,'2022-12-5', 400, 7)
SELECT * FROM BookSold

CREATE VIEW TotalBookSold
AS 
   SELECT b.BookCode, b.Title, b.Price,
          SUM(bs.Amount) TotalBookSold
   FROM Books b
   JOIN BookSold bs
   ON b.BookCode = bs.BookCode
   GROUP BY b.BookCode, b.Title, b.Price

SELECT * FROM TotalBookSold

CREATE VIEW TotalCustomerOrder
AS 
    SELECT c.CustomerID, c.CustomerName, c.Address, SUM(bs.Amount) TotalBook
	FROM Customer c
	JOIN BookSold bs
	ON c.CustomerID = bs.CustomerID
	GROUP BY c.CustomerID, c.CustomerName, c.Address

SELECT * FROM TotalCustomerOrder

CREATE VIEW TotalPriceCustomer
AS 
    SELECT c.CustomerID, c.CustomerName, c.Address, SUM(bs.Amount*bs.Price) TotalPrice
	FROM Customer c
	JOIN BookSold bs
	ON c.CustomerID = bs.CustomerID
	GROUP BY c.CustomerID, c.CustomerName, c.Address

SELECT * FROM TotalPriceCustomer

DROP VIEW TotalPriceCustomer