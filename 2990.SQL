SELECT e.cpf, e.enome, d.dnome
FROM empregados e, departamentos d
WHERE (e.dnumero = d.dnumero AND e.cpf NOT IN (SELECT cpf_emp FROM trabalha))
order by cpf