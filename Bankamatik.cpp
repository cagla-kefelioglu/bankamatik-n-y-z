#include<stdio.h>
#include<string.h>
int main(){
	char isim[6]="cagla";
	int sifre=1234;
	char istenecekisim[10];
	int isteneceksifre;
	int deneme=3,a=0,bakiye=100,alinacak_bakiye,yatirilacak_bakiye,secim;
	printf("Bankamatige hosgeldiniz:)\n");
	do{
		deneme--;
		printf("Lutfen isminizi giriniz= ");
		scanf("%s",&istenecekisim);
		printf("Lutfen sifrenizi girniz= ");
		scanf("%d",&isteneceksifre);
		if(strcmp(isim,istenecekisim)==0 && sifre==isteneceksifre ){
			printf("Kullanici bilgileri dogru :)\n");
			a=1;
			break;
		}
		printf("Kullanici bilgilri yanlis.\n ");
	}
	while(deneme>=0);
	if(a==1){
		printf("asagidaki islemlerden birini seciniz\n[1]-Bakiye bilgileri\n[2]-Para yatirma\n[3]-Para cekme");
		printf("Lutfen secim yapiniz= ");
		scanf("%d",&secim);
		switch(secim){
			case 1:
			printf("Hesabinizda bulunan toplam bakiye = %d TL'dir.'",bakiye);
			break;
			case 2:
			{
				printf("Yatiracaginiz para miktarini giriniz= ");
				scanf("%d",&yatirilacak_bakiye);
				printf("Yatirilan bakiye=%d TL\nHesabinizdaki toplam bakiye=%d TL",yatirilacak_bakiye,bakiye+yatirilacak_bakiye);
			}
			break;
			case 3:
			{
				printf("Cekeceginiz para miktarini giriniz= ");
				scanf("%d",&alinacak_bakiye);
				if(alinacak_bakiye<=bakiye){
					printf("Cekilen bakiye=%d TL\nHesaptaki toplam bakiye=%d TL",alinacak_bakiye,bakiye-alinacak_bakiye);
				}
				else
				printf("Hesabinizda bu kadar bakiye bulunmamaktadir");
			}
			break;
			default:
				printf("Yanlis secim yaptiniz");
		}
	}
	else
	printf("Deneme kakkiniz dolmustur!!");
} 

