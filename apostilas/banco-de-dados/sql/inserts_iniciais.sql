-- ==========================================
-- SCRIPT DE INSERÇÃO DE DADOS (DML)
-- Populando o banco da Editora
-- ==========================================

-- Inserindo Autores
INSERT INTO autores (nome, nacionalidade) VALUES
('Machado de Assis', 'Brasil'),
('J.K. Rowling', 'Reino Unido'),
('George Orwell', 'Reino Unido'),
('Clarice Lispector', 'Brasil'),
('Stephen King', 'EUA'),
('Mario Triola', 'EUA'),
('Wes McKinney', 'EUA');

-- Inserindo Categorias
INSERT INTO categorias (nome) VALUES
('Clássico Nacional'),
('Fantasia'),
('Distopia'),
('Terror'),
('Romance Moderno'),
('Tecnologia');

-- Inserindo Livros
INSERT INTO livros (titulo, isbn, ano_publicacao, preco, id_categoria) VALUES
('Dom Casmurro', '978-85-359-0277-7', 1899, 29.90, 1),
('Harry Potter e a Pedra Filosofal', '978-85-325-1101-6', 1997, 49.90, 2),
('1984', '978-85-359-0277-8', 1949, 39.90, 3),
('It - A Coisa', '978-85-325-1102-3', 1986, 69.90, 4),
('A Hora da Estrela', '978-85-325-1103-0', 1977, 24.90, 5),
('Introdução à Estatística com Python', '978-85-00-00000-0', 2020, 89.90, 6);

-- Relacionando Livros e Autores (N:N)
-- Note que o livro 6 tem DOIS autores (Triola e McKinney)
INSERT INTO livros_autores (id_livro, id_autor) VALUES
(1, 1), -- Dom Casmurro -> Machado
(2, 2), -- Harry Potter -> Rowling
(3, 3), -- 1984 -> Orwell
(4, 5), -- It -> King
(5, 4), -- Hora da Estrela -> Clarice
(6, 6), -- Estatística -> Triola
(6, 7); -- Estatística -> McKinney
