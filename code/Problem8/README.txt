Problem:
Information about pets is kept in two separate tables:

TABLE dogs
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

TABLE cats
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

Write an SQL query that select all distinct pet names.

**To test this code:
1) Go to https://sqliteonline.com/ and open the Main.sql file. Just run the code as it creates de databases and performs the necessary operations.