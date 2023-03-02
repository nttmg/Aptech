CREATE DATABASE RiverPlate

USE RiverPlate

CREATE TABLE Student (
    StudentNo int PRIMARY KEY,
	StudentName varchar(50),
	StudentAddress varchar(100),
	PhoneNo int
)

CREATE TABLE Department (
    DeptNo int PRIMARY KEY,
	DeptName varchar(50),
	ManagerName char(30)
)

CREATE TABLE Assignment (
    AssignmentNo int PRIMARY KEY,
	Description varchar(100)
)

CREATE TABLE Works_Assign(
     JobID int PRIMARY KEY,
	 StudentNo int FOREIGN KEY REFERENCES Student(StudentNo),
	 AssignmentNo int FOREIGN KEY REFERENCES Assignment(AssignmentNo),
	 TotalHours int,
	 JobDetails XML
)

CREATE INDEX IX_Student
 ON Student(StudentNo) 

CREATE INDEX IX_Dept 
ON Department(DeptNo, DeptName, ManagerName )