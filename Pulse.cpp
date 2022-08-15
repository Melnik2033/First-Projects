#include<stdio.h>

int main(){
	
	int nabiz,tasikardiSayisi = 0,endusuk = 999;   //girilen en dusuk nab�z�n sorunsuz hesaplanmas� i�in 999 dan ba�latt�m
	char yas;

	printf("Nabiz degerlendirme programina hosgeldiniz\n(Sonlandirmak icin kategoriye b:bitir nabiz degerini 0 giriniz)");
	printf("\n--------------------------------------------------------------\n");
	while (1) {  //Sonsuz d�ng�ye soktum
		printf("Yas grubu (y:yetiskin, c:cocuk) ve nabiz degeri: ");
		scanf("%s %d",&yas,&nabiz);   //s�ras� ile girilen de�erleri ald�m
		
		switch (yas){   // girilen ya� t�r�ne g�re durumlar aras�nda ge�i� yapt�m
			
			case 'y':
				if(nabiz > 60 && nabiz < 100)    //farkl� aksiyonlar aras�nda ge�i�ler i�in if, else if ve else kulland�m
				printf("  Nabiz normal\n");
				else if (nabiz >= 100){
				printf("  Nabiz yuksek (Tasikardi)\n");
				tasikardiSayisi ++;        //girilen tasikardi sayisi i�in saya� ekledim
			}
				else if (nabiz <= 60 && nabiz > 0)
				printf("  Nabiz dusuk (Bradikardi)\n");
				break;    // break ile switch case in di�er caselere ge�mesini �nledim
				
			case 'c':
				if (endusuk > nabiz && nabiz > 0)
				endusuk = nabiz;
				
				if (nabiz > 80 && nabiz < 100)
				printf("  Nabiz normal\n");
				else if (nabiz >= 100)
				printf("  Nabiz yuksek (Tasikardi)\n");
				else if (nabiz <= 80 && nabiz > 0)
				printf("  Nabiz dusuk (Bradikardi)\n");	
				break;
				
			case 'b':
			break;   //break ile d�ng�y� sonland�rd�m
			
			default:
			printf("  Yanlis kategori veya nabiz degeri\n");	
		}
		if (nabiz < 0)
		printf("  Yanlis kategori veya nabiz degeri\n");
		if (yas == 'b')
		break;
		if (nabiz == 0)       //kategoride b veya 0 girildi�inde d�ng�n�n bitmesini sa�lad�m
		break;
	}
	printf("---------------------------------------------\nProgram sona erdi\nCocuklarda en dusuk nabiz degeri: %d\nYetiskinlerde tasikardi sayisi: %d",endusuk,tasikardiSayisi);   // program bitti�inde gerekli bilgileri vermesini sa�lad�m
	return 0;
}

