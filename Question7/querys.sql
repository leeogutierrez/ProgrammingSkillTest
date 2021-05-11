CREATE TABLE dogs (id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL )

CREATE TABLE cats (id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL)

INSERT INTO dogs (id,name) VALUES (
  '1',
  'jessie'
)

INSERT INTO cats (id,name) VALUES (
  '1',
  'Joe'
)

INSERT INTO cats (id,name) VALUES (
  '2',
  'jessie'
)

INSERT INTO dogs (id,name) VALUES (
  '2',
  'zak'
)

INSERT INTO cats (id,name) VALUES (
  '3',
  'bolt'
)

INSERT INTO dogs (id,name) VALUES (
  '3',
  'mark'
)

INSERT INTO dogs (id,name) VALUES (
  '4',
  'bolt'
)

SELECT name FROM dogs 
UNION 
SELECT name FROM cats