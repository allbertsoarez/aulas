-- ==========================================
-- SCRIPT DE CRIAÇÃO DE TABELAS (DDL)
-- Cenário: Sistema Escolar
-- ==========================================

-- Tabela de Alunos
CREATE TABLE alunos (
    id_aluno INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    data_nascimento DATE
);

-- Tabela de Disciplinas
CREATE TABLE disciplinas (
    id_disciplina INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    carga_horaria INT NOT NULL
);

-- Tabela de Matrículas (Tabela associativa / Relacionamento N:N)
CREATE TABLE matriculas (
    id_matricula INT PRIMARY KEY AUTO_INCREMENT,
    id_aluno INT NOT NULL,
    id_disciplina INT NOT NULL,
    nota DECIMAL(4,2),
    data_matricula DATE DEFAULT (CURRENT_DATE),
    
    -- Chaves Estrangeiras (Foreign Keys)
    FOREIGN KEY (id_aluno) REFERENCES alunos(id_aluno) ON DELETE CASCADE,
    FOREIGN KEY (id_disciplina) REFERENCES disciplinas(id_disciplina) ON DELETE CASCADE
);