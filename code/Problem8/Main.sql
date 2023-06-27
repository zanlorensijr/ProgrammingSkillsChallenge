--****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
--****** PROBLEM 8
--****** EDSON ZANLORENSI JUNIOR
DROP TABLE IF EXISTS dogs;
DROP TABLE IF EXISTS cats;

CREATE TABLE dogs(	
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL );

CREATE TABLE cats(
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL);

INSERT INTO dogs (name)
VALUES ('Jessy'),
		('Joly'),
        ('Mike'),
        ('Ozzy'),
        ('Toto'),
        ('Joly'),
        ('Mike'),
        ('Ozzy'),
        ('Ozzy');
         
INSERT INTO cats (name)
VALUES ('Chico'),
		('Ben'),
        ('Fifi'),
        ('Cat'),
        ('Chico'),
        ('Ben'),
        ('Fiuza'),
        ('Ozzy');
        
SELECT DISTINCT name FROM (
  SELECT name FROM cats
  UNION
  SELECT name FROM dogs
) AS distinct_pet_names;