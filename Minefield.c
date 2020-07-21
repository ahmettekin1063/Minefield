#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
int svy;
int s;
char eh,p;
int z,g;
int sayac1,sayac2,sayac3=0;
basla:	

sayac1=0;
sayac2=0;
sayac3=0;

	printf("kolay---->1\n");
	printf("orta ---->2\n");
	printf("zor  ---->3\n");
	printf("zorluk seviyesini seciniz: ");
	scanf("%d",&svy);
    printf("\n");
    
	if(svy==1) s=10;
	if(svy==2) s=25;
    if(svy==3) s=40;

int i,rastgele1,rastgele2;
int a,b,c,d;
int sayac=0;

int k[10][10]={0};

srand(time(NULL));

do{


 sayac=0;

rastgele1=rand()%10;
rastgele2=rand()%10;

/*printf("%d ; ",rastgele1+1);
printf("%d",rastgele2+1);*/

k[rastgele1][rastgele2]=1;

//printf("\n");//



for(a=0;a<10;a++)
{
  for(b=0;b<10;b++)
  {
  	
  	sayac=sayac+k[a][b];
  	
  }

}

}

while(sayac<s);


for(c=0;c<10;c++)
{
  for(d=0;d<10;d++)
  {
  	printf("%d   ",k[c][d]);
  }
	printf("\n");	
}
oyun:	
printf("\nsatir numarasini giriniz:");
scanf(" %d",&z);
harf:
printf("\nsutun harfi giriniz:");
scanf(" %s",&p);

switch(p)
{
case 'a':g=1; break;
case 'b':g=2; break;
case 'c':g=3; break;
case 'd':g=4; break;
case 'e':g=5; break;
case 'f':g=6; break;
case 'g':g=7; break;
case 'h':g=8; break;
case 'i':g=9; break;
case 'j':g=10; break;

}


if(isdigit(p)){
	printf("Girdiginiz deger harf degildir harf giriniz:");
	goto harf;
}
if(k[z-1][g-1]==0 && svy==1)
{   
    
	printf("mayin yok devam edin\n");
	
	sayac1++;
	goto oyun;
}
else if(k[z-1][g-1]==1 && svy==1)
{
	printf("\nmayin patladi oyunu kaybettiniz\n\n");
	goto karar;
}
if(k[z-1][g-1]==0 && svy==2)
{    
   
	printf("mayin yok devam edin\n");
	
	sayac2++;
	goto oyun;
}
else if(k[z-1][g-1]==1 && svy==2)
{
	printf("\nmayin patladi oyunu kaybettiniz\n");
	goto karar;
}
if(k[z-1][g-1]==0 && svy==3)
{
    
	printf("mayin yok devam edin\n");
	
	sayac3++;
	goto oyun;
}
else if(k[z-1][g-1]==1 && svy==3)
{
	printf("\nmayin patladi oyunu kaybettiniz\n");
	goto karar;
}

if(svy==1 && sayac1==90)
{
printf("tebrikler oyunu kazandiniz\n");	
goto karar;
}
if(svy==2 && sayac2==75)
{
printf("tebrikler oyunu kazandiniz\n");	
goto karar;
}
if(svy==3 && sayac3==60)
{
printf("tebrikler oyunu kazandiniz\n");	
goto karar;
}

karar:
	printf("\ntekrar oynamak ister misiniz?\n");
	printf("evet------>e\n");
	printf("hayir----->h\n");
	scanf("%s",&eh);
	if(eh == 'e'){
		system("CLS");
	goto basla;	
	
	}
	if(eh == 'h')
	{
	system("CLS");
	printf("oyun sonlandirildi");
	
    goto bitis;
	}

bitis:
return 0;

}
