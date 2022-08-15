#include<stdio.h>

int main(){
	
	int nabiz,tasikardiSayisi = 0,endusuk = 999;   //girilen en dusuk nabýzýn sorunsuz hesaplanmasý için 999 dan baþlattým
	char yas;

	printf("Nabiz degerlendirme programina hosgeldiniz\n(Sonlandirmak icin kategoriye b:bitir nabiz degerini 0 giriniz)");
	printf("\n--------------------------------------------------------------\n");
	while (1) {  //Sonsuz döngüye soktum
		printf("Yas grubu (y:yetiskin, c:cocuk) ve nabiz degeri: ");
		scanf("%s %d",&yas,&nabiz);   //sýrasý ile girilen deðerleri aldým
		
		switch (yas){   // girilen yaþ türüne göre durumlar arasýnda geçiþ yaptým
			
			case 'y':
				if(nabiz > 60 && nabiz < 100)    //farklý aksiyonlar arasýnda geçiþler için if, else if ve else kullandým
				printf("  Nabiz normal\n");
				else if (nabiz >= 100){
				printf("  Nabiz yuksek (Tasikardi)\n");
				tasikardiSayisi ++;        //girilen tasikardi sayisi için sayaç ekledim
			}
				else if (nabiz <= 60 && nabiz > 0)
				printf("  Nabiz dusuk (Bradikardi)\n");
				break;    // break ile switch case in diðer caselere geçmesini önledim
				
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
			break;   //break ile döngüyü sonlandýrdým
			
			default:
			printf("  Yanlis kategori veya nabiz degeri\n");	
		}
		if (nabiz < 0)
		printf("  Yanlis kategori veya nabiz degeri\n");
		if (yas == 'b')
		break;
		if (nabiz == 0)       //kategoride b veya 0 girildiðinde döngünün bitmesini saðladým
		break;
	}
	printf("---------------------------------------------\nProgram sona erdi\nCocuklarda en dusuk nabiz degeri: %d\nYetiskinlerde tasikardi sayisi: %d",endusuk,tasikardiSayisi);   // program bittiðinde gerekli bilgileri vermesini saðladým
	return 0;
}

