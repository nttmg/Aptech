CREATE DATABASE Classes
GO
USE Classes

CREATE TABLE Class (
    ClassCode varchar(10) PRIMARY KEY,
	HeadTeacher varchar(30),
	Room varchar(30),
	TimeSlot char,
	CloseDate datetime
)

CREATE TABLE Student (
    RollNo varchar(10) PRIMARY KEY,
	ClassCode varchar(10) FOREIGN KEY REFERENCES Class(ClassCode),
	FullName varchar(30),
	Male bit,
	BirthDate datetime,
	Address varchar(30),
	Provice char(2),
	Email varchar(30)
)

CREATE TABLE Subject(
    SubjectCode varchar(10) PRIMARY KEY,
	SubjectName varchar(40),
	WMark bit,
	PMark bit,
	WTest_per int,
	PTest_per int
)

CREATE TABLE Mark(
    RollNo varchar(10) FOREIGN KEY REFERENCES Student(RollNo),
	SubjectCode varchar(10) FOREIGN KEY REFERENCES Subject(SubjectCode),
	WMark float,
	PMark float,
	Mark float
)

