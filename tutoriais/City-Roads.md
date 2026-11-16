# 🗺️ City Roads

## 📌 O que é o City Roads?
O **City Roads** é uma ferramenta de visualização de dados, criada por anvaka, que renderiza *todas* as estradas de qualquer cidade do mundo de forma simultânea e fluida no navegador. Sua principal filosofia é tornar dados complexos de infraestrutura urbana acessíveis, gratuitos e visualmente compreensíveis. Ao buscar pelo nome de uma cidade, o sistema recupera dados do OpenStreetMap (OSM) e constrói um mapa vetorial interativo, revelando a "impressão digital" única e a topologia de cada centro urbano.

- **Categoria:** Visualização de Dados e Geoinformação
- **Plataforma:** Web (Navegador) / Node.js (Desenvolvimento Local)
- **Palavras-chave:** OpenStreetMap, Visualização de Dados, Teoria dos Grafos, Topologia Urbana, WebGL, Código Aberto

---

## ✨ Principais Destaques
- **Renderização de Grafos em Massa:** Capaz de desenhar centenas de milhares de segmentos de estradas (arestas) e interseções (nós) sem travar o navegador, graças ao uso eficiente de WebGL.
- **Dados Abertos e Cache Otimizado:** Utiliza a API do OpenStreetMap, mas melhora drasticamente a performance ao usar um cache próprio de ~3.000 cidades (em formato protobuf), evitando sobrecarga e lentidão nas requisições.
- **Interface Minimalista e Intuitiva:** Sem menus complexos. Basta digitar o nome da cidade na barra de busca e o mapa é gerado instantaneamente, permitindo zoom, pan e exploração livre.
- **API de Scripting (Scene API):** Oferece recursos para desenvolvedores e entusiastas de dados criarem programas e visualizações personalizadas em cima da engine do City Roads, exportando ou manipulando a cena via código.

---

## 🚀 Instalação e Primeiros Passos

Por ser uma aplicação web, o City Roads é imediatamente acessível, mas também permite execução local para desenvolvedores.

**Opção 1: Uso via Navegador (Recomendado para a maioria dos usuários)**
- Não requer instalação. Basta acessar o site oficial em qualquer navegador moderno (Chrome, Firefox, Edge, Safari).

**Opção 2: Desenvolvimento Local (Para desenvolvedores e contribuidores)**
- Clone o repositório do GitHub, instale as dependências via Node.js (`npm install`) e rode o servidor de desenvolvimento local (`npm run dev`) para testar ou modificar o código.

**Primeiros Passos:**
1. Acesse [anvaka.github.io/city-roads](https://anvaka.github.io/city-roads/).
2. Na barra de pesquisa no topo, digite o nome de uma cidade (ex: "São Paulo", "Tokyo", "Paris") e pressione Enter.
3. Aguarde alguns segundos para o carregamento dos dados (uma barra de progresso discreta aparecerá).
4. Use o scroll do mouse para dar **zoom in** (ver detalhes de um bairro) ou **zoom out** (ver a mancha urbana completa). Clique e arraste para navegar pelo mapa.

---

## 📚 Links de Referência

- [Aplicação Web Oficial](https://anvaka.github.io/city-roads/)
- [Repositório no GitHub](https://github.com/anvaka/city-roads)
- [Documentação da API de Scripting (Scene API)](https://github.com/anvaka/city-roads/blob/main/API.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **City Roads** oferecem analogias poderosas para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Teoria dos Grafos (Conexões entre Conceitos):** O City Roads é, na essência, a visualização de um grafo massivo (interseções são nós, estradas são arestas). Na matemática, um conceito nunca existe isolado. Incentive seus alunos a mapear as "rotas" entre os tópicos: como a fatoração se conecta às raízes de uma equação? Como a geometria analítica "traça uma estrada" até o cálculo? Entender a topologia do conhecimento é mais eficaz do que memorizar ilhas de informação.
2. **Zoom In / Zoom Out (Escalas de Abstração):** A ferramenta brilha ao permitir que o usuário veja a cidade inteira ou dê zoom em uma única rua. No estudo, o aluno precisa dominar a habilidade cognitiva de alternar entre a **visão macro** (o panorama geral do capítulo, o objetivo da demonstração) e a **visão micro** (os detalhes do cálculo, a manipulação algébrica de um passo específico). Perder-se nos detalhes sem ver o mapa todo, ou ver o mapa todo sem saber caminhar por uma rua, são falhas comuns de aprendizado.
3. **Cache e Otimização (Economia Cognitiva):** O desenvolvedor criou um cache local de cidades para evitar sobrecarregar a API externa e tornar o carregamento instantâneo. No estudo, isso é análogo à construção de "atalhos mentais" sólidos (memorização de fundamentos como tabuada, identidades trigonométricas ou regras de derivação). Se o cérebro precisa "consultar a API" (o livro ou a internet) para cada passo básico, o processamento da resolução de problemas complexos fica lento e sobrecarregado. Ter o "cache" interno libera recursos de memória de trabalho para o raciocínio de alto nível.
