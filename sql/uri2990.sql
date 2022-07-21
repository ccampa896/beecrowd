SELECT cpf, enome, dnome
    FROM empregados
       INNER JOIN departamentos
       ON empregados.dnumero = departamentos.dnumero
       WHERE cpf_supervisor IS NULL
       ORDER BY cpf;
