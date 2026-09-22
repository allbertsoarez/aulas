-- ==========================================
-- SCRIPT DE INSERÇÃO DE DADOS (DML)
-- Populando as tabelas com dados fictícios
-- ==========================================

-- Inserindo Alunos
INSERT INTO alunos (nome, email, data_nascimento) VALUES
('Ana Silva', 'ana.silva@email.com', '2005-03-15'),
('Bruno Souza', 'bruno.souza@email.com', '2004-07-22'),
('Carla Oliveira', 'carla.oliveira@email.com', '2005-11-10'),
('Diego Santos', 'diego.santos@email.com', '2004-01-30');

-- Inserindo Disciplinas
INSERT INTO disciplinas (nome, carga_horaria) VALUES
('Algoritmos', 80),
('Banco de Dados', 100),
('Matemática', 60),
('Redes de Computadores', 80);

-- Inserindo Matrículas e Notas
INSERT INTO matriculas (id_aluno, id_disciplina, nota) VALUES
-- Ana (id 1)
(1, 1, 8.5), (1, 2, 9.0), (1, 3, 7.5),
-- Bruno (id 2)
(2, 1, 6.0), (2, 2, 7.0), (2, 4, 8.0),
-- Carla (id 3)
(3, 2, 8.0), (3, 3, 9.5),
-- Diego (id 4)
(4, 1, 5.5), (4, 4, 7.5);