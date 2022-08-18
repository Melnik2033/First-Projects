// Muhammet Ýhsan Türksoy - 21181616054
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int secim1,secim2,secim3,secim4,secim5;   //Seçimler için tam sayý kullanacaðýmýz için seçimleri int ile tanýmladým.
	float bakiye;   // Bakiye küsüratlý deðerlere sahip olacaðý için bakiyeyi float ile tanýmladým.
	
	printf("************************--- ABC ELEKTRONIK ---************************\n\n"); //Alt satýra geçmesi için \n kullandým.
	printf("----------------------------- Hosgeldiniz ----------------------------\n\n"); //printf fonksiyonunu çýktý için kullandým.
	
	for(;;){  // for döngüsünü programý sýnýrsýz döngüye sokmak için kullandým.
		if (secim1 == 4){  // burada if kullanarak programýn kapatýlmasý istendiði takdirde döngüye girmemesini saðladým.
			break;
		}
		else if (secim1 != 1 && secim1 != 2 && secim1 != 3){
			break;
		}
	
	printf("\n\n***********************************************************************\n");
	printf("1- Urun ve fiyat sorgula\n");
	printf("2- Sepete urun ekle\n");
	printf("3- Siparis tamamla\n");
	printf("4- Sonlandir\n");
	printf("***********************************************************************\n");
	printf("Seciminiz: ");
	scanf("%d",&secim1); //scanf fonksiyonunu klavyeden veri giriþi için kullandým.


	switch (secim1) //switch case fonksiyonunu birden fazla durum arasýnda geçiþ yapmak için kullandým.
	{
		while(secim3 == 1 || secim1 == 1){  // burada while ile programýn gerekli þartlar saðlandýðý takdirde geri dönmesini saðlamak için döngüye soktum.
		if (secim3 == 2){    // programda daha geriye gidilebilmesi için burada bu döngüyü sonlandýrdým. 
			break;
		}
		else{      // gerekli durumlarda ise döngüye izin verdim.
		case 1:
		    printf("\n\n***********************************************************************\n");
	      	printf("Hangi kategoriden urun sorgulamak istiyorsunuz?\n");
	    	printf("1- Akilli telefon\n");
	       	printf("2- Akilli saat\n");
	     	printf("3- Yazici\n");
	     	printf("4- Bilgisayar\n");
	       	printf("***********************************************************************\n");
	    	printf("Seciminiz: ");
	      	scanf("%d",&secim2);
	}		
		switch (secim2)
		{
		    	case 1: 
		           	printf("\n\n***********************************************************************\n");
		        	printf("Akilli telefon-1  1500 TL\n");
		           	printf("Akilli telefon-2  2750 TL\n");
		          	printf("Akilli telefon-3  8832 TL\n");
		          	printf("***********************************************************************\n");
		        	printf("1- Baska kategori urunlerini sorgula\n");
		        	printf("2- Ana menuye don\n");
		        	printf("***********************************************************************\n");
		         	printf("Seciminiz: ");
		        	scanf("%d",&secim3);
		        	
		        	if (secim3 != 1 && secim3 != 2){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");    // hatalý bir veri giriþi sonucunda geri dönüt vermesi için if kullandým.
					}
		        	break;    // break ile seçtiðimiz sadece 1 durumun yazdýrýlmasýný, diðerlerini görmezden gelmesini saðladým. Döngüyü orada sonlandýrmasýný saðladým. 
			
		    	case 2:
		        	printf("\n\n***********************************************************************\n");
		          	printf("Akilli saat-1  543,99 TL\n");
		         	printf("Akilli saat-2  1324,50 TL\n");
		        	printf("Akilli saat-3  850 TL\n");
		          	printf("***********************************************************************\n");
		          	printf("1- Baska kategori urunlerini sorgula\n");
		           	printf("2- Ana menuye don\n");
		           	printf("***********************************************************************\n");
		           	printf("Seciminiz: ");
			        scanf("%d",&secim3);
			        
			        if (secim3 != 1 && secim3 != 2){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
		        	break;
			
		    	case 3:
		        	printf("\n\n***********************************************************************\n");
		        	printf("Yazici A  553,50 TL\n");
		        	printf("Yazici B  848,20 TL\n");
		        	printf("Yazici C  1433,33 TL\n");
		        	printf("***********************************************************************\n");
		        	printf("1- Baska kategori urunlerini sorgula\n");
		        	printf("2- Ana menuye don\n");
		        	printf("***********************************************************************\n");
		        	printf("Seciminiz: ");
		        	scanf("%d",&secim3);
		        	
		            if (secim3 != 1 && secim3 != 2){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
		         	break;
			
		    	case 4: 
		        	printf("\n\n***********************************************************************\n");
			        printf("Bilgisayar X  14600 TL\n");
			        printf("Bilgisayar Y  12964 TL\n");
		     	    printf("Bilgisayar Z  22920 TL\n");
		         	printf("Bilgisayar Q  36123 TL\n");
		        	printf("***********************************************************************\n");
		        	printf("1- Baska kategori urunlerini sorgula\n");
		        	printf("2- Ana menuye don\n");
		        	printf("***********************************************************************\n");
		        	printf("Seciminiz: ");
		        	scanf("%d",&secim3);
		        	
		        	if (secim3 != 1 && secim3 != 2){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
		        	break;	
					
				default: printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");	   // farklý bir deðer giriþi sonucu kullanýcýyý uyarmasý için default kullandým.		
		}	
			}
			
		while(secim1 == 2 || secim5 == 1){
		    if (secim5 == 2){
		       	break; 
		    }
		        else{
    	case 2:
		     
			printf("\n\n***********************************************************************\n");
			printf("Hangi kategoriden urun eklemek istiyorsunuz?\n");
			printf("1- Akilli telefon\n");
			printf("2- Akilli saat\n");
			printf("3- Yazici\n");
			printf("4- Bilgisayar\n");
			printf("***********************************************************************\n");
			printf("Seciminiz: ");
			scanf("%d",&secim2);
}
			switch (secim2)
			{
				
				case 1:	
					printf("\n\n***********************************************************************\n");
					printf("Akilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
					printf("1- Akilli telefon-1  1500 TL\n");
					printf("2- Akilli telefon-2  2750 TL\n");
					printf("3- Akilli telefon-3  8832 TL\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim4);
					
					if (secim4 != 1 && secim4 != 2 && secim4 != 3){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
			
					if (secim4 == 1)	{     // if kullanarak ürünün seçilmesi durumunda bakiye'i deðiþtirmesini saðladým.
						bakiye += 1500;	
					}
					else if (secim4 == 2){   // else if ile birden fazla durum arasýnda geçiþ yaptým.
						bakiye += 2750;
					}	
					else if (secim4 == 3){
						bakiye += 8832;
					}
					printf("\n\n***********************************************************************\n");
					printf("Toplam sepet tutariniz: %.2f\n\n",bakiye);   // %.2f ile tutar miktarýnda virgülden sonra sadece 2 basamaðýn yazdýrýlmasýný saðladým. 
					printf("***********************************************************************\n");
					printf("1- Sepete urun ekle\n");
					printf("2- Ana menuye don\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim5);
					
					if (secim5 != 1 && secim5 != 2){
						printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
					break;
					
				case 2:
			    	printf("\n\n***********************************************************************\n");
					printf("Akilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
					printf("1- Akilli saat-1  543.99 TL\n");
					printf("2- Akilli saat-2  1324.50 TL\n");
					printf("3- Akilli saat-3  850 TL\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim4);
					
					if (secim4 != 1 && secim4 != 2 && secim4 != 3){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
			
					if (secim4 == 1)	{
						bakiye += 543.99;	
					}
					else if (secim4 == 2){
						bakiye += 1324.50;
					}	
					else if (secim4 == 3){
						bakiye += 850;
					}
					printf("\n\n***********************************************************************\n");
					printf("Toplam sepet tutariniz: %.2f\n\n",bakiye);
					printf("***********************************************************************\n");
					printf("1- Sepete urun ekle\n");
					printf("2- Ana menuye don\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim5);
					
					if (secim5 != 1 && secim5 != 2){
						printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
					break;	
					
				case 3: 
				    printf("\n\n***********************************************************************\n");
					printf("1- Yazici A  553.50 TL\n");
					printf("2- Yazici B  848.20 TL\n");
					printf("3- Yazici C  1433.33 TL\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim4);
					
					if (secim4 != 1 && secim4 != 2 && secim4 != 3){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
					
					if (secim4 == 1){
						bakiye += 553.50;
					}	
					else if (secim4 == 2){
						bakiye += 848.20;
					}
					else if (secim4 == 3){
						bakiye += 1433.33;
					}
					printf("\n\n***********************************************************************\n");
					printf("Toplam sepet tutariniz: %.2f\n\n",bakiye);
					printf("***********************************************************************\n");
					printf("1- Sepete urun ekle\n");
					printf("2- Ana menuye don\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim5);
					
					if (secim5 != 1 && secim5 != 2){
						printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
					break;
					
				case 4: 
			     	printf("\n\n***********************************************************************\n");
		    		printf("1- Bilgisayar X  14600 TL\n");
		    		printf("2- Bilgisayar Y  12964 TL\n");
		    		printf("3- Bilgisayar Z  22920 TL\n");
		    		printf("4- Bilgisayar Q  36123 TL\n");
		    		printf("***********************************************************************\n");
			    	printf("Seciminiz: ");
			    	scanf("%d",&secim4);
			    	
			    	if (secim4 != 1 && secim4 != 2 && secim4 != 3 && secim4 != 4){
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
			     	
			    	if (secim4 == 1){
				    	bakiye += 14600;
				    }
			    	else if (secim4 == 2){
					bakiye += 12964;
			    	}
			    	else if (secim4 == 3){
			    		bakiye += 22920;
			    	}
			    	else if (secim4 == 4){
			    		bakiye += 36123;
			    	}
			     	printf("\n\n***********************************************************************\n");
					printf("Toplam sepet tutariniz: %.2f\n\n",bakiye);
					printf("***********************************************************************\n");
					printf("1- Sepete urun ekle\n");
					printf("2- Ana menuye don\n");
					printf("***********************************************************************\n");
					printf("Seciminiz: ");
					scanf("%d",&secim5);
					
					if (secim5 != 1 && secim5 != 2){
						printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");
					}
					break;
					
				default: printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");		
		break;			
		}			
				
	}
        while (secim1 == 3){
        	if(secim3 == 2 || secim5 == 2){
        		break;
			}
		else {
	    case 3: 
        	printf("\n\n***********************************************************************\n");
        	printf("Toplam sepet tutariniz: %.2f\n",bakiye);
        	printf("***********************************************************************\n");
        	break;
        }	
    }
	break;
    	case 4: 
        	printf("\n\n***********************************************************************\n");
        	printf("Iyi gunler dileriz :)\n");
          	printf("Program sonlandiriliyor...\n");
        	printf("***********************************************************************");
        	break;
        	
        default: printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");	

		}	
}	
	return 0;
}
