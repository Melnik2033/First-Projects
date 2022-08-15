#include<stdio.h>
float en_erken_hesap (float time){ //fonkiyonlar ile ki�inin ka� dakika erken ��kt���n� hesaplad�k. 
float minute,en_erken_minute,saat; 
int hour,en_erken_hour; 
hour = time; 
minute = time - hour; 
en_erken_minute = 100*(0.60 - minute); 
en_erken_hour = 60*(16 - hour); 
saat = en_erken_hour+en_erken_minute; 
return saat;
} 

float en_gec_hesap (float time){ //fonksiyonlar ile ki�inin ka� dakika ge� kald���n� hesaplad�k. 
float hour,minute,saat; 
int hourtam,en_gec_hour; 
hour = time-9; 
hourtam = hour; 
minute = 100*(hour-hourtam); 
en_gec_hour = 60*hourtam; 
saat = en_gec_hour+minute; 
return saat; 
} 

int main () { 
FILE *hedef_dosya; 
hedef_dosya = fopen("gunluk.txt", "w+"); //dosyay� okuma ve yazma modunda a�t�k. 
int sicil,en_gec_sicil,en_erken_sicil; 
char giris_cikis; 
float saat,en_gec=09.00,en_erken=17.00;
printf("Hosgeldiniz\n"); 
for (;;) { printf("Giris icin < cikis icin > sembolunu\nsicil numaranizi ve saati giriniz (Cikmak icin sicil numarasini 0 giriniz): "); 
scanf("%s %d %f",&giris_cikis,&sicil,&saat); 
if (giris_cikis == '<' && sicil != 0) { //gerekli ko�ullar sa�land���nda gerekli i�lemleri yapt�k. 
if (saat > en_gec){ en_gec = saat; //en b�y�k de�erin bulunmas�n� sa�lad�k. 
en_gec_sicil = sicil; } 
}

else if (giris_cikis == '>' && sicil != 0){ if (saat < en_erken){ //en k���k de�erin bulunmas�n� sa�lad�k. 
en_erken =saat; 
en_erken_sicil = sicil; 
} 
} 
if (giris_cikis == '<' && sicil != 0){ fprintf(hedef_dosya,"%d %.2f <\n",sicil,saat); 
} 
else if (giris_cikis == '>' && sicil != 0){ fprintf(hedef_dosya,"%d %.2f >\n",sicil,saat); } 
if (sicil == 0) break; 
} 
if(en_gec != 9.00){ FILE *en_gec_dosya; 
en_gec_dosya = fopen("gec.txt","w+"); 
fprintf(en_gec_dosya,"%d %.0f\n",en_gec_sicil,en_gec_hesap(en_gec)); 
fclose(en_gec_dosya); 
} 
else if (en_gec == 9.00){ printf("Bugun gec gelen isci yoktur\n"); }
if(en_erken != 17.00){ FILE *en_erken_dosya; en_erken_dosya = fopen("erken.txt","w+"); 
fprintf(en_erken_dosya,"%d %.0f",en_erken_sicil,en_erken_hesap(en_erken)); 
fclose(en_erken_dosya); 
} 
else if (en_erken == 17.00){ printf("Bugun erken cikan isci yoktur"); } 
fclose(hedef_dosya); 

return 0; 
}
