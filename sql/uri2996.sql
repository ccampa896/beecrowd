WITH s AS
( 
SELECT id_package, year, name 
    FROM users
       INNER JOIN packages
       ON users.id = packages.id_user_sender 
       WHERE (color = 'blue' OR year = 2015) AND (address <> 'Taiwan')
),
r AS
(
SELECT id_package, year, name 
    FROM users
       INNER JOIN packages
       ON users.id = packages.id_user_receiver 
       WHERE (color = 'blue' OR year = 2015) AND (address <> 'Taiwan')
)
SELECT packages.year, s.name, r.name 
    FROM packages
       INNER JOIN s
       ON s.id_package = packages.id_package
       INNER JOIN r
       ON r.id_package = packages.id_package
       ORDER BY year DESC, s.name DESC;
