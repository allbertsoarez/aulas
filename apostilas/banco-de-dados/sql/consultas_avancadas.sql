-- ==========================================
-- SCRIPT DE CONSULTAS AVANÇADAS (DQL)
-- Exemplos de JOINs, GROUP BY e HAVING
-- ==========================================

-- 1. Listar todos os livros e suas respectivas categorias (INNER JOIN 1:N)
SELECT 
    l.titulo AS Livro, 
    c.nome AS Categoria, 
    l.preco AS Preco
FROM livros l
JOIN categorias c ON l.id_categoria = c.id_categoria
ORDER BY c.nome, l.titulo;

-- 2. Listar livros e seus autores (INNER JOIN N:N usando tabela pivô)
SELECT 
    l.titulo AS Livro, 
    a.nome AS Autor
FROM livros l
JOIN livros_autores la ON l.id_livro = la.id_livro
JOIN autores a ON la.id_autor = a.id_autor
ORDER BY l.titulo;

-- 3. Calcular a média de preço e a quantidade de livros por categoria (GROUP BY)
SELECT 
    c.nome AS Categoria, 
    COUNT(l.id_livro) AS Total_Livros,
    CONCAT('R$ ', ROUND(AVG(l.preco), 2)) AS Preco_Medio
FROM categorias c
JOIN livros l ON c.id_categoria = l.id_categoria
GROUP BY c.nome
ORDER BY Preco_Medio DESC;

-- 4. Encontrar categorias que possuem mais de 1 livro cadastrado (HAVING)
SELECT 
    c.nome AS Categoria, 
    COUNT(l.id_livro) AS Total
FROM categorias c
JOIN livros l ON c.id_categoria = l.id_categoria
GROUP BY c.nome
HAVING COUNT(l.id_livro) > 1;

-- 5. Listar autores que ainda NÃO têm livros cadastrados na editora (LEFT JOIN / IS NULL)
SELECT 
    a.nome AS Autor
FROM autores a
LEFT JOIN livros_autores la ON a.id_autor = la.id_autor
WHERE la.id_livro IS NULL;
