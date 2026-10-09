# GLPi
Ferramenta de código aberto para gerenciar Helpdesk e ativos de TI!


**LOCALHOST** 
- Carregue o XAMPP Painel Control e inicie o servidor Apache e MySQL

 ## SERVIDOR GLPI no Linux

**Instalando Apache**
```
sudo apt-get update sudo apt-get install apache2
```

**Instalando PHP**
```
sudo apt install php7.2 libapache2-mod-php7.2 php7.2-common php7.2-mysql php7.2-gmp php7.2-curl php7.2-intl php7.2-mbstring php7.2-xmlrpc php7.2-apcu php7.2-gd php7.2-bcmath php7.2-soap php7.2-ldap php7.2-imap php7.2-xml php7.2-cli php7.2-zip php-cas php7.2-bz2
```

**Para finalizar basta reiniciar o servidor**
```
sudo systemctl restart apache2.service
```

**Instalando Banco de Dados**
```
sudo apt-get install mariadb-server mariadb-client
```

**Após instalar o BD siga os seguintes passo:**
```
sudo mysql_secure_installation
```

```
Enter current password for root (enter for none): Apenas pressione Enter  
Set root password? [Y/n]: Y  
New password: Insira uma nova senha  
Re-enter new password: Confirme a senha digitada anteriormente  
Remove anonymous users? [Y/n]: Y  
Disallow root login remotely? [Y/n]: Y  
Remove test database and access to it? [Y/n]: Y  
Reload privilege tables now? [Y/n]: Y
```

**Criando BD no GLPi**
```
sudo mysql -u root -p  
CREATE DATABASE glpi;  
CREATE USER 'glpi'@'localhost' IDENTIFIED BY 'glpi';  
GRANT ALL ON glpi.* TO 'glpi'@'localhost' WITH GRANT OPTION;  
FLUSH PRIVILEGES;  
EXIT;
```

**Instalando GLPi**
```
cd /tmp  
wget [https://github.com/glpi-project/glpi/releases/download/9.5.0/glpi-9.5.0.tgz](https://github.com/glpi-project/glpi/releases/download/9.5.0/glpi-9.5.0.tgz "https://github.com/glpi-project/glpi/releases/download/9.5.0/glpi-9.5.0.tgz")  
tar -xvf glpi-9.5.0.tgz  
sudo mv glpi /var/www/glpi  
sudo chown -R www-data:www-data /var/www/glpi/  
sudo chmod -R 755 /var/www/glpi/
```

**Configurando Servidor WEB**
```
sudo a2dissite 000-default  
sudo nano /etc/apache2/sites-available/glpi.conf
```
Dentro do arquivo glpi.conf, insira as seguintes regras, lembrando de personalizar de acordo com a sua instalação ok?


**Início do arquivos glpi.conf**
```
<VirtualHost *:80>
	ServerAdmin admin@example.com
	DocumentRoot /var/www/glpi
	ServerName example.com
	ServerAlias www.example.com
<Directory /var/www/glpi/>
	Options +FollowSymlinks
	AllowOverride All
	Require all granted
	ErrorLog ${APACHE_LOG_DIR}/error.log
	CustomLog ${APACHE_LOG_DIR}/access.log combined
Fim do arquivos glpi.conf
```

```
sudo a2ensite glpi.conf  
sudo a2enmod rewrite  
sudo systemctl restart apache2.service
```

# Mais Informações
- https://glpi-project.org/pt-br/
- https://glpi-project.org/downloads/
- https://github.com/glpi-project/glpi
- https://itexpert.tips/pt-br/glpi-pt-br/instalando-o-glpi-no-ubuntu-linux/
- [GLPi: o que é, como instalar e abrir um chamado](https://www.profissionaisti.com.br/instalar-usar-glpi/#:~:text=GLPi%20%C3%A9%20um%20acr%C3%B4nimo%20do,de%20TI%20de%20C%C3%B3digo%20Aberto%E2%80%9D)
- https://blog.servicedeskbrasil.com.br/instalacao-do-glpi-10-em-ambiente-debian/
- https://blog.servicedeskbrasil.com.br/configuracao-segura-web-root-glpi-pasta-public/
