SELECT doctors.name, ROUND(SUM((hours * 150) + (hours * 150 * (bonus/100))), 1) AS salary
    FROM doctors
       INNER JOIN attendances
       ON doctors.id = attendances.id_doctor
       INNER JOIN work_shifts
       ON attendances.id_work_shift = work_shifts.id
       GROUP BY doctors.name
       ORDER BY salary DESC;
