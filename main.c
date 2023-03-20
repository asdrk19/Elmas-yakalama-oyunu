#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>




int main() 

{



	int konum,can=3,puan=0;
	char secenek;
	int satir,sutun;
	
	int elmasSatir1,elmasSutun1,elmasSatir2,elmasSutun2,elmasSatir3,elmasSutun3,elmasSatir4,elmasSutun4,elmasSatir5,elmasSutun5;
	int muhafizSatir1,muhafizSutun1,muhafizSatir2,muhafizSutun2,muhafizSatir3,muhafizSutun3,muhafizSatir4,muhafizSutun4,muhafizSatir5,muhafizSutun5;
	int muhafizYer;
	
	srand(time(NULL));
	
	tekrar:
	elmasSatir1=1+rand() % 10;
	elmasSutun1=1+rand() % 10;
	
				
	elmasSatir2=1+rand() % 10;
	elmasSutun2=1+rand() % 10;

	
	elmasSatir3=1+rand() % 10;
	elmasSutun3=1+rand() % 10;
	
	elmasSatir4=1+rand() % 10;
	elmasSutun4=1+rand() % 10;
	
	elmasSatir5=1+rand() % 10;
	elmasSutun5=1+rand() % 10;
	
	if((elmasSatir1 && elmasSutun1 == elmasSatir2 && elmasSutun2) || (elmasSatir1 && elmasSutun1 == elmasSatir3 && elmasSutun3) || (elmasSatir1 && elmasSutun1 == elmasSatir4 && elmasSutun4) || (elmasSatir1 && elmasSutun1 == elmasSatir5 && elmasSutun5))
	{
			
			goto tekrar; //Elmaslarýn üst üste gelmesini engeller.
		
	}
	
	else if((elmasSatir2 && elmasSutun2 == elmasSatir3 && elmasSutun3) || (elmasSatir2 && elmasSutun2 == elmasSatir4 && elmasSutun4) || (elmasSatir2 && elmasSutun2 == elmasSatir5 && elmasSutun5))
	{
			
			goto tekrar;
		
	}
	
	else if((elmasSatir3 && elmasSutun3 == elmasSatir4 && elmasSutun4) || (elmasSatir3 && elmasSutun3 == elmasSatir5 && elmasSutun5))
	{
			
			goto tekrar;
		
	}
	
	else if((elmasSatir4 && elmasSutun4 == elmasSatir5 && elmasSutun5))
	{
			
			goto tekrar;
		
	}
	tekrar2:
	muhafizYer=1+rand() % 4;
		
			if(muhafizYer==1){
			
			
			muhafizSatir1=elmasSatir1;
			muhafizSutun1=elmasSutun1 -1;
			
			muhafizSatir2=elmasSatir2;
			muhafizSutun2=elmasSutun2 -1;
			
			muhafizSatir3=elmasSatir3;
			muhafizSutun3=elmasSutun3 -1;
			
			muhafizSatir4=elmasSatir4;
			muhafizSutun4=elmasSutun4 -1;
			
			muhafizSatir5=elmasSatir5;
			muhafizSutun5=elmasSutun5 -1;
			
						 if( ( (muhafizSatir1==0 || muhafizSatir1==11) || (muhafizSutun1==0 || muhafizSutun1==11) )  || ( (muhafizSatir2==0 || muhafizSatir2==11) || (muhafizSutun2==0 || muhafizSutun2==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if ( ( (muhafizSatir3==0 || muhafizSatir3==11) || (muhafizSutun3==0 || muhafizSutun3==11) )  || ( (muhafizSatir4==0 || muhafizSatir4==11) || (muhafizSutun4==0 || muhafizSutun4==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if( (muhafizSatir5==0 || muhafizSatir5==11) || (muhafizSutun5==0 || muhafizSutun5==11 )) 
						{
							
							goto tekrar2;
							
						}
			
		}	
	
		else if(muhafizYer==2){
		
			muhafizSatir1=elmasSatir1;
			muhafizSutun1=elmasSutun1 +1;
			
			muhafizSatir2=elmasSatir2;
			muhafizSutun2=elmasSutun2 +1;
			
			muhafizSatir3=elmasSatir3;
			muhafizSutun3=elmasSutun3 +1;
			
			muhafizSatir4=elmasSatir4;
			muhafizSutun4=elmasSutun4 +1;
			
			muhafizSatir5=elmasSatir5;
			muhafizSutun5=elmasSutun5 +1;
						if( ( (muhafizSatir1==0 || muhafizSatir1==11) || (muhafizSutun1==0 || muhafizSutun1==11) )  || ( (muhafizSatir2==0 || muhafizSatir2==11) || (muhafizSutun2==0 || muhafizSutun2==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if ( ( (muhafizSatir3==0 || muhafizSatir3==11) || (muhafizSutun3==0 || muhafizSutun3==11) )  || ( (muhafizSatir4==0 || muhafizSatir4==11) || (muhafizSutun4==0 || muhafizSutun4==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if( (muhafizSatir5==0 || muhafizSatir5==11) || (muhafizSutun5==0 || muhafizSutun5==11 )) 
						{
							
							goto tekrar2;
							
						}
			
	}
		
		else if(muhafizYer==3){
			
			muhafizSatir1=elmasSatir1 -1 ;
			muhafizSutun1=elmasSutun1;
			
			muhafizSatir2=elmasSatir2 -1 ;
			muhafizSutun2=elmasSutun2;
			
			muhafizSatir3=elmasSatir3 -1 ;
			muhafizSutun3=elmasSutun3;
			
			muhafizSatir4=elmasSatir4 -1 ;
			muhafizSutun4=elmasSutun4;
			
			muhafizSatir5=elmasSatir5 -1 ;
			muhafizSutun5=elmasSutun5;
						if( ( (muhafizSatir1==0 || muhafizSatir1==11) || (muhafizSutun1==0 || muhafizSutun1==11) )  || ( (muhafizSatir2==0 || muhafizSatir2==11) || (muhafizSutun2==0 || muhafizSutun2==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if ( ( (muhafizSatir3==0 || muhafizSatir3==11) || (muhafizSutun3==0 || muhafizSutun3==11) )  || ( (muhafizSatir4==0 || muhafizSatir4==11) || (muhafizSutun4==0 || muhafizSutun4==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if( (muhafizSatir5==0 || muhafizSatir5==11) || (muhafizSutun5==0 || muhafizSutun5==11 )) 
						{
							
							goto tekrar2;
							
						}
					
	}		
	
		else if(muhafizYer==4){
			
			muhafizSatir1=elmasSatir1 +1 ;
			muhafizSutun1=elmasSutun1;
			
			muhafizSatir2=elmasSatir2 +1 ;
			muhafizSutun2=elmasSutun2;
			
			muhafizSatir3=elmasSatir3 +1 ;
			muhafizSutun3=elmasSutun3;
			
			muhafizSatir4=elmasSatir4 +1 ;
			muhafizSutun4=elmasSutun4;
			
			muhafizSatir5=elmasSatir5 +1 ;
			muhafizSutun5=elmasSutun5;
						if( ( (muhafizSatir1==0 || muhafizSatir1==11) || (muhafizSutun1==0 || muhafizSutun1==11) )  || ( (muhafizSatir2==0 || muhafizSatir2==11) || (muhafizSutun2==0 || muhafizSutun2==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if ( ( (muhafizSatir3==0 || muhafizSatir3==11) || (muhafizSutun3==0 || muhafizSutun3==11) )  || ( (muhafizSatir4==0 || muhafizSatir4==11) || (muhafizSutun4==0 || muhafizSutun4==11) ) )  
						{
							
							goto tekrar2;
							
						}
						
						else if( (muhafizSatir5==0 || muhafizSatir5==11) || (muhafizSutun5==0 || muhafizSutun5==11 )) 
						{
							
							goto tekrar2;
							
						}
	}
		

	
	char *tahta[12][12];
	int oyuncuSatir=1,oyuncuSutun=2;
	
	
	while(1){
	
		for(satir=0;satir<12;satir++){
		
			for(sutun=0;sutun<12;sutun++){
			
			if(satir == 0 || satir == 11){
			
				
				tahta[satir][sutun]="-----";
				
			}
			
			else if(sutun == 0 || sutun == 11){
			
				
				tahta[satir][sutun]="|";
			}
			else
			
				
				tahta[satir][sutun]=".....";
				
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";


				if(tahta[oyuncuSatir][oyuncuSutun] == tahta[elmasSatir1][elmasSutun1])
			{
				
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";
				tahta[elmasSatir1][elmasSutun1]="$$$$$";
				
				/*
				tahta[elmasSatir2][elmasSutun2]="*****";
				tahta[elmasSatir3][elmasSutun3]="*****";
				tahta[elmasSatir4][elmasSutun4]="*****";
				tahta[elmasSatir5][elmasSutun5]="*****";
				tahta[muhafizSatir1][muhafizSutun1]="<<.>>";
				tahta[muhafizSatir2][muhafizSutun2]="<<.>>";
				tahta[muhafizSatir3][muhafizSutun3]="<<.>>";
				tahta[muhafizSatir4][muhafizSutun4]="<<.>>";
				tahta[muhafizSatir5][muhafizSutun5]="<<.>>";*/
				
				printf("%s",tahta[satir][sutun]);
				
				puan=+1;
				//PlaySound("hareket.wav", NULL, SND_ASYNC);	 Hata veriyor!!
						
			}
				
				
				
				else if(tahta[oyuncuSatir][oyuncuSutun] == tahta[elmasSatir2][elmasSutun2]){
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";
				tahta[elmasSatir2][elmasSutun2]="$$$$$";
				 
				printf("%s",tahta[satir][sutun]);
					

				puan=+1;
					
					
				}
				
				else if(tahta[oyuncuSatir][oyuncuSutun] == tahta[elmasSatir3][elmasSutun3]){
				
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";
				tahta[elmasSatir3][elmasSutun3]="$$$$$";
				 
				printf("%s",tahta[satir][sutun]);
			
				puan=+1;
					
				}
				
				else if(tahta[oyuncuSatir][oyuncuSutun] == tahta[elmasSatir4][elmasSutun4]){
					
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";
				tahta[elmasSatir4][elmasSutun4]="$$$$$";
				 
				printf("%s",tahta[satir][sutun]);
				
				puan=+1;
				}
				
				else if(tahta[oyuncuSatir][oyuncuSutun] == tahta[elmasSatir5][elmasSutun5]){
					
				
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";
				tahta[elmasSatir5][elmasSutun5]="$$$$$";
				printf("%s",tahta[satir][sutun]);
				
				puan=+1;
					
				}
				
						
				else {
				
				tahta[oyuncuSatir][oyuncuSutun]="XXXXX";
			/*	tahta[elmasSatir1][elmasSutun1]="***y**";
				tahta[elmasSatir2][elmasSutun2]="*****";
				tahta[elmasSatir3][elmasSutun3]="***x**";
				tahta[elmasSatir4][elmasSutun4]="*****";
				tahta[elmasSatir5][elmasSutun5]="*****";
				tahta[muhafizSatir1][muhafizSutun1]="<<.>>";
				tahta[muhafizSatir2][muhafizSutun2]="<<.>>";
				tahta[muhafizSatir3][muhafizSutun3]="<<.>>";
				tahta[muhafizSatir4][muhafizSutun4]="<<.>>";
				tahta[muhafizSatir5][muhafizSutun5]="<<.>>";*/
				printf("%s",tahta[satir][sutun]);
				}
					
		
		}
		printf("\n\n\n");
		
	

	}
	
				if( oyuncuSatir==muhafizSatir1 && oyuncuSutun==muhafizSutun1)
					if(can>0){
					
						printf("\a"); //Bu özel tanýmlý fonksiyonla windows bildirim sesi çýkarýlýr.
						can--;
						
						goto tekrar;
						
					}
					
					else{
						
						goto son;
						
						
					}
					
				
				
						
					else if( oyuncuSatir==muhafizSatir2 && oyuncuSutun==muhafizSutun2)
					if(can>0){
					
						printf("\a"); //Bu özel tanýmlý fonksiyonla windows bildirim sesi çýkarýlýr.
						can--;
						goto tekrar;
						
					}
					
					else{
						
						goto son;
						
						
					}
					
		
		
					else if( oyuncuSatir==muhafizSatir3 && oyuncuSutun==muhafizSutun3)
					if(can>0){
					
						printf("\a"); //Bu özel tanýmlý fonksiyonla windows bildirim sesi çýkarýlýr.
						can--;
						goto tekrar;
						
					}
					
					else{
						
						goto son;
						
						
					}
					
					


					else if( oyuncuSatir==muhafizSatir4 && oyuncuSutun==muhafizSutun4)
					if(can>0){
					
						printf("\a"); //Bu özel tanýmlý fonksiyonla windows bildirim sesi çýkarýlýr.
						can--;
						goto tekrar;
						
					}
					
					else{
						
						goto son;
						
						
					}
					
					
					
					else if( oyuncuSatir==muhafizSatir5 && oyuncuSutun==muhafizSutun5)
					if(can>0){
					
						printf("\a"); //Bu özel tanýmlý fonksiyonla windows bildirim sesi çýkarýlýr.
						
						can--;
						goto tekrar;
						
					}
					
					else{
						
						goto son;
						
						
					}
				
				
		printf("\nOyunu W-A-S-D tuslari ile oynayiniz.\n");
		printf("\nYakaladiginiz elmas sayisi:%d", puan);
		printf("\nKalan can sayiniz:%d", can);
		printf("\nBirinci elmasla aranizda:%d",abs(oyuncuSutun-oyuncuSatir) - abs(elmasSutun1-elmasSatir1)); //Buralarý da abs içine alýrsam kod ekrana basarken birden fazla 0 veriyor.
		printf("\nIkinci elmasla aranizda:%d",abs(oyuncuSutun-oyuncuSatir) - abs(elmasSutun2-elmasSatir2));
		printf("\nUcuncu elmasla aranizda:%d",abs(oyuncuSutun-oyuncuSatir) - abs(elmasSutun3-elmasSatir3));
		printf("\nDorduncu elmasla aranizda:%d",abs(oyuncuSutun-oyuncuSatir) - abs(elmasSutun4-elmasSatir4));
		printf("\nBesinci elmasla aranizda:%d\n\n\n\n\n",abs(oyuncuSutun-oyuncuSatir) - abs(elmasSutun5-elmasSatir5));


	
		secenek=getch();
		
			switch(secenek){
				
				case 'w':
					oyuncuSatir-=1;
					
					break;
				
				case 's':
					oyuncuSatir+=1;
					
					break;
				
				case 'a':
					oyuncuSutun-=1;
					break;
					
				case 'd':
					oyuncuSutun+=1;
				break;		
				
				
			}
			
}
	son:
		
		printf("\n\n\n----------<<<<<<<<<<   OYUN BITTI   >>>>>>>>>>----------");
		printf("\n\n\nYakaladiginiz elmas sayisi: %d",puan);
		
		
		return 0;
}













	
	
	
	

	
	
	
