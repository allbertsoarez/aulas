<div align="center">
  <br><br>
  <h1>🌐 APOSTILA DE REDES DE COMPUTADORES</h1>
  <h2>Linux, Terminal, Conectividade e Protocolos</h2>
  <br>
  <p><strong>Disciplina:</strong> Redes de Computadores</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 2.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

### Parte I: Fundamentos de Linux e Terminal
1. [Introdução ao Linux](#1-introdução-ao-linux)
2. [O Terminal e a Linha de Comando](#2-o-terminal-e-a-linha-de-comando)
3. [Navegação e Manipulação de Arquivos](#3-navegação-e-manipulação-de-arquivos)
4. [Permissões e Usuários](#4-permissões-e-usuários)
5. [Editores de Texto no Terminal](#5-editores-de-texto-no-terminal)
6. [Redirecionamento e Pipes](#6-redirecionamento-e-pipes)

### Parte II: Fundamentos de Redes
7. [Introdução às Redes de Computadores](#7-introdução-às-redes-de-computadores)
8. [Modelos de Referência: OSI e TCP/IP](#8-modelos-de-referência-osi-e-tcpip)
9. [Meios de Transmissão e Conectividade](#9-meios-de-transmissão-e-conectividade)
10. [Dispositivos de Interconexão](#10-dispositivos-de-interconexão)
11. [Endereçamento IP (IPv4 e IPv6)](#11-endereçamento-ip-ipv4-e-ipv6)
12. [Protocolos da Camada de Aplicação](#12-protocolos-da-camada-de-aplicação)
13. [Roteamento e Como a Internet Funciona](#13-roteamento-e-como-a-internet-funciona)
14. [Fundamentos de Segurança de Redes](#14-fundamentos-de-segurança-de-redes)

### Parte III: Laboratório Prático
15. [Laboratório: Comandos de Rede no Terminal](#15-laboratório-comandos-de-rede-no-terminal)
16. [Exercícios e Referências](#16-exercícios-e-referências)

---

# PARTE I: FUNDAMENTOS DE LINUX E TERMINAL

---

## 1. Introdução ao Linux

### 1.1 O que é o Linux?
Linux é um **sistema operacional** de código aberto, criado por Linus Torvalds em 1991. Ele é o kernel (núcleo) que gerencia o hardware e fornece serviços para os programas.

> 💡 **Por que "Linux" e não "GNU/Linux"?** Tecnicamente, o sistema completo é GNU + Linux, mas popularmente chamamos apenas de "Linux".

### 1.2 Por que aprender Linux?
1. **Servidores:** 96.3% dos top 1 milhão de servidores web rodam Linux.
2. **Nuvem:** AWS, Google Cloud, Azure — tudo roda Linux.
3. **DevOps e Containers:** Docker, Kubernetes, CI/CD — todos baseados em Linux.
4. **Segurança:** Ferramentas de pentest e análise forense rodam em Linux.
5. **Embarcados:** Roteadores, smart TVs, carros — todos usam Linux.
6. **IA e Ciência de Dados:** TensorFlow, PyTorch — otimizados para Linux.

### 1.3 Distribuições (Distros)
O Linux tem várias "versões" chamadas distribuições:
| Distro | Base | Foco |
| :--- | :--- | :--- |
| **Ubuntu** | Debian | Iniciantes, servidores, desktop |
| **Debian** | Independente | Estabilidade, servidores |
| **Fedora** | Red Hat | Desenvolvedores, tecnologias novas |
| **CentOS/Rocky** | Red Hat | Servidores empresariais |
| **Arch** | Independente | Usuários avançados, customização |
| **Kali** | Debian | Segurança, pentest |

### 1.4 Como usar Linux sem instalar?
1. **WSL (Windows Subsystem for Linux):** Roda Linux dentro do Windows 10/11.
2. **Máquina Virtual:** VirtualBox ou VMware com ISO do Ubuntu.
3. **Live USB:** Bootar direto de um pendrive sem instalar.
4. **Cloud:** Instâncias gratuitas na AWS, Google Cloud, Oracle Cloud.

---

## 2. O Terminal e a Linha de Comando

### 2.1 O que é o Terminal?
O **terminal** (ou shell) é uma interface de texto onde você digita comandos para interagir com o sistema operacional. No Linux, o shell padrão é o **Bash** (Bourne Again Shell).

### 2.2 Abrindo o Terminal
- **Linux:** `Ctrl + Alt + T`
- **Mac:** Aplicativo "Terminal"
- **Windows (WSL):** Abra o "Windows Terminal" ou "Ubuntu"
- **Windows (sem WSL):** Use o "PowerShell" ou "Git Bash"

### 2.3 Estrutura de um Comando
```bash
comando [opções] [argumentos]
```

Exemplos:
```bash
ls -l /home          # lista arquivos em /home com detalhes
mkdir projetos       # cria uma pasta chamada "projetos"
cat arquivo.txt      # exibe o conteúdo de arquivo.txt
```

### 2.4 Comandos Essenciais de Ajuda
```bash
man comando          # manual completo do comando
comando --help       # ajuda resumida
whatis comando       # descrição de uma linha
```

---

## 3. Navegação e Manipulação de Arquivos

### 3.1 Estrutura de Diretórios
O Linux usa uma estrutura de árvore invertida, com a raiz em `/`:
```
/
├── home/            ← Diretórios dos usuários
│   └── usuario/
├── etc/             ← Arquivos de configuração
├── var/             ← Dados variáveis (logs)
├── usr/             ← Programas instalados
├── bin/             ← Comandos básicos
└── tmp/             ← Arquivos temporários
```

### 3.2 Comandos de Navegação
| Comando | Descrição | Exemplo |
| :--- | :--- | :--- |
| `pwd` | Mostra o diretório atual | `pwd` → `/home/usuario` |
| `ls` | Lista arquivos e pastas | `ls -la` (detalhes + ocultos) |
| `cd` | Muda de diretório | `cd /home` |
| `cd ..` | Volta um nível | `cd ..` |
| `cd ~` | Vai para o home do usuário | `cd ~` |
| `cd -` | Volta ao diretório anterior | `cd -` |

### 3.3 Comandos de Manipulação de Arquivos
| Comando | Descrição | Exemplo |
| :--- | :--- | :--- |
| `mkdir` | Cria diretório | `mkdir projetos` |
| `rmdir` | Remove diretório vazio | `rmdir projetos` |
| `touch` | Cria arquivo vazio | `touch arquivo.txt` |
| `cp` | Copia arquivo/diretório | `cp origem destino` |
| `mv` | Move ou renomeia | `mv antigo.txt novo.txt` |
| `rm` | Remove arquivo | `rm arquivo.txt` |
| `rm -r` | Remove diretório recursivamente | `rm -r projetos/` |
| `cat` | Exibe conteúdo do arquivo | `cat arquivo.txt` |
| `less` | Visualiza arquivo paginado | `less arquivo.txt` |
| `head` | Exibe primeiras linhas | `head -n 10 arquivo.txt` |
| `tail` | Exibe últimas linhas | `tail -n 10 arquivo.txt` |

### 3.4 Caminhos: Absolutos vs Relativos
- **Absoluto:** Começa da raiz `/`. Ex: `/home/usuario/documentos/arquivo.txt`
- **Relativo:** Começa do diretório atual. Ex: `documentos/arquivo.txt`

### 3.5 Wildcards (Curingas)
- `*` — Qualquer sequência de caracteres
- `?` — Um único caractere
- `[abc]` — Um dos caracteres listados

Exemplos:
```bash
ls *.txt           # lista todos os arquivos .txt
rm arquivo?.log    # remove arquivo1.log, arquivo2.log, etc.
```

---

## 4. Permissões e Usuários

### 4.1 O Sistema de Usuários
No Linux, tudo é feito por usuários. Cada usuário tem:
- **UID (User ID):** Número único
- **GID (Group ID):** Grupo ao qual pertence
- **Home directory:** `/home/usuario`

### 4.2 Comandos de Usuário
```bash
whoami               # quem sou eu?
id                   # meu UID, GID e grupos
sudo comando         # executa como root (superusuário)
su usuario           # troca para outro usuário
```

### 4.3 Permissões de Arquivos
Ao executar `ls -l`, você vê algo como:
```
-rwxr-xr-- 1 usuario grupo 1234 Jan 1 12:00 arquivo.txt
```

Isso significa:
```
-          rwx        r-x        r--
tipo       dono       grupo      outros
```

| Símbolo | Significado |
| :---: | :--- |
| `-` | Arquivo normal |
| `d` | Diretório |
| `l` | Link simbólico |
| `r` | Leitura (read) |
| `w` | Escrita (write) |
| `x` | Execução (execute) |

### 4.4 Alterando Permissões
```bash
chmod 755 arquivo.sh     # rwxr-xr-x (dono: tudo, outros: ler+executar)
chmod 644 arquivo.txt    # rw-r--r-- (dono: ler+escrever, outros: só ler)
chmod +x script.sh       # adiciona permissão de execução
```

**Sistema octal:**
- `r` = 4, `w` = 2, `x` = 1
- `7` = rwx (4+2+1)
- `6` = rw- (4+2)
- `5` = r-x (4+1)
- `4` = r-- (4)

### 4.5 Alterando Dono e Grupo
```bash
chown usuario arquivo.txt        # muda dono
chgrp grupo arquivo.txt          # muda grupo
chown usuario:grupo arquivo.txt  # muda ambos
```

---

## 5. Editores de Texto no Terminal

### 5.1 Nano (Simples e Intuitivo)
```bash
nano arquivo.txt
```
Atalhos (use `Ctrl` + tecla):
- `Ctrl + O` — Salvar
- `Ctrl + X` — Sair
- `Ctrl + K` — Cortar linha
- `Ctrl + U` — Colar

### 5.2 Vim (Poderoso, mas Curva Íngreme)
```bash
vim arquivo.txt
```
Modos:
- **Normal:** Navegação (teclas `h`, `j`, `k`, `l`)
- **Inserção:** Pressione `i` para editar
- **Comando:** Pressione `Esc` e digite `:wq` para salvar e sair

**Sobrevivência no Vim:**
```
i        → entrar no modo de inserção
Esc      → voltar ao modo normal
:wq      → salvar e sair
:q!      → sair sem salvar
```

### 5.3 Qual usar?
- **Nano:** Para edições rápidas e iniciantes.
- **Vim:** Para edições complexas e produtividade avançada (vale a pena aprender).

---

## 6. Redirecionamento e Pipes

### 6.1 Redirecionamento de Saída
```bash
echo "Olá" > arquivo.txt       # sobrescreve o arquivo
echo "Mundo" >> arquivo.txt    # adiciona ao final do arquivo
ls > lista.txt                 # salva a saída de ls em um arquivo
```

### 6.2 Redirecionamento de Entrada
```bash
sort < lista.txt               # lê o arquivo como entrada
```

### 6.3 Pipes (Encadeamento de Comandos)
O pipe `|` conecta a saída de um comando à entrada do próximo:
```bash
ls -l | grep ".txt"            # lista arquivos e filtra só os .txt
cat arquivo.txt | wc -l        # conta linhas do arquivo
ps aux | grep python           # encontra processos Python rodando
```

### 6.4 Combinações Poderosas
```bash
# Encontrar os 10 maiores arquivos do diretório atual
du -ah | sort -rh | head -n 10

# Contar quantos arquivos .py existem recursivamente
find . -name "*.py" | wc -l

# Ver quem está acessando o servidor (logs)
tail -f /var/log/apache2/access.log | grep "404"
```

---

# PARTE II: FUNDAMENTOS DE REDES

---

## 7. Introdução às Redes de Computadores

### 7.1 O que é uma Rede?
Uma rede de computadores é um conjunto de dispositivos autônomos interconectados por um único meio de comunicação, compartilhando recursos e informações.

### 7.2 Classificação quanto à Abrangência (Geografia)
| Sigla | Nome | Descrição | Exemplo |
| :---: | :--- | :--- | :--- |
| **PAN** | Personal Area Network | Rede pessoal, alcance de poucos metros. | Bluetooth, pareamento de fones. |
| **LAN** | Local Area Network | Rede local, limita-se a um prédio ou campus. | Wi-Fi da sua casa, rede do laboratório. |
| **MAN** | Metropolitan Area Network | Rede metropolitana, abrange uma cidade. | Rede de fibra de um provedor local (ISP). |
| **WAN** | Wide Area Network | Rede de longa distância, abrange países/continentes. | A própria Internet. |

### 7.3 Topologias Físicas e Lógicas
- **Barramento:** Todos conectados a um cabo central (obsoleto).
- **Estrela:** Todos conectados a um dispositivo central (Switch). *Padrão atual em LANs.*
- **Anel:** Dispositivos conectados em círculo (Token Ring).
- **Árvore/Malha:** Combinações para redes maiores e redundantes (como a Internet).

---

## 8. Modelos de Referência: OSI e TCP/IP

### 8.1 O Modelo OSI (7 Camadas)
Criado pela ISO, é um modelo teórico e didático.
1. **Física:** Cabos, sinais elétricos, bits.
2. **Enlace:** Endereçamento físico (MAC), frames, switches.
3. **Rede:** Endereçamento lógico (IP), roteamento, pacotes.
4. **Transporte:** Confiabilidade, portas lógicas, segmentos (TCP/UDP).
5. **Sessão:** Estabelecimento e controle de diálogos.
6. **Apresentação:** Formatação, criptografia, compressão.
7. **Aplicação:** Onde o usuário interage (HTTP, FTP, SMTP).

### 8.2 O Modelo TCP/IP (4 Camadas)
É o modelo **real**, usado na Internet.

| Camada TCP/IP | Equivalente no OSI | Protocolos Exemplos |
| :--- | :--- | :--- |
| **Acesso à Rede** | Física + Enlace | Ethernet, Wi-Fi (802.11) |
| **Internet** | Rede | IP, ICMP, ARP |
| **Transporte** | Transporte | TCP, UDP |
| **Aplicação** | Sessão + Apresentação + Aplicação | HTTP, DNS, FTP, SMTP |

> 💡 **Dica de Prova:** *"Fisicamente, Eu Recebo Notas Todo Sábado À noite"* (Física, Enlace, Rede, Transporte, Sessão, Apresentação, Aplicação).

---

## 9. Meios de Transmissão e Conectividade

### 9.1 Cabos Metálicos (Par Trançado)
- **UTP (Unshielded Twisted Pair):** O cabo de rede comum (RJ45).
- **Categorias:** Cat5e (até 1 Gbps), Cat6 (até 10 Gbps).
- **Limitação:** Máximo de 100 metros.

### 9.2 Fibra Óptica
Utiliza pulsos de luz. Imune a interferência, altíssima velocidade, longas distâncias.

### 9.3 Redes Sem Fio (Wi-Fi)
| Padrão | Frequência | Velocidade Máxima |
| :--- | :--- | :--- |
| 802.11n (Wi-Fi 4) | 2.4 GHz | 600 Mbps |
| 802.11ac (Wi-Fi 5) | 5 GHz | 3.5 Gbps |
| 802.11ax (Wi-Fi 6) | 2.4/5/6 GHz | 9.6 Gbps |

---

## 10. Dispositivos de Interconexão

| Dispositivo | Camada OSI | Função Principal |
| :--- | :---: | :--- |
| **Hub** | 1 (Física) | Repete sinal para todas as portas (obsoleto). |
| **Switch** | 2 (Enlace) | Lê MAC e envia frame apenas para a porta de destino. |
| **Roteador** | 3 (Rede) | Lê IP e decide o melhor caminho (rota). |
| **Access Point** | 1/2 | Conecta dispositivos sem fio à rede cabeada. |
| **Firewall** | 2 a 7 | Filtra tráfego baseado em regras de segurança. |

---

## 11. Endereçamento IP (IPv4 e IPv6)

### 11.1 O Endereço IPv4
Número de 32 bits, dividido em 4 octetos. Ex: `192.168.1.10`.
- **IP Público:** Roteável na Internet (único no mundo).
- **IP Privado:** Usado em LANs. Faixas: `10.x.x.x`, `172.16.x.x a 172.31.x.x`, `192.168.x.x`.

### 11.2 Máscara de Sub-rede
Define qual parte do IP é **Rede** e qual é **Host**.
Ex: IP `192.168.1.10` com Máscara `255.255.255.0` (ou `/24`).

### 11.3 O IPv6
128 bits (hexadecimais). Ex: `2001:0db8:85a3::8a2e:0370:7334`

---

## 12. Protocolos da Camada de Aplicação

| Protocolo | Porta | Função |
| :--- | :---: | :--- |
| **HTTP** | 80 | Navegação web (sem criptografia). |
| **HTTPS** | 443 | Navegação web **segura** (SSL/TLS). |
| **FTP** | 20/21 | Transferência de arquivos. |
| **SSH** | 22 | Acesso remoto seguro a terminais. |
| **DNS** | 53 | Traduz nomes para IPs. |
| **DHCP** | 67/68 | Atribui IPs automaticamente. |
| **SMTP** | 25/587 | Envio de e-mails. |
| **POP3/IMAP** | 110/143 | Recebimento de e-mails. |

---

## 13. Roteamento e Como a Internet Funciona

Quando você acessa um site, o pacote passa por vários **Roteadores** (Autonomous Systems).

> 💡 **Curiosidade:** A Internet é uma infraestrutura física de cabos submarinos de fibra óptica conectando continentes!

---

## 14. Fundamentos de Segurança de Redes

### 14.1 Ameaças Comuns
- **Sniffing:** Interceptação de pacotes.
- **Spoofing:** Falsificação de IP ou MAC.
- **DDoS:** Ataques de negação de serviço.
- **Man-in-the-Middle (MitM):** Atacante entre duas vítimas.

### 14.2 Boas Práticas
- Wi-Fi: WPA2 ou WPA3.
- Senhas complexas e únicas.
- Firewall ativo.
- Atualizações constantes.

---

# PARTE III: LABORATÓRIO PRÁTICO

---

## 15. Laboratório: Comandos de Rede no Terminal

Agora que você domina o terminal Linux, vamos testar redes!

### 15.1 Verificar Configuração de IP
```bash
# Linux/Mac
ifconfig
ip addr show

# Ver detalhes completos
ip addr show eth0
```

### 15.2 Testar Conectividade (ICMP)
```bash
ping google.com
ping 8.8.8.8

# Ping contínuo com intervalo de 0.5s
ping -i 0.5 google.com

# Parar após 5 pacotes
ping -c 5 google.com
```

### 15.3 Rastrear a Rota (Traceroute)
```bash
# Linux/Mac
traceroute google.com

# Mostra os "saltos" até o destino
mtr google.com    # versão interativa e mais detalhada
```

### 15.4 Consultar o DNS
```bash
nslookup google.com
dig google.com

# Consultar servidor DNS específico
dig @8.8.8.8 google.com
```

### 15.5 Verificar Portas e Conexões
```bash
# Listar portas abertas e conexões
netstat -tuln
ss -tuln

# Ver qual processo está usando uma porta
lsof -i :80
netstat -tulnp | grep :22
```

### 15.6 Transferir Arquivos pela Rede
```bash
# Baixar arquivo via HTTP
wget https://exemplo.com/arquivo.zip

# Download com curl (mais flexível)
curl -O https://exemplo.com/arquivo.zip

# Copiar arquivo para servidor remoto via SSH
scp arquivo.txt usuario@servidor:/caminho/destino/

# Copiar diretório inteiro
scp -r pasta/ usuario@servidor:/caminho/destino/
```

### 15.7 Acesso Remoto (SSH)
```bash
# Conectar a servidor remoto
ssh usuario@192.168.1.100

# Com porta personalizada
ssh -p 2222 usuario@servidor

# Copiar chave pública para não digitar senha
ssh-copy-id usuario@servidor
```

### 15.8 Monitoramento de Rede em Tempo Real
```bash
# Monitorar tráfego de rede
iftop

# Monitorar banda por processo
nethogs

# Capturar pacotes (precisa de root)
sudo tcpdump -i eth0
sudo wireshark    # interface gráfica
```

---

## 16. Exercícios e Referências

### 16.1 Exercícios Práticos

**Linux e Terminal:**
| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Navegue até `/etc`, liste todos os arquivos de configuração (dica: use `ls` com wildcard) e conte quantos existem. | ⭐ |
| 2 | Crie uma estrutura de diretórios `projetos/web/frontend` e `projetos/web/backend` com um único comando (dica: `mkdir -p`). | ⭐ |
| 3 | Crie um arquivo `teste.txt`, adicione permissão de execução para todos os usuários e verifique com `ls -l`. | ⭐⭐ |
| 4 | Use pipes para encontrar os 5 processos que mais consomem memória no sistema. | ⭐⭐⭐ |

**Redes:**
| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 5 | Descubra seu IP local, máscara de sub-rede e gateway padrão usando comandos do terminal. | ⭐ |
| 6 | Use `ping` para testar conectividade com sua universidade. Qual a latência média? | ⭐ |
| 7 | Use `traceroute` até `google.com`. Quantos "saltos" foram necessários? | ⭐⭐ |
| 8 | Dado o IP `192.168.10.50` com máscara `255.255.255.0`, qual o endereço de Rede e Broadcast? | ⭐⭐ |
| 9 | Conecte-se a um servidor remoto via SSH e liste os arquivos do diretório `/var/log`. | ⭐⭐⭐ |
| 10 | Explique a diferença entre Switch e Roteador, citando em qual camada do OSI cada um opera. | ⭐⭐⭐ |

### 16.2 Referências Bibliográficas

- TANENBAUM, Andrew S.; WETHERALL, David J. **Redes de Computadores**. Rio de Janeiro: Pearson, 2013.
- KUROSE, James F.; ROSS, Keith W. **Redes de Computadores e a Internet**. São Paulo: Bookman, 2013.
- TORRES, Gabriel. **Redes de Computadores**. Rio de Janeiro: Nova Terra, 2010.
- MELO, Julio Cesar. **Linux: A Bíblia**. Rio de Janeiro: Alta Books, 2012.
- SOBORAL, Augusto. **Introdução ao Linux**. São Paulo: Érica, 2015.
- LINUXCOMMAND. **The Linux Command Line**. Disponível em: <https://linuxcommand.org>. Acesso em: 2024.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
