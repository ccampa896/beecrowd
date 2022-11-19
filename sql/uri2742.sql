SELECT life_registry.name, ROUND((omega * 1.618), 3) AS "Fator N"
  FROM life_registry
       INNER JOIN dimensions
       ON dimensions.id = life_registry.dimensions_id
       WHERE (dimensions.name = 'C875' OR dimensions.name = 'C774') AND 
       life_registry.name LIKE 'Richard%';
