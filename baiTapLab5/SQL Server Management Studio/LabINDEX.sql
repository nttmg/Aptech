CREATE DATABASE Aptech
USE Aptech

CREATE TABLE Classes (
     ClassName char(6),
	 Teacher varchar (30),
	 TimeSlot varchar(30),
	 Class int,
	 Lab int,
)

CREATE UNIQUE CLUSTERED INDEX MyClusteredIndex
ON Classes(ClassName);

CREATE INDEX TeacherIndex 
ON Classes(Teacher);

DROP INDEX Classes.TeacherIndex;

DROP INDEX Classes.MyClusteredIndex;

CREATE UNIQUE CLUSTERED INDEX MyClusteredIndex
ON Classes(ClassName)
WITH ( DROP_EXISTING = ON) 

CREATE UNIQUE CLUSTERED INDEX MyClusteredIndex
ON Classes(ClassName)
WITH ( ALLOW_ROW_LOCKS = ON) 

CREATE UNIQUE CLUSTERED INDEX MyClusteredIndex
ON Classes(ClassName)
WITH ( ALLOW_PAGE_LOCKS = ON) 

CREATE UNIQUE CLUSTERED INDEX MyClusteredIndex
ON Classes(ClassName)
WITH ( MAXDOP =2) 
      
CREATE INDEX ClassLabIndex
ON Classes(Class,Lab)

