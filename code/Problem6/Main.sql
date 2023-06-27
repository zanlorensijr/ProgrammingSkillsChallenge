--****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
--****** PROBLEM 6
--****** EDSON ZANLORENSI JUNIOR

DROP TABLE IF EXISTS students;
DROP TABLE IF EXISTS Notes;

CREATE TABLE students (
  ID INTEGER PRIMARY KEY,
  Name TEXT,
  Value INTEGER
);
CREATE TABLE notes (
  GRADE INTEGER,
  MIN_VALUE INTEGER,
  MAX_VALUE INTEGER
);

INSERT INTO notes (GRADE, MIN_VALUE, MAX_VALUE)
VALUES (1, 0, 9),
       (2, 10, 19),
       (3, 20, 29),
       (4, 30, 39),
       (5, 40, 49),
       (6, 50, 59),
       (7, 60, 69),
       (8, 70, 79),
       (9, 80, 89),
       (10, 90, 100);
INSERT INTO students (ID, Name, Value)
VALUES (1, 'Julia', 81),
       (2, 'Carol', 68),
       (3, 'Maria', 99),
       (4, 'Andreia', 78),
       (5, 'Jaqueline', 63),
       (6, 'Marcela', 88),
       (7, 'Lucia', 50),
       (8, 'Ana', 55),
       (9, 'Beatriz', 58),
       (10, 'Carlos', 45);

SELECT 
  CASE
    WHEN notes.Grade >= 8 THEN students.Name -- if the grande is bigger than 8, name stays the same
    ELSE 'NULL' --otherwise print null
  END AS Name, --assign condition to the name column
  --selecting columns grade from notes and value from students
  notes.Grade,
  students.Value
FROM
  Students 
JOIN
  notes ON --looks into notes table and retrieves rows where the student value is between min and max values
  	students.Value BETWEEN notes.Min_Value AND notes.Max_Value
ORDER BY
notes.grade DESC, --first, the grades should be in descending order
 
 CASE 
 WHEN notes.grade<=7 --if the grade if less than or equal 7, then we order the values of those rows by ascending order
 THEN students.value
 END ASC,
 students.name ASc --finally, the names should be ordered in alphabetical order
 

  