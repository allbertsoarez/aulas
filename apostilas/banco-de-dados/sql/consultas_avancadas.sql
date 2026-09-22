-- ==========================================
-- SCRIPT DE CONSULTAS AVANÇADAS (DQL)
-- Exemplos de JOINs, GROUP BY e HAVING
-- ==========================================

-- 1. Listar todos os alunos e suas respectivas disciplinas matriculadas (INNER JOIN)
SELECT 
    a.nome AS Aluno, 
    d.nome AS Disciplina, 
    m.nota AS Nota
FROM alunos a
JOIN matriculas m ON a.id_aluno = m.id_aluno
JOIN disciplinas d ON m.id_disciplina = d.id_disciplina
ORDER BY a.nome, d.nome;

-- 2. Calcular a média de notas por disciplina (GROUP BY)
SELECT 
    d.nome AS Disciplina, 
    COUNT(m.id_aluno) AS Total_Alunos,
    ROUND(AVG(m.nota), 2) AS Media_Turma
FROM disciplinas d
JOIN matriculas m ON d.id_disciplina = m.id_disciplina
GROUP BY d.nome
ORDER BY Media_Turma DESC;

-- 3. Encontrar alunos com média geral acima de 8.0 (HAVING)
SELECT 
    a.nome AS Aluno, 
    ROUND(AVG(m.nota), 2) AS Media_Geral
FROM alunos a
JOIN matriculas m ON a.id_aluno = m.id_aluno
GROUP BY a.nome
HAVING AVG(m.nota) > 8.0;

-- 4. Listar alunos que NÃO estão matriculados em 'Banco de Dados' (LEFT JOIN / IS NULL)
SELECT 
    a.nome AS Aluno
FROM alunos a
LEFT JOIN matriculas m ON a.id_aluno = m.id_aluno
LEFT JOIN disciplinas d ON m.id_disciplina = d.id_disciplina AND d.nome = 'Banco de Dados'
WHERE d.id_disciplina IS NULL;