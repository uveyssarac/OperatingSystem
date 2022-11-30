# **My Bash**
## **- Proje**
#### Shell komut satırı “myshell>>” olarak görülmektedir.
#### “exit” komutu girilene kadar çıkış olamaz. Her seferinde “myshell>>” olarak yeni komut satırına izin verir.
#### Eğer shellde olmayan bir komut, hatalı bir komut girilmişse(parametre hatası) ya da çağırılan programlarda bir hata olduğunda “yanlis bir komut girdiniz” der ve myshell tekrar komut alabilir hale gelir.

#### “tekrar” olarak bir adet program yazılmış bu myshellden bir adet string ve bir adet pozitif rakam parametresi alır. Verilen rakam kadar verilen string'i tekrar eder.  
      myshell>> tekrar fatih 3
      fatih
      fatih 
      fatih
#### “islem” “topla” ve “cikar” olarak üç adet program yazılmıştır. Bu programlardan “islem” diğer iki programı çağırır. “islem” myshell’den 3 parametre alarak çalışır ve çıktıları myshell yazarr. “islem” programı gelen parametreye göre process “topla” veya “cikar” programlarını yükler.
      myshell>> islem cikar 4 2
      4 - 2 = 2
#### Komutlar arasına “ | ” işareti kullanılarak komutlar sırayla işlenir.
      myshell>> tekrar sultan 2 | islem topla 4 5”
#### “clear” ekran temizler. 
#### “ls” klasör içesindeki dosyaları gösterir.



## **- Proje Konusu**
####  Projede kendimize ait bir linux shell programı yazılmıştır.
####  Proje kapsamında kendimize özgü topla , çıkar ve tekrar komutları C dilinde yazılmıştır. 
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
