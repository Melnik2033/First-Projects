#include<stdio.h>
#include<string.h>

int main () {
	
	char name[10],isim[10],en_yakin_isim[10];
	int i=0,j=0,ortalama=0,esas_bulucu,esas;
	float benzerlik_orani,esasf,uzunlukf;
	
	FILE *dosya;
	
	if ((dosya = fopen("words.txt","r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	
	printf("Search: ");
	scanf("%s",isim);
	
	fscanf(dosya,"%s",name);
	
	while (!feof(dosya)){
		
		while (name[i] != '\0'){

		if (name[i] == isim[i]){
			ortalama++;
			i++;
			if (ortalama > j){
				j = ortalama;
				esas_bulucu = ortalama;
				if (esas_bulucu > esas){
					esas = esas_bulucu;
					esasf=esas;
					en_yakin_isim[0] = name[0];
					en_yakin_isim[1] = name[1];
					en_yakin_isim[2] = name[2];
					en_yakin_isim[3] = name[3];
					en_yakin_isim[4] = name[4];
					en_yakin_isim[5] = name[5];
					en_yakin_isim[6] = name[6];
					en_yakin_isim[7] = name[7];
					en_yakin_isim[8] = name[8];
					en_yakin_isim[9] = name[9];
					en_yakin_isim[10] = name[10];
				}	
			}
		}
		else {
			i++;
		}
	}
		i = 0;
		ortalama = 0;
		j = 0;
		fscanf(dosya,"%s",name);
		
	}
	uzunlukf = strlen(en_yakin_isim);
	benzerlik_orani = esasf / uzunlukf;
	if(benzerlik_orani != 0){
	printf("Did you mean? %s",en_yakin_isim);
	printf("(%.2f)",benzerlik_orani);
}
	else {
		printf("No matching");
	}
	fclose (dosya);	
	
	return 0;
}
