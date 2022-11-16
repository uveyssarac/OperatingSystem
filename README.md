# **My Bash**

## **- Proje Konusu**
####  Projede kendmize ait bir linux shell programı yazılmıştır.
####  Proje kapsamında kendmize özgü topla , çıkar ve tekrar komutları C dilinde yazılmıştır. 
####  Bu komutların dışında halihazırda var olan exit, clear, ls ve cat “myshell” imize eklenmiş ve bunlarda kullanılabilmektedir. 
####  Ayrıca oluşturulan bash komutu kullanıldığında terminaldeki “bash ” yerine kendi myshell kabuğumuz çalışmaktadır.
####  Bu dosyalar “makefile” dosyasında derlenmiştir. 
####  “./myshell” dosyasını terminalde çalıştırdığımızda while’ın içine girip bizden “myshell>>” yazısıyla komut girilmesini beklemektedir. 
#### Ve kendimize ait komutlar ile o komutlara ait işlemleri gerçekleştirmektedir.

## **- Proje Süresince Yapılanlar**
#### 1. Adım - Önecelikle Dev C++ programı üzerinde gelen komutları “|” göre ayıran ve dizide tutan algoritma yazıldı. Ayrılam komutlar üzerinden tekrardan “ ”(boşluğa) göre ayıran ve geçici dizide tutan algoritma yazıldı.
#### 2. Adım - Kelime sayısına göre “if” lerin içine girmesi sağlandı.
#### 3. Adım - Eğer istediğimiz kelime sayısında ve istediğmiz kelime değilse “Hatalı Komut ” yazdırıldı.
#### 4. Adım- Bu dosya sonrasında Virtual Box’a aktarıldı.
#### 5. Adım - Virtual Box’ta myshell.c dosyası son haline getirildi.
#### 6- Adım – 2. Adımdaki “if” lerin içine girince neler olacağı belirlendi. Bunlar için gerekli tekrar.c, islem.c, cikar.c ve topla.c dosyaları oluşturuldu ve kodlaması yapıldı.
#### 7. Adım – Bu dosyaları çalıştırmak için gerekli fork() ve exec() fonksiyonları kullanarak geliştrildi.
#### 8. Adım – Son olarak küçük bazı hatalar giderildi ve tasarımlar yapıldı.
#### 9. Adım – Makefile dosyası oluşturuldu.

## Kullanılan fonksiyonlar ve Kütüphaneler
#### #include<stdio.h>
#### #include<stdlib.h>
#### #include<string.h>
#### fgets(), strcmp(), strcpy(), strok(), fork(), execve(), wait()


![alt text](https://github.com/uveyssarac/OperatingSystem-MyBash/blob/main/Proje/ss1.PNG)

![alt text](https://github.com/uveyssarac/OperatingSystem-MyBash/blob/main/Proje/ss2.PNG)

![alt text](https://github.com/uveyssarac/OperatingSystem-MyBash/blob/main/Proje/ss3.PNG)
