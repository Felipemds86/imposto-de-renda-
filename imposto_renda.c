#include<stdio.h>
#include<conio.h>
int main()
{
	float sal,inss,irrf,fgts,sald;
	printf("Digite o Salario:");
	scanf("%f",&sal);
	if(sal<0)//in�cio inss
		printf("Salario invalido");
	else if(sal<1100){
		inss=sal*0.075;}
	else if(sal<=2203.48){
		inss=sal*0.09;}
	else if(sal<=3305.22){
		inss=sal*0.12;}
	else if(sal<=6433.57){
		inss=sal*0.14;}
	else{
		inss=751.97;}//fim inss
		if(sal<0)//in�cio irrf
		printf("Salario invalido");
	else if(sal<1903.98)
		irrf=0;
	else if(sal<2826.65)
		irrf=sal*(0.075)-142.8;
	else if(sal<3751.05)
		irrf=sal*(0.15)-354.8;
	else if(sal<4664.68)
		irrf=sal*(0.225)-636.13;
	else
		irrf=sal*(0.275)-869.36;//fim irrf
fgts=sal*0.08;
printf("Base de calculo Fgts=%.2f\n",fgts);
printf("IRRF=%.2f\n",irrf);
printf("INSS=%.2f\n",inss);
sald=sal-inss-irrf;
printf("Salario descontado=%.2f\n",sald);

getch();

}


