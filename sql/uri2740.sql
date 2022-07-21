SELECT (CASE
	   WHEN position <= 3 THEN CONCAT('Podium: ', team)
       WHEN position >= 14 THEN CONCAT('Demoted: ', team)
       END) AS name
	FROM league
    WHERE position <= 3 OR position >= 14;
