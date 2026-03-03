CREATE DATABASE universityDB1;
SHOW DATABASES;
USE universityDB1;

-- Student table
CREATE TABLE student1(
    studentId INT PRIMARY KEY NOT NULL,
    first_name VARCHAR(20) NOT NULL,
    last_name VARCHAR(20),
    DOB DATE,
    email VARCHAR(40) UNIQUE
);
SHOW TABLES;

-- Courses table
CREATE TABLE Courses1(
    CourseId INT PRIMARY KEY NOT NULL,
    Course_name VARCHAR(20) NOT NULL,
    credit INT CHECK (credit > 0)
);
SHOW TABLES;

-- Enrollment table
CREATE TABLE enrollment(
    en_id INT PRIMARY KEY,
    studentId INT,
    CourseId INT,
    grade VARCHAR(10),
    FOREIGN KEY (studentId) REFERENCES student1(studentId)
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    FOREIGN KEY (CourseId) REFERENCES Courses1(CourseId)
        ON UPDATE CASCADE
        ON DELETE CASCADE
);
SHOW TABLES;

-- attendance table
CREATE TABLE Attendance1(
    studentId INT,
    Course_Id INT,
    date date,
    primary key(studentId, Course_Id, date)
);
SHOW TABLES;

INSERT INTO student1(studentId, first_name, last_name, DOB, email) values
(1, 'Nahin', 'Ahmed', '2000-12-20', 'ahmednahin@gmail.com'),
(2, 'Jahin', 'Ahmed', '2001-11-30', 'ahmedjahin@gmail.com');
insert into courses1 values (311, "DBMS", 2);

select * from student1;
select * from courses1;

create table teachers (
t_id int primary key,
name varchar(50),
dept varchar(50) default "CSE"
);
Insert into teachers values(2, 'Dr. Kamruzzaman', 'EEE');

Insert into Attendance1(studentId, date, Course_Id)
select studentId, Course_Id, '2000-12-22' FROM enrollment;