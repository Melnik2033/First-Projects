// Muhammet �hsan T�rksoy - 21181616054
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int secim1,secim2,secim3,secim4,secim5;   //Se�imler i�in tam say� kullanaca��m�z i�in se�imleri int ile tan�mlad�m.
	float bakiye;   // Bakiye k�s�ratl� de�erlere sahip olaca�� i�in bakiyeyi float ile tan�mlad�m.
	
	printf("************************--- ABC ELEKTRONIK ---************************\n\n"); //Alt sat�ra ge�mesi i�in \n kulland�m.
	printf("----------------------------- Hosgeldiniz ----------------------------\n\n"); //printf fonksiyonunu ��kt� i�in kulland�m.
	
	for(;;){  // for d�ng�s�n� program� s�n�rs�z d�ng�ye sokmak i�in kulland�m.
		if (secim1 == 4){  // burada if kullanarak program�n kapat�lmas� istendi�i takdirde d�ng�ye girmemesini sa�lad�m.
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
	scanf("%d",&secim1); //scanf fonksiyonunu klavyeden veri giri�i i�in kulland�m.


	switch (secim1) //switch case fonksiyonunu birden fazla durum aras�nda ge�i� yapmak i�in kulland�m.
	{
		while(secim3 == 1 || secim1 == 1){  // burada while ile program�n gerekli �artlar sa�land��� takdirde geri d�nmesini sa�lamak i�in d�ng�ye soktum.
		if (secim3 == 2){    // programda daha geriye gidilebilmesi i�in burada bu d�ng�y� sonland�rd�m. 
			break;
		}
		else{      // gerekli durumlarda ise d�ng�ye izin verdim.
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
		        		printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");    // hatal� bir veri giri�i sonucunda geri d�n�t vermesi i�in if kulland�m.
					}
		        	break;    // break ile se�ti�imiz sadece 1 durumun yazd�r�lmas�n�, di�erlerini g�rmezden gelmesini sa�lad�m. D�ng�y� orada sonland�rmas�n� sa�lad�m. 
			
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
					
				default: printf("\n\nHatali veri girisi\tLutfen tekrar deneyiniz\n\n");	   // farkl� bir de�er giri�i sonucu kullan�c�y� uyarmas� i�in default kulland�m.		
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
			
					if (secim4 == 1)	{     // if kullanarak �r�n�n se�ilmesi durumunda bakiye'i de�i�tirmesini sa�lad�m.
						bakiye += 1500;	
					}
					else if (secim4 == 2){   // else if ile birden fazla durum aras�nda ge�i� yapt�m.
						bakiye += 2750;
					}	
					else if (secim4 == 3){
						bakiye += 8832;
					}
					printf("\n\n***********************************************************************\n");
					printf("Toplam sepet tutariniz: %.2f\n\n",bakiye);   // %.2f ile tutar miktar�nda virg�lden sonra sadece 2 basama��n yazd�r�lmas�n� sa�lad�m. 
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
