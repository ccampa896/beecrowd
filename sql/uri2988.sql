-- DDL correta (fonte):  https://www.beecrowd.com.br/judge/pt/questions/view/2988/10270
-- resolução (fonte): https://github.com/eduardo-mior/URI-Online-Judge-Solutions/blob/master/Sql/URI%202988.sql

/*
CREATE TABLE teams ( id INTEGER PRIMARY KEY, name VARCHAR(50) );

CREATE TABLE matches (
    id INTEGER PRIMARY KEY,
    team_1 INTEGER,
    team_2 INTEGER,
    team_1_goals INTEGER,
    team_2_goals INTEGER,
    FOREIGN KEY(team_1) REFERENCES teams(id),
    FOREIGN KEY(team_2) REFERENCES teams(id)
);

INSERT INTO teams(id, name) VALUES (1,'CEARA'), (2,'FORTALEZA'), (3,'GUARANY DE SOBRAL'), (4,'FLORESTA');

INSERT INTO matches(id, team_1, team_2, team_1_goals, team_2_goals) VALUES
    (1,4,1,0,4),
    (2,3,2,0,1),
    (3,1,3,3,0),
    (4,3,3,0,1),
    (5,1,2,0,0),
    (6,2,4,2,1);

*/






SELECT 

-- Nome
(
    SELECT name 
    FROM teams t 
    WHERE t.id = team.id
) as name,


-- matches (partidas)
(
    SELECT count(team_1) 
    FROM matches 
    WHERE team_1 = team.id
)+(
    SELECT count(team_2) 
    FROM matches WHERE 
    team_2 = team.id
) as matches,


-- victories (vitórias)
(
    SELECT sum(case when team_2_goals > team_1_goals then 1 else 0 END) as victories 
    FROM teams t INNER JOIN matches m ON t.id = m.team_2 
    WHERE t.id = team.id
)+(
    SELECT sum(case when team_1_goals > team_2_goals then 1 else 0 END) 
    FROM teams t INNER JOIN matches m ON t.id = m.team_1 
    WHERE t.id = team.id
) as victories,


-- defeats (derrotas)
(
    SELECT sum(case when team_2_goals < team_1_goals then 1 else 0 END) as victories 
    FROM teams t INNER JOIN matches m ON t.id = m.team_2 
    WHERE t.id = team.id
)+(
    SELECT sum(case when team_1_goals < team_2_goals then 1 else 0 END) 
    FROM teams t INNER JOIN matches m ON t.id = m.team_1 
    WHERE t.id = team.id
) as defeats,


-- draws (empates)
(
    SELECT sum(case when team_2_goals = team_1_goals then 1 else 0 END) as victories 
    FROM teams t INNER JOIN matches m ON t.id = m.team_2 
    WHERE t.id = team.id
)+(
    SELECT sum(case when team_1_goals = team_2_goals then 1 else 0 END) 
    FROM teams t INNER JOIN matches m ON t.id = m.team_1 
    WHERE t.id = team.id
) as draws,


-- score (pontos)
(
    SELECT sum(case when team_2_goals > team_1_goals then 3 when team_2_goals = team_1_goals then 1 else 0 END) as victories 
    FROM teams t INNER JOIN matches m ON t.id = m.team_2 
    WHERE t.id = team.id
)+(
    SELECT sum(case when team_1_goals > team_2_goals then 3 when team_1_goals = team_2_goals then 1 else 0 END) 
    FROM teams t INNER JOIN matches m ON t.id = m.team_1 
    WHERE t.id = team.id
) as score


FROM teams team
ORDER BY score DESC, name ASC;


/*
-- OUTRA LÓGICA:
select teams.name , count(teams.id) as matches,

count( CASE WHEN (team_1_goals > team_2_goals and teams.id = team_1)  or   (team_2_goals > team_1_goals and teams.id = team_2)  then 1 end ) as victories ,

count( case when (team_1_goals < team_2_goals and teams.id = team_1)  or   (team_2_goals < team_1_goals and teams.id = team_2) then 1 end ) as defeats ,

count( case when team_1_goals = team_2_goals then 1 end) as draws,

count( CASE WHEN (team_1_goals > team_2_goals and teams.id = team_1)  or   (team_2_goals > team_1_goals and teams.id = team_2)  then 1 end )* 3 +
count( case when (team_1_goals < team_2_goals and teams.id = team_1)  or   (team_2_goals < team_1_goals and teams.id = team_2) then 1 end ) * 0 +

count( case when team_1_goals = team_2_goals then 1 end) * 1 as score from teams

join matches ON teams.id = matches.team_1 or teams.id = matches.team_2

group by teams.id 

order by score DESC ;

*/
