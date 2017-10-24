#include<stdio.h>
#include<stdlib.h>

int main ()


{
	
   printf ("\t=============================================================\n");
   printf ("\t=================== LEGAL RENT A CAR ========================\n");
   printf ("\t=============================================================\n\n");	

  
  int carro, carro1, carro2;
   
      
printf("\t\t\tDigite a Opcao Desejada:\n\n");
printf("\t\t 1 - CARROS POPULAR  |");
printf("|  2 - CARROS DE LUXO\n\n");
scanf("%d", &carro);



   if (carro1==1)

printf ("\n\tCARROS POPULARES :\n\n");
printf("\t1-Palio\n\n");
printf("\t2-Gol\n\n");
printf("\t3-Fox\n\n");
printf("\t4-Ford KA\n\n");
printf("\t5-Onix\n\n");
printf("\t6-Celta\n\n");
printf("\t7-Etios\n\n");
printf("\t8-March\n\n");
printf("\t9-Uno\n\n");
printf("\t10-Voyage\n\n");
printf("\tDigite o numero do carro escolhido: ");
scanf("%d",&carro1);

switch (carro1) 

{

case 1:system ("cls");
printf ("\tPalio\n\n");
printf("\tAno: 2005/2006\n\n");
printf("\tPlaca: ABC1102\n\n");
printf("\tCor: Preto\n\n");
printf("\tValor da Diaria: 100,00\n\n");
int calculo, qtdDias;

printf("\tPretende ficar quanto tempo com o carro ?");
scanf("%d",&qtdDias);
calculo = (100*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;
	
	 
case 2:system ("cls"); 
printf("\tGol\n\n");
printf("\tAno: 2004/2005\n\n");
printf("\tPlaca: DFC5268\n\n");
printf("\tCor: Vermelho\n\n");
printf("\tValor da Diaria: 120,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(120*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;

    
case 3:system ("cls");
printf("\tFox\n\n");
printf("\tAno: 2010/2010\n\n");
printf("\tPlaca: SET2636\n\n");
printf("\tCor: Prata\n\n");
printf("\tValor da Diaria: 150,00\n\n");
printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(150*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 4:system ("cls"); 
printf("\tFord KA\n\n");
printf("\tAno: 2003/2004\n\n");
printf("\tPlaca: ATR5332\n\n");
printf("\tCor: Verde\n\n");
printf("\tValor da Diaria: 95,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(95*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 5:system ("cls");
printf("\tOnix\n\n");
printf("\tAno: 2011/2012\n\n");
printf("\tPlaca: DFk7692\n\n");
printf("\tCor: Branco\n\n");
printf("\tValor da Diaria: 200,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(200*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 6:system ("cls");
printf("\tCelta\n\n");
printf("\tAno: 2007/2008\n\n");
printf("\tPlaca: UGH6849\n\n");
printf("\tCor: Azul\n\n");
printf("\tValor da Diaria: 110,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(110*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 7:system ("cls"); 
printf("\tEtios\n\n");
printf("\tAno: 2013/2014\n\n");
printf("\tPlaca: OHT5149\n\n");
printf("\tCor: Amarelo \n\n");
printf("\tValor da Diaria: 130,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(130*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 8:system ("cls");
printf("\tMarch\n\n"); 
printf("\tAno: 2009/2010\n\n");
printf("\tPlaca:WTH2486\n\n");
printf("\tCor: Cinza\n\n");
printf("\tValor da Diaria: 140,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(140*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 9:system ("cls"); 
printf ("\tUno\n\n");
printf("\tAno: 2012/2013\n\n");
printf("\tPlaca: GDT4698\n\n");
printf("\tCor: Preto\n\n");
printf("\tValor da Diaria: 130,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(130*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 10:system ("cls");
printf("\tVoyage\n\n");
printf("\tAno: 2011/2012\n\n");
printf("\tPlaca: JKL5042\n\n");
printf("\tCor: Vermelho\n\n"); 
printf("\tValor da Diaria: 170,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(170*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;



if (carro2==2)
	
	printf ("\n\tCARROS DE LUXO:\n\n");
	printf("\t1-Bmw\n\n");
	printf("\t2-Land Rover\n\n");
	printf("\t3-Audi A3 sedan\n\n");
	printf("\t4-Renegade\n\n");
	printf("\t5-Captiva\n\n");
	printf("\t6-IX35\n\n");
	printf("\t7-CRV\n\n");
	printf("\t8-Camaro\n\n");
	printf("\t9-Mercedes-Benz\n\n");
	printf("\t10-Tiguan\n\n");

	printf("Digite o numero do carro escolhido: ");
	scanf("%d", &carro2);
	

switch (carro2)


{
	
	
case 1:system ("cls");
printf ("\tBmw\n\n");
printf("\tAno: 2016\n\n");
printf("\tPlaca: ACG1092\n\n");
printf("\tCor: Preto\n\n");
printf("\tValor da Diaria: 700,00\n\n");

int calculo, qtdDias;
printf("\tPretende ficar quanto tempo com o carro ?");
scanf("%d",&qtdDias);
calculo = (700*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;

 
case 2:system ("cls"); 
printf("\tLand Rover\n\n");
printf("\tAno: 2017\n\n");
printf("\tPlaca: DKC9026\n\n");
printf("\tCor: Vermelho\n\n");
printf("\tValor da Diaria: 500,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(500*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;

    
case 3:system ("cls");
printf("\tAudi A3 sedan\n\n");
printf("\tAno: 2015\n\n");
printf("\tPlaca: SAB2693\n\n");
printf("\tCor: Prata\n\n");
printf("\tValor da Diaria: 450,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(450*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 4:system ("cls"); 
printf("\tRenegade\n\n");
printf("\tAno: 2016\n\n");
printf("\tPlaca: ADS4532\n\n");
printf("\tCor: Verde\n\n");
printf("\tValor da Diaria: 550,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(550*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 5:system ("cls");
printf("\tCaptiva\n\n");
printf("\tAno: 2014\n\n");
printf("\tPlaca: DFk7992\n\n");
printf("\tCor: Branco\n\n");
printf("\tValor da Diaria: 350,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(350*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 6:system ("cls");
printf("\tIX35\n\n");
printf("\tAno: 2015\n\n");
printf("\tPlaca: DFH6049\n\n");
printf("\tCor: Azul\n\n");
printf("\tValor da Diaria: 500,00\n\n");
printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(500*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 7:system ("cls"); 
printf("\tCRV\n\n");
printf("\tAno: 2014\n\n");
printf("\tPlaca: OUT1549\n\n");
printf("\tCor: Cinza \n\n");
printf("\tValor da Diaria: 450,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(450*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 8:system ("cls");
printf("\tCAMARO\n\n"); 
printf("\tAno: 2017\n\n");
printf("\tPlaca:WTH2986\n\n");
printf("\tCor: Amarelo\n\n");
printf("\tValor da Diaria: 850,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(850*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 9:system ("cls"); 
printf ("\tMercedes-Benz\n\n");
printf("\tAno: 2015\n\n");
printf("\tPlaca: QRT0468\n\n");
printf("\tCor: Preto\n\n");
printf("\tValor da Diaria: 650,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(650*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;


case 10:system ("cls");
printf("\tTiguan\n\n");
printf("\tAno: 2016\n\n");
printf("\tPlaca: WHL9542\n\n");
printf("\tCor: Vermelho\n\n"); 
printf("\tValor da Diaria: 450,00\n\n");

printf("\tPretende ficar quanto tempo com o carro ? ");
scanf("%d",&qtdDias);
calculo=(450*qtdDias);
printf("\n\n\tTotal a Pagar : %d Reais", calculo);
break;
}
}
}
