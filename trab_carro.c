#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char a[20],b[20];
	int c,e,op;
	float d;
	float km;
	float litro,q;		
	setlocale(LC_ALL,"Portuguese");
	
	printf("===========================================================\n");
	
	printf("       Digite logo abaixo as informações do veiculo\n");
	
	printf("-----------------------------------------------------------\n");
		
	printf(" Marca: ", &a);//aqui vai a marca do veiculo
	fgets(a,sizeof(a),stdin);
	
	printf(" Modelo: ", &b);//aqui onde vai o modelo do veiculo
	fgets(a,sizeof(a),stdin);
	
	printf(" Ano: "); //aqui onde vai o ano do veiculo
	scanf("%d",&c);
	
	if(c<=2018){ 		
		printf(" Status: usado \n");
	}else if(c>2019 && e<=2021){
		printf(" Status: seminovo \n");
	}else{
		printf(" Status: Novo\n");
	}	
	
	printf("-----------------------------------------------------------\n");
	
	do{	
	printf(" Informe o valor do veiculo:  ");// aqui onde vai o valor do veiculo
	scanf("%f",&d);	
	
	if(d<=1000) printf(" Valor invalido! \n");
								
	}while(d<=1000);
	
	printf("===========================================================\n");
	
    printf("          Escolha umas das opções abaixo?\n"); //opção de escolca 
    
    printf("===========================================================\n");
    printf(" Digite 1 se quiser acressentar porcentagem! \n"); // opção 1
	printf(" Digite 2 se quiser saber o comsumo do veiculo!\n");// opção 2
	scanf("%d",&op);
	printf("-----------------------------------------------------------\n");
	// Seleção da opção
	switch(op){ 
		
		case 1:		
		printf(" Digite a porcentagem desejado: \n"); // aqui onde vai a porcemtagem
		scanf("%f",&q);	
		float t = d * ( q /100 ) + d; // aqui onde é feito a soma do acressimo da porsemtagem	
		printf(" Valor do veiculo  com acressimo: %.2f \n",t);// aqui onde vai aperecer o valor com acressimo 
		break;
	
		case 2:
		printf(" Digite a distancia percorida em KM:  \n"); // aqui onde vai o km
		scanf(" %f",&km);	
		printf(" Digite a quntidade de litros abastecido: \n");// aqui onde vai os litros 
		scanf(" %f",&litro);	
		float g =km/ litro  ;		
		printf(" Veiculo gasta %.2f Km por litro",g); // aqui onde aparece o consumo  por km		
		break;
			
		default:
		printf(" opções invalida");	
		break;
		
}

	printf("\n=========================================================== ");	
	return 0;	
	
	
}
