CREATE DATABASE student;
USE student;
CREATE TABLE student (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    roll INT,
    class VARCHAR(100),
    blood_group VARCHAR(10),
    contact_no VARCHAR(20),
    result VARCHAR(10),
    date_of_birth DATE,
    age INT
);
-- Rename table
RENAME TABLE student TO people;
-- Delete table
DROP TABLE people;