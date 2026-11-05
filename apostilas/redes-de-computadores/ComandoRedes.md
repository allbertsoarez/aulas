# 🌐 Guia Definitivo de Comandos de Rede no Linux

> Resumo Executivo
> Este guia organiza os comandos essenciais de redes de computadores em uma hierarquia lógica de diagnóstico, com foco total no ecossistema **Linux** (o padrão da indústria para servidores e dispositivos de rede). Inclui comparações com o Windows, desmistifica o uso do `nmap`, atualiza ferramentas legadas e fornece uma metodologia prática de estudo.

---

## 🧠 1. Analogia Mental para Diagnóstico de Rede
Para facilitar a memorização e o ensino, pense nas ferramentas de rede como um **kit médico**:

| Ferramenta           | Analogia Médica                   | Pergunta que ela responde                                     |
| :------------------- | :-------------------------------- | :------------------------------------------------------------ |
| `ping`               | Termômetro                        | "O dispositivo está 'vivo' e respondendo?"                    |
| `ip a` / `ip r`      | Raio-X do próprio corpo           | "Como estou configurado localmente?"                          |
| `mtr` / `traceroute` | Mapeamento circulatório           | "Por onde os dados estão passando e onde travam?"             |
| `dig` / `nslookup`   | Lista telefônica / Tradutor       | "O nome (domínio) está sendo traduzido para IP corretamente?" |
| `ss` / `netstat`     | Monitor de sinais vitais locais   | "Quais portas e serviços estão ativos nesta máquina?"         |
| `tcpdump` / `tshark` | Biópsia / Exame de sangue         | "O que exatamente está escrito dentro dos pacotes?"           |
| `nmap`               | Ressonância magnética do ambiente | "O que existe naquela rede externa (hosts, portas, SO)?"      |

---

## 📊 2. Os 5 Níveis de Diagnóstico de Rede (Foco Linux)

### 🟢 Nível 1: Diagnóstico Básico (Configuração e Conectividade Local)
*   **`ip a`** (ou `ip addr show`): Exibe a configuração atual das interfaces de rede (IP, máscara, MAC). *Substitui o `ipconfig` do Windows.*
*   **`ping -c 4 <destino>`**: Testa a conectividade enviando 4 pacotes ICMP. *(Nota: no Linux, o `ping` roda infinitamente até `Ctrl+C` se o `-c` não for usado).*

### 🟡 Nível 2: Rastreamento de Caminho (Latência e Rotas)
*   **`traceroute <destino>`**: Mostra a rota (salto a salto) até o destino.
*   **`tracepath <destino>`**: Alternativa ao `traceroute` que **não requer privilégios de root** (`sudo`), ideal para diagnósticos rápidos de usuários comuns.
*   **`mtr <destino>`**: O substituto moderno do `pathping` (Windows). Combina `ping` e `traceroute`, mostrando perda de pacotes e latência em tempo real em cada salto.

### 🟠 Nível 3: Resolução de Nomes e Endereçamento
*   **`dig <dominio>`**: A ferramenta profissional para consultas DNS. Mais detalhada e scriptável que o `nslookup`. Ex: `dig google.com` ou `dig -x 8.8.8.8` (reverso).
*   **`nslookup <dominio>`**: Alternativa mais simples e interativa para consultas DNS rápidas.
*   **`ip neigh`** (ou `ip neighbor show`): Exibe a tabela ARP local (mapeamento IP ↔ MAC). *Substitui o legado `arp -a`.*

### 🔴 Nível 4: Monitoramento de Conexões e Portas Locais
*   **`ss -tulpn`**: Exibe conexões ativas, portas em escuta (Listening) e os PIDs dos processos. *Substitui o `netstat`.*
    *   `-t`: TCP | `-u`: UDP | `-l`: Listening | `-p`: Processos | `-n`: Numérico (sem resolver nomes de serviço)

### 🟣 Nível 5: Ferramentas Avançadas e de Segurança
*   **`nmap`**: Varredura de rede, descoberta de hosts, portas, versões de serviços e SO.
    *   Exemplos: `nmap -sn 192.168.1.0/24` (ping sweep), `nmap -sV alvo` (detecção de versão), `nmap --script vuln alvo` (scripts de vulnerabilidade).
*   **`nc -zv <alvo> <porta>`** (Netcat): Teste rápido e direto de conectividade em uma porta específica. *Substitui o `telnet` (que é inseguro e obsoleto para essa função).*
*   **`tcpdump -i <interface> port <porta>`** ou **`tshark`**: Captura de pacotes em tempo real via linha de comando (o "Wireshark do terminal").
*   **`ssh usuario@<ip>`**: Acesso remoto seguro a servidores e dispositivos de rede.

---

## ⚠️ 3. O Mito do Nmap: Por que ele NÃO substitui tudo

> Atenção Comum
> É um erro pensar que o `nmap`, por ser poderoso, substitui comandos como `ping`, `ip a` ou `ss`. O `nmap` é uma ferramenta de **análise externa**, não de diagnóstico local.

| O que você quer saber?                                   | O `nmap` resolve? | Comando Correto no Linux                    |
| :------------------------------------------------------- | :---------------: | :------------------------------------------ |
| Qual é o meu IP e Gateway?                               |       ❌ Não       | `ip a` e `ip r`                             |
| Meu DNS está falhando localmente?                        |       ❌ Não       | `dig google.com`                            |
| Qual processo está usando a porta 80 na *minha* máquina? |       ❌ Não       | `ss -tulpn \| grep 80`                      |
| O servidor remoto tem a porta 443 aberta?                |       ✅ Sim       | `nmap -p 443 <alvo>` ou `nc -zv <alvo> 443` |
| Qual é o Sistema Operacional do alvo?                    |       ✅ Sim       | `nmap -O <alvo>`                            |

**Regra de Ouro:** O `nmap` responde à pergunta *"O que existe naquela rede?"*. Os outros comandos respondem a *"O que está acontecendo aqui e agora?"*.

---

## 🔄 4. Comandos Legados vs. Modernos no Linux

O Linux passou por uma grande transição. Para um curso atualizado, ensine sempre a **suíte moderna** (`iproute2`), mencionando a legada apenas como referência histórica ou para lidar com sistemas muito antigos.

| Função                   | Comando Legado (Obsoleto) | Comando Moderno (Recomendado)   |
| :----------------------- | :------------------------ | :------------------------------ |
| Ver IP e Interfaces      | `ifconfig`                | **`ip a`**                      |
| Ver Tabela de Roteamento | `route -n`                | **`ip r`** (ou `ip route show`) |
| Ver Tabela ARP           | `arp -a`                  | **`ip neigh`**                  |
| Ver Portas/Conexões      | `netstat -tulpn`          | **`ss -tulpn`**                 |

---

## 💻 5. Truque Bônus: Teste de Porta sem Instalar Nada
Se você estiver em um contêiner Docker minimalista ou um servidor sem `netcat` ou `nmap` instalados, o próprio **Bash** possui um recurso nativo para testar portas:

```bash
# Testa se a porta 443 do google.com está aberta usando apenas o Bash
timeout 2 bash -c 'echo > /dev/tcp/google.com/443' && echo "Porta aberta!" || echo "Porta fechada/falhando"
```

---

## 📦 6. Preparação do Ambiente Linux (Instalação)

Diferente do Windows, distribuições Linux minimalistas ou contêineres podem não ter todas as ferramentas instaladas. Execute este bloco para garantir um laboratório completo (base Debian/Ubuntu):

```bash
# Atualiza os repositórios
sudo apt update

# Instala o conjunto essencial de ferramentas de rede
sudo apt install -y iproute2 net-tools mtr nmap tcpdump netcat-openbsd dnsutils tshark
```

> Dica sobre os pacotes
> - `iproute2`: Traz o `ip` e o `ss` (já vem instalado na maioria das distros).
> - `net-tools`: Traz o legado `ifconfig` e `netstat` (útil apenas para comparação didática).
> - `dnsutils`: Traz o `dig` e o `nslookup`.
> - `tshark`: Versão CLI do Wireshark para captura avançada.

---

## 💡 7. Metodologia de Estudo e Ensino (3 Pilares)

Como este material serve de base para uma metodologia de estudo de temas complexos, aplique estes 3 pilares no curso:

1. **Laboratório Virtual Seguro**: Use máquinas virtuais (VirtualBox, Multipass) ou contêineres (Docker) para simular uma pequena rede (ex: 1 "servidor" Linux rodando um serviço simples e 1 "cliente" para testar). Isso permite errar sem consequências reais.
2. **Estudo por Cenário de Falha**: Em vez de apenas decorar a sintaxe, crie problemas propositalmente e use os comandos em ordem (Nível 1 → Nível 5) para diagnosticar. Exemplos de falhas para injetar:
   - Desativar o serviço de DNS no servidor.
   - Adicionar uma regra no `ufw` (firewall) bloqueando a porta 80.
   - Alterar o gateway padrão para um IP inexistente.
3. **Documentação Ativa (Zettelkasten)**: Incentive os alunos a anotar os comandos não pela sintaxe isolada, mas pela **pergunta que eles respondem**. Ex: *"O DNS está funcionando?"* → `dig google.com`.

---
> Citação para Reflexão
> "Dominar redes não é memorizar 100 comandos, mas saber quais 5 comandos usar, na ordem certa, para isolar qualquer problema de conectividade."
