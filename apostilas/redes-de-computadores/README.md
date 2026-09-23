<div align="center">
  <br><br>
  <h1>🌐 APOSTILA DE REDES DE COMPUTADORES</h1>
  <h2>Conectividade, Protocolos e Infraestrutura</h2>
  <br>
  <p><strong>Disciplina:</strong> Redes de Computadores</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução às Redes de Computadores](#1-introdução-às-redes-de-computadores)
2. [Modelos de Referência: OSI e TCP/IP](#2-modelos-de-referência-osi-e-tcpip)
3. [Meios de Transmissão e Conectividade](#3-meios-de-transmissão-e-conectividade)
4. [Dispositivos de Interconexão](#4-dispositivos-de-interconexão)
5. [Endereçamento IP (IPv4 e IPv6)](#5-endereçamento-ip-ipv4-e-ipv6)
6. [Protocolos da Camada de Aplicação](#6-protocolos-da-camada-de-aplicação)
7. [Roteamento e Como a Internet Funciona](#7-roteamento-e-como-a-internet-funciona)
8. [Fundamentos de Segurança de Redes](#8-fundamentos-de-segurança-de-redes)
9. [Laboratório Prático (Comandos de Rede)](#9-laboratório-prático-comandos-de-rede)
10. [Exercícios e Referências](#10-exercícios-e-referências)

---

## 1. Introdução às Redes de Computadores

### 1.1 O que é uma Rede?
Uma rede de computadores é um conjunto de dispositivos autônomos interconectados por um único meio de comunicação, compartilhando recursos e informações.

### 1.2 Classificação quanto à Abrangência (Geografia)
| Sigla | Nome | Descrição | Exemplo |
| :---: | :--- | :--- | :--- |
| **PAN** | Personal Area Network | Rede pessoal, alcance de poucos metros. | Bluetooth, pareamento de fones. |
| **LAN** | Local Area Network | Rede local, limita-se a um prédio ou campus. | Wi-Fi da sua casa, rede do laboratório. |
| **MAN** | Metropolitan Area Network | Rede metropolitana, abrange uma cidade. | Rede de fibra de um provedor local (ISP). |
| **WAN** | Wide Area Network | Rede de longa distância, abrange países/continentes. | A própria Internet. |

### 1.3 Topologias Físicas e Lógicas
- **Barramento:** Todos conectados a um único cabo central (obsoleto).
- **Estrela:** Todos conectados a um dispositivo central (Switch). *Padrão atual em LANs.*
- **Anel:** Dispositivos conectados em círculo (Token Ring).
- **Árvore/Malha:** Combinações para redes maiores e redundantes (como a Internet).

---

## 2. Modelos de Referência: OSI e TCP/IP

Para que dois computadores possam se comunicar, eles precisam seguir as mesmas "regras". Essas regras são organizadas em **Camadas**.

### 2.1 O Modelo OSI (7 Camadas)
Criado pela ISO, é um modelo teórico e didático.
1. **Física:** Cabos, sinais elétricos, bits.
2. **Enlace:** Endereçamento físico (MAC), frames, switches.
3. **Rede:** Endereçamento lógico (IP), roteamento, pacotes.
4. **Transporte:** Confiabilidade, portas lógicas, segmentos (TCP/UDP).
5. **Sessão:** Estabelecimento e controle de diálogos.
6. **Apresentação:** Formatação, criptografia, compressão.
7. **Aplicação:** Onde o usuário interage (HTTP, FTP, SMTP).

### 2.2 O Modelo TCP/IP (4 Camadas)
É o modelo **real**, usado na Internet. Ele agrupa as camadas do OSI.

| Camada TCP/IP | Equivalente no OSI | Protocolos Exemplos |
| :--- | :--- | :--- |
| **Acesso à Rede** | Física + Enlace | Ethernet, Wi-Fi (802.11) |
| **Internet** | Rede | IP, ICMP, ARP |
| **Transporte** | Transporte | TCP, UDP |
| **Aplicação** | Sessão + Apresentação + Aplicação | HTTP, DNS, FTP, SMTP |

> 💡 **Dica de Prova:** Lembre-se da frase para as camadas do OSI: *"Fisicamente, Eu Recebo Notas Todo Sábado À noite"* (Física, Enlace, Rede, Transporte, Sessão, Apresentação, Aplicação).

---

## 3. Meios de Transmissão e Conectividade

### 3.1 Cabos Metálicos (Par Trançado)
- **UTP (Unshielded Twisted Pair):** O cabo de rede comum (RJ45). Sem blindagem.
- **Categorias:** Cat5e (até 1 Gbps), Cat6 (até 10 Gbps em curtas distâncias).
- **Limitação:** Máximo de 100 metros por segmento.

### 3.2 Fibra Óptica
Utiliza pulsos de luz em vez de eletricidade.
- **Vantagens:** Imune a interferência eletromagnética, altíssima velocidade, longas distâncias.
- **Tipos:** Monomodo (longa distância, laser) e Multimodo (curta distância, LED).

### 3.3 Redes Sem Fio (Wireless / Wi-Fi)
Utilizam ondas de rádio. Padrões IEEE 802.11.
| Padrão | Frequência | Velocidade Máxima Teórica |
| :--- | :--- | :--- |
| 802.11n (Wi-Fi 4) | 2.4 GHz | 600 Mbps |
| 802.11ac (Wi-Fi 5) | 5 GHz | 3.5 Gbps |
| 802.11ax (Wi-Fi 6) | 2.4 / 5 / 6 GHz | 9.6 Gbps |

---

## 4. Dispositivos de Interconexão

| Dispositivo | Camada OSI | Função Principal |
| :--- | :---: | :--- |
| **Hub** | 1 (Física) | Repete o sinal para todas as portas (obsoleto, gera colisão). |
| **Switch** | 2 (Enlace) | Lê o endereço MAC e envia o frame **apenas** para a porta de destino. |
| **Roteador** | 3 (Rede) | Lê o endereço IP e decide o melhor caminho (rota) para o pacote. |
| **Access Point** | 1/2 | Conecta dispositivos sem fio à rede cabeada. |
| **Firewall** | 2 a 7 | Filtra tráfego baseado em regras de segurança. |

---

## 5. Endereçamento IP (IPv4 e IPv6)

### 5.1 O Endereço IPv4
É um número de 32 bits, dividido em 4 octetos (0 a 255). Ex: `192.168.1.10`.
- **IP Público:** Roteável na Internet (único no mundo).
- **IP Privado:** Usado em redes locais (LANs). Pode ser repetido em redes diferentes.
  - Faixas privadas: `10.x.x.x`, `172.16.x.x a 172.31.x.x`, `192.168.x.x`.

### 5.2 Máscara de Sub-rede
Define qual parte do IP é a **Rede** e qual parte é o **Host** (máquina).
Exemplo: IP `192.168.1.10` com Máscara `255.255.255.0` (ou `/24`).
- **Rede:** `192.168.1.0`
- **Host:** `10`
- **Broadcast:** `192.168.1.255` (usado para falar com todos da rede).

### 5.3 O IPv6
Criado porque os IPs IPv4 acabaram. Tem 128 bits (hexadecimais).
Ex: `2001:0db8:85a3:0000:0000:8a2e:0370:7334`
Oferece um número praticamente infinito de endereços e melhor segurança nativa.

---

## 6. Protocolos da Camada de Aplicação

| Protocolo | Porta Padrão | Função |
| :--- | :---: | :--- |
| **HTTP** | 80 | Navegação web (sem criptografia). |
| **HTTPS** | 443 | Navegação web **segura** (com criptografia SSL/TLS). |
| **FTP** | 20/21 | Transferência de arquivos. |
| **SSH** | 22 | Acesso remoto seguro a terminais (Linux/Servidores). |
| **DNS** | 53 | Traduz nomes (www.google.com) para IPs (142.250.190.46). |
| **DHCP** | 67/68 | Atribui IPs automaticamente para os dispositivos da rede. |
| **SMTP** | 25/587 | Envio de e-mails. |
| **POP3 / IMAP** | 110 / 143 | Recebimento de e-mails. |

---

## 7. Roteamento e Como a Internet Funciona

Quando você acessa um site, o pacote não vai direto. Ele passa por vários **Roteadores** (Autonomous Systems - AS).
1. Seu PC envia o pacote para o **Roteador Padrão** (Gateway).
2. O roteador consulta sua **Tabela de Roteamento** para saber para onde enviar.
3. O pacote "pula" de roteador em roteador até chegar ao servidor de destino.
4. O servidor de destino responde pelo mesmo caminho (ou outro).

> 💡 **Curiosidade:** A Internet não é uma "nuvem" mágica. É uma infraestrutura física gigantesca de cabos submarinos de fibra óptica conectando continentes!

---

## 8. Fundamentos de Segurança de Redes

### 8.1 Ameaças Comuns
- **Sniffing:** Interceptação de pacotes em redes não criptografadas.
- **Spoofing:** Falsificação de IP ou MAC Address.
- **DDoS:** Ataques de negação de serviço (sobrecarregar um servidor).
- **Man-in-the-Middle (MitM):** Atacante se posiciona entre duas vítimas.

### 8.2 Boas Práticas
- **Wi-Fi:** Usar sempre WPA2 ou WPA3. Nunca WEP ou WPA.
- **Senhas:** Complexas e únicas para cada serviço.
- **Firewall:** Manter ativo no roteador e no sistema operacional.
- **Atualizações:** Manter roteadores e sistemas sempre atualizados.

---

## 9. Laboratório Prático (Comandos de Rede)

Você não precisa de equipamentos caros para testar redes! Abra o **Prompt de Comando (CMD)** no Windows ou o **Terminal** no Linux/Mac e teste:

### 9.1 Verificar sua configuração de IP
- **Windows:** `ipconfig /all`
- **Linux/Mac:** `ifconfig` ou `ip a`
> *Veja seu IP local, Máscara de Sub-rede e Gateway Padrão.*

### 9.2 Testar Conectividade (ICMP)
O comando `ping` envia pacotes para um destino e mede o tempo de ida e volta (latência).
```bash
ping www.google.com
ping 8.8.8.8
```

### 9.3 Rastrear a Rota (Traceroute)
Mostra por quais roteadores o seu pacote passou até chegar ao destino.
- **Windows:** `tracert www.google.com`
- **Linux/Mac:** `traceroute www.google.com`

### 9.4 Consultar o DNS
Descobre qual IP está por trás de um domínio.
```bash
nslookup www.google.com
```

### 9.5 Verificar Portas Abertas
- **Windows:** `netstat -an`
- **Linux/Mac:** `netstat -an` ou `ss -tuln`

---

## 10. Exercícios e Referências

### 10.1 Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Abra o terminal e descubra o seu endereço IP local, a Máscara de Sub-rede e o Gateway Padrão. | ⭐ |
| 2 | Use o comando `ping` para testar a conectividade com o site da sua universidade. Qual foi a latência média? | ⭐ |
| 3 | Use o `tracert` (ou `traceroute`) para rastrear o caminho até o site `www.google.com`. Quantos "saltos" (hops) foram necessários? | ⭐⭐ |
| 4 | Dado o IP `192.168.10.50` com máscara `255.255.255.0`, qual é o endereço de Rede e o endereço de Broadcast? | ⭐⭐ |
| 5 | Explique com suas palavras a diferença entre um Switch e um Roteador, citando em qual camada do modelo OSI cada um opera. | ⭐⭐⭐ |

### 10.2 Referências Bibliográficas

- TANENBAUM, Andrew S.; WETHERALL, David J. **Redes de Computadores**. Rio de Janeiro: Pearson, 2013.
- KUROSE, James F.; ROSS, Keith W. **Redes de Computadores e a Internet**. São Paulo: Bookman, 2013.
- TORRES, Gabriel. **Redes de Computadores**. Rio de Janeiro: Nova Terra, 2010.
- COMER, Douglas E. **Redes de Computadores e Internet**. Porto Alegre: Bookman, 2016.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
