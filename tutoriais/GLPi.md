# 🎫 GLPi

## 📌 O que é o GLPi?
O **GLPi** (Gestionnaire Libre de Parc Informatique) é uma solução de software de código aberto voltada para a Gestão de Serviços de TI (ITSM) e Inventário de Ativos. Sua filosofia central é a **centralização e organização**: ele permite que equipes (ou indivíduos) gerenciem chamados de suporte (helpdesk), mantenham um inventário detalhado de hardware e software, e administrem contratos e fornecedores em uma única plataforma web. Por ser open-source, oferece flexibilidade total sem os custos de licenciamento de ferramentas corporativas proprietárias.

- **Categoria:** Gestão de Ativos de TI e Helpdesk (Service Desk)
- **Plataforma:** Linux (Ubuntu/Debian) / Windows (via XAMPP) / Web
- **Palavras-chave:** Helpdesk, Inventário de TI, Código Aberto, GLPI, MariaDB, Apache, PHP, Chamados, Gestão de Serviços

---

## ✨ Principais Destaques
- **Gestão de Chamados (Ticketing):** Sistema robusto para abertura, atribuição, acompanhamento e resolução de incidentes e solicitações de serviço.
- **Inventário Automatizado:** Capacidade de catalogar computadores, monitores, softwares e periféricos, podendo ser integrado a ferramentas de inventário automático (como o FusionInventory ou GLPI Agent).
- **Arquitetura Web (LAMP):** Roda em pilhas padrão de mercado (Linux, Apache, MySQL/MariaDB, PHP), facilitando a hospedagem em servidores locais ou na nuvem.
- **Customizável e Multilíngue:** Permite a criação de campos personalizados, fluxos de aprovação e está disponível em dezenas de idiomas, incluindo Português do Brasil.

---

## 🚀 Instalação e Primeiros Passos

O GLPi pode ser rodado localmente para testes (via XAMPP) ou em um servidor Linux para uso em produção. Abaixo está o roteiro para instalação em ambiente Linux (Ubuntu/Debian).

### 1. Preparando o Ambiente (Servidor Web e PHP)
Atualize os pacotes e instale o Apache e as extensões necessárias do PHP:
```bash
sudo apt-get update
sudo apt-get install apache2
sudo apt install php7.2 libapache2-mod-php7.2 php7.2-common php7.2-mysql php7.2-gmp php7.2-curl php7.2-intl php7.2-mbstring php7.2-xmlrpc php7.2-apcu php7.2-gd php7.2-bcmath php7.2-soap php7.2-ldap php7.2-imap php7.2-xml php7.2-cli php7.2-zip php-cas php7.2-bz2
```
*(Nota: Versões mais recentes do GLPi podem exigir PHP 7.4 ou 8.x. Ajuste a versão conforme a documentação oficial da versão escolhida).*

Reinicie o Apache para aplicar as mudanças:
```bash
sudo systemctl restart apache2.service
```

### 2. Instalando e Configurando o Banco de Dados (MariaDB)
```bash
sudo apt-get install mariadb-server mariadb-client
sudo mysql_secure_installation
```
*Siga o assistente de segurança:*
- `Enter current password for root`: Pressione Enter
- `Set root password?`: **Y** (Defina uma senha forte)
- `Remove anonymous users?`: **Y**
- `Disallow root login remotely?`: **Y**
- `Remove test database and access to it?`: **Y**
- `Reload privilege tables now?`: **Y**

Crie o banco de dados e o usuário dedicado ao GLPi:
```bash
sudo mysql -u root -p
```
```sql
CREATE DATABASE glpi;
CREATE USER 'glpi'@'localhost' IDENTIFIED BY 'sua_senha_forte_aqui';
GRANT ALL ON glpi.* TO 'glpi'@'localhost' WITH GRANT OPTION;
FLUSH PRIVILEGES;
EXIT;
```

### 3. Baixando e Instalando o GLPi
```bash
cd /tmp
# Substitua a URL pela versão mais recente desejada
wget https://github.com/glpi-project/glpi/releases/download/9.5.0/glpi-9.5.0.tgz
tar -xvf glpi-9.5.0.tgz
sudo mv glpi /var/www/glpi
sudo chown -R www-data:www-data /var/www/glpi/
sudo chmod -R 755 /var/www/glpi/
```

### 4. Configurando o Virtual Host no Apache
Desative o site padrão e crie uma configuração específica para o GLPi:
```bash
sudo a2dissite 000-default
sudo nano /etc/apache2/sites-available/glpi.conf
```
Cole a seguinte configuração (ajuste `ServerName` se tiver um domínio):
```apache
<VirtualHost *:80>
    ServerAdmin admin@seudominio.com
    DocumentRoot /var/www/glpi
    ServerName seudominio.com
    
    <Directory /var/www/glpi/>
        Options +FollowSymlinks
        AllowOverride All
        Require all granted
    </Directory>
    
    ErrorLog ${APACHE_LOG_DIR}/error.log
    CustomLog ${APACHE_LOG_DIR}/access.log combined
</VirtualHost>
```
Ative a configuração e o módulo de reescrita:
```bash
sudo a2ensite glpi.conf
sudo a2enmod rewrite
sudo systemctl restart apache2.service
```

### 5. Finalização via Navegador
Acesse `http://localhost` (ou o IP/domínio do seu servidor). O assistente de instalação web do GLPi será iniciado. Siga os passos, fornecendo as credenciais do banco de dados (`glpi` / `sua_senha_forte_aqui`) criadas anteriormente.

---

## 📚 Links de Referência

**Oficiais:**
- [Site Oficial (Português)](https://glpi-project.org/pt-br/)
- [Página de Downloads](https://glpi-project.org/downloads/)
- [Repositório no GitHub](https://github.com/glpi-project/glpi)

**Tutoriais e Guias:**
- [Instalando o GLPi no Ubuntu Linux (IT Expert)](https://itexpert.tips/pt-br/glpi-pt-br/instalando-o-glpi-no-ubuntu-linux/)
- [GLPi: o que é, como instalar e abrir um chamado (Profissionais TI)](https://www.profissionaisti.com.br/instalar-usar-glpi/)
- [Instalação do GLPi 10 em ambiente Debian (Service Desk Brasil)](https://blog.servicedeskbrasil.com.br/instalacao-do-glpi-10-em-ambiente-debian/)
- [Configuração segura da Web Root do GLPi (Service Desk Brasil)](https://blog.servicedeskbrasil.com.br/configuracao-segura-web-root-glpi-pasta-public/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **GLPi** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Sistema de Chamados (Ticketing) e o "Registro de Erros":** No GLPi, nenhum problema é ignorado; ele vira um "ticket" com descrição, causa raiz e solução. Incentive seus alunos a tratarem os erros em matemática da mesma forma. Em vez de apenas apagar a conta errada, eles devem abrir um "ticket mental" ou anotar no caderno: *"Erro: esqueci o sinal negativo na distribuição. Causa: pressa. Solução: sempre reescrever o sinal antes de multiplicar"*. Isso transforma o erro em um ativo de aprendizado, não em um fracasso.
2. **Inventário de Ativos e o Mapeamento do Conhecimento:** O GLPi mantém um inventário preciso de tudo o que existe na TI. O aluno deve criar seu próprio "Inventário de Conhecimento": uma lista ou mapa mental de quais tópicos ele já domina (ex: "Fatoração", "Regra de Três") e quais são "ativos pendentes" ou "com defeito" (ex: "Logaritmos", "Geometria Espacial"). Saber exatamente o que se sabe e o que não se sabe é o primeiro passo para um plano de estudo eficiente.
3. **Dependências de Instalação e Pré-requisitos Matemáticos:** O roteiro de instalação do GLPi deixa claro que você não pode rodar o sistema sem antes ter o Apache, o PHP e o Banco de Dados configurados. Na matemática, os conceitos funcionam exatamente como "dependências de software". Não é possível "instalar" ou entender Derivadas (GLPi) sem antes ter o ambiente configurado com Funções e Limites (Apache/PHP). Ensine o aluno a respeitar e verificar os pré-requisitos antes de avançar para tópicos complexos, evitando a frustração de "erros de compatibilidade" no aprendizado.
