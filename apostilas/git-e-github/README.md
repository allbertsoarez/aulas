<div align="center">
  <br><br>
  <h1>🔧 APOSTILA DE GIT E GITHUB</h1>
  <h2>Controle de Versão e Colaboração em Projetos de Software</h2>
  <br>
  <p><strong>Disciplina:</strong> Ferramentas de Desenvolvimento</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução ao Controle de Versão](#1-introdução-ao-controle-de-versão)
2. [Instalação e Configuração do Git](#2-instalação-e-configuração-do-git)
3. [Conceitos Fundamentais](#3-conceitos-fundamentais)
4. [Comandos Básicos do Git](#4-comandos-básicos-do-git)
5. [Trabalhando com o GitHub](#5-trabalhando-com-o-github)
6. [Branches e Merges](#6-branches-e-merges)
7. [Resolução de Conflitos](#7-resolução-de-conflitos)
8. [Fluxo de Trabalho Colaborativo](#8-fluxo-de-trabalho-colaborativo)
9. [Boas Práticas e Convenções](#9-boas-práticas-e-convenções)
10. [Exercícios Práticos](#10-exercícios-práticos)
11. [Referências Bibliográficas](#11-referências-bibliográficas)

---

## 1. Introdução ao Controle de Versão

### 1.1 O Problema
Imagine que você está desenvolvendo um projeto e precisa:
- Voltar para uma versão anterior porque algo quebrou.
- Trabalhar em uma nova funcionalidade sem quebrar o código atual.
- Colaborar com outros desenvolvedores no mesmo projeto.

Antigamente, as pessoas faziam isso criando cópias da pasta:
```
projeto_v1/
projeto_v2/
projeto_v2_FINAL/
projeto_v2_FINAL_agora_vai/
```

Isso é **insustentável** em projetos reais.

### 1.2 A Solução: Sistemas de Controle de Versão (VCS)
Um VCS é uma ferramenta que rastreia **todas as alterações** feitas nos arquivos ao longo do tempo, permitindo:
- **Histórico completo:** Quem mudou o quê, quando e por quê.
- **Voltar no tempo:** Reverter para qualquer versão anterior.
- **Trabalho em equipe:** Múltiplas pessoas editando os mesmos arquivos sem sobrescrever o trabalho umas das outras.
- **Branches:** Criar linhas de desenvolvimento paralelas (ex: uma para a versão estável, outra para novas funcionalidades).

### 1.3 Git vs. GitHub
- **Git:** O sistema de controle de versão em si (software que roda na sua máquina).
- **GitHub:** Uma plataforma online que hospeda repositórios Git e facilita a colaboração (como uma "rede social para desenvolvedores").

> 💡 **Analogia:** Git é como o motor do carro. GitHub é a estrada onde você dirige. Você pode usar Git sem GitHub (localmente), mas GitHub sem Git não existe.

---

## 2. Instalação e Configuração do Git

### 2.1 Instalação
- **Windows:** Baixe em [git-scm.com](https://git-scm.com/download/win) e instale com as opções padrão.
- **Linux:** `sudo apt install git` (Debian/Ubuntu) ou `sudo dnf install git` (Fedora).
- **Mac:** `brew install git` ou baixe em [git-scm.com](https://git-scm.com/download/mac).

### 2.2 Verificar Instalação
Abra o terminal (ou Git Bash no Windows) e digite:
```bash
git --version
```

### 2.3 Configuração Inicial
Antes de usar o Git, você precisa se identificar (isso será registrado em cada commit):
```bash
git config --global user.name "Seu Nome"
git config --global user.email "seu.email@exemplo.com"
```

Para verificar as configurações:
```bash
git config --list
```

---

## 3. Conceitos Fundamentais

### 3.1 Repositório
Um **repositório** é uma pasta do seu projeto que é gerenciada pelo Git. Ele contém:
- Todos os arquivos do projeto.
- O histórico completo de alterações (na pasta oculta `.git/`).

### 3.2 Working Directory, Staging Area e Repository
O Git trabalha com **três áreas**:

```
┌─────────────────┐      git add       ┌─────────────────┐      git commit      ┌─────────────────┐
│ Working         │ ─────────────────> │ Staging Area    │ ─────────────────> │ Repository      │
│ Directory       │                    │ (Index)         │                    │ (HEAD)          │
│ (Seus arquivos) │                    │ (Pré-commit)    │                    │ (Histórico)     │
└─────────────────┘                    └─────────────────┘                    └─────────────────┘
```

1. **Working Directory:** Onde você edita os arquivos.
2. **Staging Area:** Onde você prepara as alterações que serão salvas no próximo commit.
3. **Repository:** O histórico permanente de commits.

### 3.3 Commit
Um **commit** é um "snapshot" (foto) do seu projeto em um momento específico. Cada commit tem:
- Um identificador único (hash SHA-1, ex: `a1b2c3d4`).
- Uma mensagem descrevendo o que foi feito.
- O autor e a data.

### 3.4 Branch (Ramo)
Um **branch** é uma linha de desenvolvimento independente. O branch padrão chama-se `main` (ou `master` em repositórios antigos).

```
main:    A ─── B ─── C ─── D
              \
feature:       E ─── F
```

Isso permite trabalhar em novas funcionalidades sem afetar o código estável.

---

## 4. Comandos Básicos do Git

### 4.1 Inicializar um Repositório
```bash
# Cria um novo repositório Git na pasta atual
git init
```

### 4.2 Verificar o Status
```bash
# Mostra quais arquivos foram modificados, adicionados ou estão prontos para commit
git status
```

### 4.3 Adicionar Arquivos ao Staging
```bash
# Adiciona um arquivo específico
git add arquivo.txt

# Adiciona todos os arquivos modificados
git add .
```

### 4.4 Fazer um Commit
```bash
# Salva as alterações do staging no histórico
git commit -m "Mensagem descritiva do que foi feito"
```

### 4.5 Ver o Histórico
```bash
# Mostra todos os commits
git log

# Versão simplificada (uma linha por commit)
git log --oneline
```

### 4.6 Desfazer Alterações
```bash
# Descarta alterações no working directory (arquivo não rastreado)
git checkout -- arquivo.txt

# Remove arquivo do staging (mas mantém no working directory)
git reset arquivo.txt

# Volta para o commit anterior (DESCARTA o último commit)
git reset --hard HEAD~1
```

---

## 5. Trabalhando com o GitHub

### 5.1 Criar um Repositório no GitHub
1. Acesse [github.com](https://github.com) e faça login.
2. Clique no botão "+" > "New repository".
3. Dê um nome ao repositório (ex: `meu-projeto`).
4. Escolha entre **Público** (qualquer pessoa pode ver) ou **Privado** (só você e colaboradores).
5. **NÃO** marque "Initialize this repository with a README" (vamos fazer isso localmente).
6. Clique em "Create repository".

### 5.2 Conectar o Repositório Local ao GitHub
```bash
# Adiciona o repositório remoto (substitua pela URL do seu repo)
git remote add origin https://github.com/seu-usuario/meu-projeto.git

# Verifica se o remote foi adicionado
git remote -v
```

### 5.3 Enviar (Push) as Alterações
```bash
# Envia os commits locais para o GitHub
git push origin main
```

### 5.4 Clonar um Repositório
```bash
# Baixa um repositório do GitHub para a sua máquina
git clone https://github.com/seu-usuario/meu-projeto.git
```

### 5.5 Atualizar o Repositório Local
```bash
# Baixa as alterações do GitHub (mas não aplica)
git fetch origin

# Baixa e aplica as alterações
git pull origin main
```

---

## 6. Branches e Merges

### 6.1 Criar e Mudar de Branch
```bash
# Cria um novo branch
git branch nome-do-branch

# Muda para o branch criado
git checkout nome-do-branch

# Cria e muda para o branch em um só comando
git checkout -b nome-do-branch
```

### 6.2 Listar Branches
```bash
# Lista branches locais
git branch

# Lista todos os branches (locais e remotos)
git branch -a
```

### 6.3 Merge (Juntar Branches)
```bash
# Volta para o branch main
git checkout main

# Junta o branch "feature" ao main
git merge feature
```

### 6.4 Excluir um Branch
```bash
# Exclui um branch local
git branch -d nome-do-branch
```

---

## 7. Resolução de Conflitos

### 7.1 O que é um Conflito?
Quando duas pessoas editam a **mesma linha** do mesmo arquivo, o Git não sabe qual versão manter. Isso gera um **conflito de merge**.

### 7.2 Como Identificar
O Git marca o conflito no arquivo:
```
<<<<<<< HEAD
Linha editada por você
=======
Linha editada por outra pessoa
>>>>>>> feature-branch
```

### 7.3 Como Resolver
1. Abra o arquivo e edite manualmente, decidindo qual versão manter (ou combinar as duas).
2. Remova as marcas de conflito (`<<<<<<<`, `=======`, `>>>>>>>`).
3. Adicione o arquivo ao staging: `git add arquivo.txt`.
4. Faça o commit: `git commit -m "Resolve conflito no arquivo.txt"`.

---

## 8. Fluxo de Trabalho Colaborativo

### 8.1 Fork e Pull Request
Quando você quer contribuir para um projeto que **não é seu**:

1. **Fork:** Crie uma cópia do repositório na sua conta do GitHub (botão "Fork").
2. **Clone:** Baixe o fork para a sua máquina: `git clone https://github.com/seu-usuario/projeto.git`.
3. **Branch:** Crie um branch para sua alteração: `git checkout -b minha-feature`.
4. **Edite e Commit:** Faça as alterações e commit.
5. **Push:** Envie para o seu fork: `git push origin minha-feature`.
6. **Pull Request (PR):** No GitHub, clique em "New Pull Request" para solicitar que suas alterações sejam incorporadas ao projeto original.

### 8.2 Revisão de Código
O mantenedor do projeto original vai:
1. Revisar suas alterações.
2. Comentar ou solicitar mudanças.
3. Aprovar e fazer o merge (ou rejeitar).

---

## 9. Boas Práticas e Convenções

### 9.1 Mensagens de Commit
Use mensagens **claras e no imperativo**:
- ✅ "Adiciona validação de e-mail no formulário"
- ✅ "Corrige bug no cálculo de imposto"
- ❌ "Arrumei umas coisas"
- ❌ "Mudanças"

### 9.2 Commits Atômicos
Faça commits **pequenos e focados**. Cada commit deve representar uma alteração lógica completa.

### 9.3 .gitignore
Crie um arquivo `.gitignore` na raiz do projeto para ignorar arquivos que não devem ser versionados:
```
# Exemplo de .gitignore
*.log
node_modules/
.env
.DS_Store
```

### 9.4 README.md
Todo repositório deve ter um `README.md` explicando:
- O que é o projeto.
- Como instalar e usar.
- Como contribuir.

---

## 10. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie um repositório local com `git init`, adicione um arquivo `README.md` e faça o primeiro commit. | ⭐ |
| 2 | Crie um repositório no GitHub e conecte com o repositório local. Faça o primeiro `push`. | ⭐ |
| 3 | Crie um branch chamado `feature-nova`, faça um commit nesse branch e depois faça o merge para o `main`. | ⭐⭐ |
| 4 | Clone um repositório público do GitHub (ex: este repositório de aulas) e explore o histórico com `git log`. | ⭐ |
| 5 | Simule um conflito: crie dois branches, edite a mesma linha em cada um, e resolva o conflito ao fazer o merge. | ⭐⭐⭐ |

---

## 11. Referências Bibliográficas

- CHACON, Scott; STRAUB, Ben. **Pro Git**. Apress, 2014. Disponível em: [git-scm.com/book/pt-br/v2](https://git-scm.com/book/pt-br/v2).
- LOELIGER, Jon; MCCULLOUGH, Matthew. **Version Control with Git**. O'Reilly Media, 2012.
- GITHUB DOCS. **Documentação Oficial do GitHub**. Disponível em: [docs.github.com](https://docs.github.com).

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
