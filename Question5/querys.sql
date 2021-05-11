CREATE TABLE Students (ID integer primary key, Name varchar(20), Value INTEGER)

CREATE TABLE Notes (Grade integer primary key, Min_Value INTEGER, Max_Value Integer)

INSERT INTO Notes (grade,min_value, max_value) VALUES (1, 0, 9);
INSERT INTO Notes (grade,min_value, max_value) VALUES (2, 10, 19);
INSERT INTO Notes (grade,min_value, max_value) VALUES (3, 20, 29);
INSERT INTO Notes (grade,min_value, max_value) VALUES (4, 30, 39);
INSERT INTO Notes (grade,min_value, max_value) VALUES (5, 40, 49);
INSERT INTO Notes (grade,min_value, max_value) VALUES (6, 50, 59);
INSERT INTO Notes (grade,min_value, max_value) VALUES (7, 60, 69);
INSERT INTO Notes (grade,min_value, max_value) VALUES (8, 70, 79);
INSERT INTO Notes (grade,min_value, max_value) VALUES (9, 80, 89);
INSERT INTO Notes (grade,min_value, max_value) VALUES (10, 90, 100)

INSERT INTO Students (ID,name,value) VALUES (1, 'Julia', 81);
INSERT INTO Students (ID,name,value) VALUES (2, 'Carol', 68);
INSERT INTO Students (ID,name,value) VALUES (3, 'Maria', 99);
INSERT INTO Students (ID,name,value) VALUES (4, 'Andreia', 78);
INSERT INTO Students (ID,name,value) VALUES (5, 'Jaqueline', 63);
INSERT INTO Students (ID,name,value) VALUES (6, 'Marcela', 88)

SELECT ID, Name, value, Grade FROM Students AS stu JOIN Notes AS note ON stu.value BETWEEN note.min_value AND note.max_value
ORDER by stu.value DESC;

SELECT IIF(note.Grade<8, NULL, stu.Name), note.Grade, stu.value FROM Students AS stu JOIN Notes AS note ON stu.value 
BETWEEN note.Min_value AND note.max_value ORDER BY note.Grade DESC, stu.Name, stu.value;