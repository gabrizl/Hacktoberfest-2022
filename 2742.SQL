SELECT l.name, round((l.omega * 1.618), 3) AS "Fator N"
FROM life_registry l
INNER JOIN dimensions d ON (l.dimensions_id = d.id)
WHERE (d.name IN('C774', 'C875') AND l.name LIKE ('Richard%'))
ORDER BY l.omega ASC;