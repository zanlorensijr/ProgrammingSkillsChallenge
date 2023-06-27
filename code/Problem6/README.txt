Problem:
Consider the following problem

Two tables are provided: Students and Notes.

Students contains three columns: ID, Name and Value.

Coluna  | Tipo
ID          | Integer
Name    | String
Value     | Integer

The table Notes contains three Integers columns: Grade, Min_Value and Max_Value filled according example bellow:

Grade | Min_Value | Max_Value
1          | 0                 |  9
2          | 10               | 19
3          | 20               | 29
4          | 30               | 39
5          | 40               | 49
6          | 50               | 59
7          | 60               | 69
8          | 70               | 79
9          | 80               | 89
10        | 90               | 100          

Joana gives Eva the task of generating a report containing three columns: Name, Grade and Value. Joana does not want the names of students who received a grade lower than 8. The report must be in descending order by grade, that is, the highest grades are inserted first. If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order. Finally, if the grade is less than 8, use "NULL" as the name and list them in grades in descending order. If there are more than one student with the same grade (1-7) assigned to them, sort those students in particular by their grades in ascending order.

Write an SQL query to help Eva.

Input example
ID | Name           | Value
1   | Julia             | 81
2   | Carol            | 68
3   | Maria           | 99
4   | Andreia       | 78
5   | Jaqueline     | 63
6   | Marcela       | 88

Output example
Maria 10 99
Marcela 9 88
Julia 9 81
Andreia 8 78
NULL 7 63
NULL 7 68
Note: Print "NULL" in the name if the grade is less than 8.


**To test this code:
1) Go to https://sqliteonline.com/ and open the Main.sql file. Just run the code as it creates de databases and performs the necessary operations.