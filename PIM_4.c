#include<stdio.h>
#include<stdlib.h>
#include <locale.h>           // ESSAS DUAS BIBLIOTECAS VÃO PERMITIR TRABALHAR COM A 
#include <string.h>          // LINGUA PORTUGUESA E EXECUTAR TAREFAS COM STRINGS
#include <conio.h>



//INICIO DO PROGRAM

int main(){
	
setlocale(LC_ALL,"");	// ESTE COMANDO VAI ATIVAR A LINGUA PORTUGUESA E PERMITIR DIGITAR PALAVRAS COM ACENTO

////////////////////////////////////////////////////////////////////
    //DECLARAÇÃO DAS VARIAVEIS
 ////////////////////////////////////////////////////////////////////
    
    //VARIAVEIS PARA ESCOLHA DO MENU E DA PEÇA
	int escolha_peca,escolha_menu;
	int escolha_horario;
	
	
//VARIAVEIS PARA ESCOLHA DAS DATAS
	int dia1[11]={0,0,0,0,0,0,0,0,0,0,0},mes1[11]={0,0,0,0,0,0,0,0,0,0,0},ano1[11]={0,0,0,0,0,0,0,0,0,0,0};
	int dia2[11]={0,0,0,0,0,0,0,0,0,0,0},mes2[11]={0,0,0,0,0,0,0,0,0,0,0},ano2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int dia3[11]={0,0,0,0,0,0,0,0,0,0,0},mes3[11]={0,0,0,0,0,0,0,0,0,0,0},ano3[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	
	
	//VARIAVEIS PARA PEÇA1 E HORARIO1
	float meia_ent1, inteira1;
	int v_ingresso1;
	int insento1=0;
	inteira1=30;
	meia_ent1=15;
	int i1;//VARIAVEL PRINCIPAL DOS INDICES DOS VETORES!!
	int quan_ingresso1[11]={0,0,0,0,0,0,0,0,0,0,0};
	int cadeira_v1 ;
		
	//VARIAVEIS PARA PEÇA1 E HORARIO2
	float meia_ent2, inteira2;
	int v_ingresso2;
	int insento2=0;
	inteira2=30;
	meia_ent2=15;
	int i2=0;
	int quan_ingresso2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int cadeira_v2 ;
	
	
	
	//VARIAVEIS PARA PEÇA1 E HORARIO3
	float meia_ent3, inteira3;
	int v_ingresso3;
	int insento3=0;
	inteira3=30;
	meia_ent3=15;
	int i3;
	int quan_ingresso3[11]={0,0,0,0,0,0,0,0,0,0,0};
	int cadeira_v3 ;
		
		
	
	
	// VARIÁVEIS PARA AS CADEIRAS DO HORÁRIO 1 DAS 15:00
	int peca1_cad1=0;
	int peca1_cad2=0;
	int peca1_cad3=0;
	int peca1_cad4=0;
	int peca1_cad5=0;
	int peca1_cad6=0;
	int peca1_cad7=0;
	int peca1_cad8=0;
	int peca1_cad9=0;
	int peca1_cad10=0;	
	int resp_cadeira;
	int cadeira[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	
	
	//VARIÁVEIS PARA AS CADEIRAS DO HORÁRIO 2 DAS 18:00
	int peca1h2_cad1=0;
	int peca1h2_cad2=0;
	int peca1h2_cad3=0;
	int peca1h2_cad4=0;
	int peca1h2_cad5=0;
	int peca1h2_cad6=0;
	int peca1h2_cad7=0;
	int peca1h2_cad8=0;
	int peca1h2_cad9=0;
	int peca1h2_cad10=0;	
	int resp_cadeirah2;
	int cadeirah2[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	
	
	//VARIÁVEIS PARA AS CADEIRAS DO HORÁRIO 3 DAS 21:00
	int peca1h3_cad1=0;
	int peca1h3_cad2=0;
	int peca1h3_cad3=0;
	int peca1h3_cad4=0;
	int peca1h3_cad5=0;
	int peca1h3_cad6=0;
	int peca1h3_cad7=0;
	int peca1h3_cad8=0;
	int peca1h3_cad9=0;
	int peca1h3_cad10=0;	
	int resp_cadeirah3;
	int cadeirah3[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	//////////////////////////////////////////////////////////////////////////////////////
	/////PEÇA2!!!!!
	////////////////////////////////////////////////////////////////////////////////////////////////
	
//VARIAVEIS PARA ESCOLHA DAS DATAS
	int dia1P2[11]={0,0,0,0,0,0,0,0,0,0,0},mes1P2[11]={0,0,0,0,0,0,0,0,0,0,0},ano1P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int dia2P2[11]={0,0,0,0,0,0,0,0,0,0,0},mes2P2[11]={0,0,0,0,0,0,0,0,0,0,0},ano2P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int dia3P2[11]={0,0,0,0,0,0,0,0,0,0,0},mes3P2[11]={0,0,0,0,0,0,0,0,0,0,0},ano3P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	//VARIAVEIS PARA PEÇA2 E HORARIO1
	float meia_ent1P2, inteira1P2;
	int v_ingresso1P2;
	int insento1P2=0;
	inteira1P2=30;
	meia_ent1P2=15;
	int i1P2=0;//VARIAVEL PRINCIPAL DOS INDICES DOS VETORES!!
	int quan_ingresso1P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int cadeira_v1P2 ;
	
	// VARIÁVEIS PARA AS CADEIRAS DO HORÁRIO 1 DAS 15:00
	int peca2_cad1=0;
	int peca2_cad2=0;
	int peca2_cad3=0;
	int peca2_cad4=0;
	int peca2_cad5=0;
	int peca2_cad6=0;
	int peca2_cad7=0;
	int peca2_cad8=0;
	int peca2_cad9=0;
	int peca2_cad10=0;	
	int resp_cadeiraP2;
	int cadeiraP2[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	//VARIAVEIS PARA PEÇA2 E HORARIO2
	float meia_ent2P2, inteira2P2;
	int v_ingresso2P2;
	int insento2P2=0;
	inteira2P2=30;
	meia_ent2P2=15;
	int i2P2=0;
	int quan_ingresso2P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int cadeira_v2P2;
	
	//VARIÁVEIS PARA AS CADEIRAS DO HORÁRIO 2 DAS 18:00
	int peca2h2_cad1=0;
	int peca2h2_cad2=0;
	int peca2h2_cad3=0;
	int peca2h2_cad4=0;
	int peca2h2_cad5=0;
	int peca2h2_cad6=0;
	int peca2h2_cad7=0;
	int peca2h2_cad8=0;
	int peca2h2_cad9=0;
	int peca2h2_cad10=0;	
	int resp_cadeirah2P2;
	int cadeirah2P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	
	//VARIAVEIS PARA PEÇA2 E HORARIO3
	float meia_ent3P2, inteira3P2;
	int v_ingresso3P2;
	int insento3P2=0;
	inteira3P2=30;
	meia_ent3P2=15;
	int i3P2=0;
	int quan_ingresso3P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	int cadeira_v3P2;
	
	//VARIÁVEIS PARA AS CADEIRAS DO HORÁRIO 3 DAS 21:00
	int peca2h3_cad1=0;
	int peca2h3_cad2=0;
	int peca2h3_cad3=0;
	int peca2h3_cad4=0;
	int peca2h3_cad5=0;
	int peca2h3_cad6=0;
	int peca2h3_cad7=0;
	int peca2h3_cad8=0;
	int peca2h3_cad9=0;
	int peca2h3_cad10=0;	
	int resp_cadeirah3P2;
	int cadeirah3P2[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	
	
		
	//GESTÃO DE CAIXA
		//VARIAVEIS MOVIMENTAÇÕES DO DIA
		int m_do_dia;
		//VARIAVEIS MOVIMENTAÇÕES DA PECA
		int m_peca;
		int m_horario;
		
		
	//VARIAVEIS SALDO DE FECHAMENTO	
		int soma_total=0;
		
	
	//COMANDO DO E WHILE GERAL
	int resp;
	
	
	
	
	do{     // ESTE COMANDO FAZ O LOOP
	
	
		system("cls");
	
	//ESCOLHENDO OPÇÕES DO MENU
	printf("\n==============================================================================\n");
	printf("\n\n                      **** TEATRO CULTURA BRASILEIRA ****                         \n\n\n");
	printf("==============================================================================\n\n");
	printf("\t                     ****ESCOLHA****                                        \n");
	printf("===============================================================================\n\n");
	printf("\t                     [1] Gestao\n\n\n\t                     [2] Vendas\n");
	printf(":::");
	
			scanf("%d",&escolha_menu);
				fflush(stdin);
	
	
	system("cls");	
	
//ESCOLHER AS OPÇÕES DAS PEÇAS

	if(escolha_menu==2){
		printf("\n========================================================================\n");
		printf("\n*******\tDias de peca: terca, quinta, sexta e domingo *******\n");
		printf("\n========================================================================\n");
		printf("\nQual peca o cliente quer ver:\n\n");	
		printf("\n                      \t[1] A terra chora\n\n\n                      \t[2] Riquezas naturais\n");
		//printf("\n__________________________________________________________________________\n");
		printf(":::");
				scanf("%d",&escolha_peca);
						fflush(stdin);
			
			

	system("cls");
			
			//PEÇA 1 ESCOLHENDO O HORARIO
			
				if(escolha_peca==1){
				printf("\n======================= Sala 1 =========================================\n");
				printf("\n========================================================================\n");
				printf("\t****Os horarios para peça A terra chora são:****\n");
				printf("\n========================================================================\n");
				printf("[1] 15:00 hrs\n[2] 18:00 hrs\n[3] 21:00 hrs\n");
				printf(":::");
				
					scanf("%d",&escolha_horario);
						fflush(stdin);
				
			
					
	system("cls");
	                           
	
	
			
					if(escolha_horario==1){
						
				//PEÇA 1 HORARIO 1,ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA
				
						if(peca1_cad1>0 && peca1_cad2>0 && peca1_cad3>0 && peca1_cad4>0 && peca1_cad5>0 && peca1_cad6>0 && peca1_cad7>0 && peca1_cad8>0 && peca1_cad9>0 && peca1_cad10 >0){
								
								printf("\n===============================**=================================================\n"); 
								printf("\tTodas as cadeiras desta sala estão ocupadas neste horário tente em outro horário.\n");
								printf("\n===============================**==================================================\n"); 
	system("pause");
	system("cls");
							
			}
			else{
				//HORARIO 1 INFORMADO A DATA
						printf("\n========================================================================\n");
						printf("\n                 *****A peca sera as 15:00*****\n");
						printf("\n========================================================================\n");
								printf("\nPra que data o cliete deseja:\n");
										printf("\nDia(n):");
											scanf("%d",&dia1[i1]);
										printf("Mês(n):");
											scanf("%d",&mes1[i1]);
										printf("Ano(n):");
											scanf("%d",&ano1[i1]);
								printf("\n========================================================================\n");
								printf("\nA data e para %d/%d/%d\n",dia1[i1],mes1[i1],ano1[i1]);
								printf("\n========================================================================\n");
								
								
	system("pause");
	system("cls");
								
											
								//ESCOLHENDO A CATEGORIA DO CLIENTE(MEIA,INTEIRA E INSENTO)	
								
									printf("\n========================================================================\n");		
									printf("\n___________Qual categoria o cliente se encaixa___________\n");
									printf("\n========================================================================\n");
									printf(" [ 1 ]Estudante\n [ 2 ]Crianca( 02 a 12 anos)\n [ 3 ]Idoso\n");
									printf(" [ 4 ]Professor da r. publica\n [ 5 ]Aluno da r. publica(somente as terças)\n [ 6 ]Ingresso normal\n\n");
											printf("Informe o tipo de categoria escolhido\n");
											printf(":::");
													scanf("%d",&v_ingresso1);
													
													
											if (v_ingresso1>=1 && v_ingresso1<=4){
													printf("\n=================================================================\n");
													printf("Paga meia valor R$:%5.2f\n\n\n\n",meia_ent1);
													printf("\n=================================================================\n");
															quan_ingresso1[i1]= meia_ent1;
													printf("%d\n",quan_ingresso1[i1]);
													soma_total+=meia_ent1;
															
											}

									else{
									
									
									if(v_ingresso1==6){
											printf("\n=================================================================\n");
											printf("Paga inteira valor R$:%2.2f\n\n\n",inteira1);
											printf("\n=================================================================\n");
													quan_ingresso1[i1]= inteira1;
											printf("%d\n",quan_ingresso1[i1]);
											soma_total+=inteira1;
	
										}
										
										else{
										
											
									if(v_ingresso1==5){	
											printf("\n=================================================================\n");								
											printf("insento\n");
											printf("\n=================================================================\n");
													quan_ingresso1[i1]= insento1;
											printf("%d",quan_ingresso1[i1]);
											soma_total+=insento1;
										
									         	}
										
															
								
											}
										}
										
									
system("pause");
system("cls");								
									
											
								do{
										
								//RESERVANDO A CADEIRA!
											
									printf("\n\nQual cadeira o cliente deseja?\n\n");
									printf("\n=================================================================\n");
									printf("-=-=                      =-=Sala 1-=-=-                     -=-=\n");
									printf("\n=================================================================\n");
									printf("\n====------------------------ PALCO --------------------------====\n");
									printf("\n\n Cadeiras: \n\n");
									printf("                     1 - 2 - 3 - 4 - 5     \n");
									printf("                     6 - 7 - 8 - 9 - 10     \n ");
									
										
											scanf("%d",&cadeira[i1]);   system("cls");
												
											
									if(peca1_cad1==0 && cadeira[i1]==1){									
											

										peca1_cad1 = cadeira[i1]; 
										printf("\n=================================================================\n");            
										printf("\n              Cadeira 1 reservada\n");
										printf("\n=================================================================\n");					
								
									}
									else if(peca1_cad2==0 && cadeira[i1]==2){
										
										peca1_cad2 = cadeira[i1];
										
										printf("\n=================================================================\n");   
										printf("\n              Cadeira 2 reservada\n");
										printf("\n=================================================================\n");   
									}
									else if(peca1_cad3==0 && cadeira[i1]==3){
										
										peca1_cad3 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n              Cadeira 3 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad4==0 && cadeira[i1]==4){
										
										peca1_cad4 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n                Cadeira 4 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad5==0 && cadeira[i1]==5){
										
										peca1_cad5 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n                Cadeira 5 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad6==0 && cadeira[i1]==6){
										
										peca1_cad6 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 6 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad7==0 && cadeira[i1]==7){
										
										peca1_cad7 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 7 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad8==0 && cadeira[i1]==8){
										
										peca1_cad8 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 8 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad9==0 && cadeira[i1]==9){
										
										peca1_cad9 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 9 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca1_cad10==0 && cadeira[i1]==10){
										
										peca1_cad10 = cadeira[i1];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 10 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									
									else{
										printf("\n=================================================================\n");   
										printf("\n Esta cadeira está indisponível!\n\n\n");
										printf("\n=================================================================\n");   
									}
									
									printf("\n-----ALTERAR ESSA CADEIRA ? (se a cadeira estiver indisponível)---------\n");
									printf("\n ===---1 para sim---===\n  \n\n====----2 para não:---===\n");
									scanf("%d",&resp_cadeira);
system("cls");	
								}	while(resp_cadeira==1);
									
					
															 				

											
									//IMPRESSÃO DO TICKET PEÇA 1 HORARIO 1
									printf("\n========================================================================\n");
									printf("       \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
									printf("\n=======================================================================\n\n");		
									printf("                  \t======TICKET======                     \n");
									printf("                 \tPeça teatral:A terra chora                      \n ");
									printf("                 \tData:%d/%d/%d							 \n",dia1[i1],mes1[i1],ano1[i1]);
									printf("                 \tHora da peça:15:00                     \n");
									printf("                 \tNúmero da poltrona:%d					 \n",cadeira[i1]);
									printf("                 \tValor do ingresso:%d				      \n",quan_ingresso1[i1]);
									printf("      	         \tSala: 1													   ");
									printf("\n======================================================================\n");
										
								i1++;

system("pause");
system("cls");
									}
								}
							
				
										
				//PEÇA 1 HORARIO 2 INFORMANDO A DATA	
					if(escolha_horario==2){
						
						
							//PEÇA 1 HORARIO 1,ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA
						if(peca1h2_cad1>0 && peca1h2_cad2>0 && peca1h2_cad3>0 && peca1h2_cad4>0 && peca1h2_cad5>0 && peca1h2_cad6>0 && peca1h2_cad7>0 && peca1h2_cad8>0 && peca1h2_cad9>0 && peca1h2_cad10 >0){
								
						printf("\n===================================**===============================================\n"); 		
						printf("\n\nTodas as cadeiras desta sala estão ocupadas neste horário tente em outro horário.\n");
						printf("\n===================================**================================================\n"); 
	system("pause");
	system("cls");
							
			}
			else{
						printf("\n=================================================================\n"); 
						printf("\n              ****A peca sera as 18:00****\n");
						printf("\n=================================================================\n"); 
						
						
								printf("Pra que data o cliete deseja:\n");
										printf("Dia(n):");
											scanf("%d",&dia2[i2]);
										printf("mes(n):");
											scanf("%d",&mes2[i2]);
										printf("ano(n):");	
											scanf("%d",&ano2[i2]);
								printf("\n=================================================================\n"); 
								printf("\nA data e para %d/%d/%d\n",dia2[i2],mes2[i2],ano2[i2]);
								printf("\n=================================================================\n"); 
								
								
	system("pause");				
	system("cls");
	
	
								//ESCOLHENDO A CATEGORIA DO CLIENTE(MEIA,INTEIRA E INSENTO)	
									printf("\n=================================================================\n"); 					
									printf("\n__________Qual categoria o cliente se encaixa_________\n\n");
									printf("\n=================================================================\n"); 
									printf(" [ 1 ]Estudante\n [ 2 ]Crianca( 02 a 12 anos)\n [ 3 ]Idoso\n [ 4 ]Professor da r. publica\n [ 5 ]Aluno da r. publica(somente as terças)\n [ 6 ]Ingresso normal\n\n");
											printf("\nInforme o tipo de categoria escolhido\n");
											printf(":::");
													scanf("%d",&v_ingresso2);
													
											if (v_ingresso2>=1 && v_ingresso2<=4){
												
												printf("\n=================================================================\n");
												printf("Paga meia valor R$:%5.2f\n\n\n\n",meia_ent2);
												printf("\n=================================================================\n");
															quan_ingresso2[i2]= meia_ent2;
													printf("%d\n",quan_ingresso2[i2]);
													soma_total+=meia_ent2;
															
											}

									else{
									
									
									if(v_ingresso2==6){
											printf("\n=================================================================\n"); 
											printf("Paga inteira valor R$:%2.2f\n\n\n",inteira2);
											printf("\n=================================================================\n"); 
													quan_ingresso2[i2]= inteira2;
											printf("%d\n",quan_ingresso2[i2]);
											soma_total+=inteira2;
	
										}
										
										else{
											
											
											if(v_ingresso2==5){	
											printf("\n=================================================================\n"); 								
													printf("insento\n");
											printf("\n=================================================================\n"); 
													quan_ingresso2[i2]= insento2;
											printf("%d",quan_ingresso2[i2]);
											soma_total+=insento2;
										
												}
														
								
											}
										}
																				
										
										
system("pause");
system("cls");

									do{
										
											
								//PEÇA 1 HORARIO 2,ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA	
								
									printf("\n\nQual cadeira o cliente deseja?\n\n");
									printf("\n=================================================================\n");
									printf("-=-=                      =-=Sala 1-=-=-                     -=-=\n");
									printf("\n=================================================================\n");
									printf("\n====------------------------ PALCO --------------------------====\n");
									printf("\n Cadeiras: \n");
									printf("                     1 - 2 - 3 - 4 - 5     \n");
									printf("                     6 - 7 - 8 - 9 - 10     \n ");
									printf(":::");
									
										
											scanf("%d",&cadeirah2[i2]);   
											  

system("cls");													
											
									if(peca1h2_cad1==0 && cadeirah2[i2]==1){									

										peca1h2_cad1 = cadeirah2[i2];
										printf("\n=================================================================\n");               
										printf("\n               Cadeira 1 reservada\n");
										printf("\n=================================================================\n"); 					 
								
									}
									else if(peca1h2_cad2==0 && cadeirah2[i2]==2){
										
										peca1h2_cad2 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n                Cadeira 2 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca1h2_cad3==0 && cadeirah2[i2]==3){
										
										peca1h2_cad3 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n               Cadeira 3 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca1h2_cad4==0 && cadeirah2[i2]==4){
										
										peca1h2_cad4 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n                Cadeira 4 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h2_cad5==0 && cadeirah2[i2]==5){
										
										peca1h2_cad5 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n                Cadeira 5 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h2_cad6==0 && cadeirah2[i2]==6){
										
										peca1h2_cad6 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n               Cadeira 6 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h2_cad7==0 && cadeirah2[i2]==7){
										
										peca1h2_cad7 =  cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 7 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca1h2_cad8==0 && cadeirah2[i2]==8){
										
										peca1h2_cad8 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 8 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h2_cad9==0 && cadeirah2[i2]==9){
										
										peca1h2_cad9 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 9 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h2_cad10==0 && cadeirah2[i2]==10){
										
										peca1h2_cad10 = cadeirah2[i2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 10 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									
									else{
										printf("\n=================================================================\n"); 
										printf("\n Esta cadeira está indisponível!\n\n\n");
										printf("\n=================================================================\n"); 
									}			
														
									printf("-------DESEJA TROCAR A CADEIRA?(somente se a cadeira estiver indisponível)\n\n\n");
									printf("\n ===---1 para sim---===\n **** ===---2 para não---=== :\n");
									printf(":::");
									scanf("%d",&resp_cadeirah2);
									
									
								}	while(resp_cadeirah2==1);
									
									
system("cls");
								//IMPRESSÃO DO TICKET PEÇA 1 HORARIO 2
									printf("\n=========================================================================\n\n");
									printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
									printf("\n=======================================================================\n\n");		
									printf("                  \t======TICKET======                     \n");
									printf("                 \tPeça teatral:A terra chora                      \n ");
									printf("                 \tData:%d/%d/%d							 \n",dia2[i2],mes2[i2],ano2[i2]);
									printf("                 \tHora da peça:18:00                     \n");
									printf("                 \tNúmero da poltrona:%d					 \n",cadeirah2[i2]);
									printf("                 \tValor do ingresso:%d				      \n",quan_ingresso2[i2]);
									printf("                 \tSala: 1                                                     ");
									printf("\n======================================================================\n");
				i2++;	

system("pause");
system("cls");	
					
				}
			}
			
			//HORARIO 3 INFORMANDO A DATA
					if(escolha_horario==3){
						
						
						if(peca1h3_cad1>0 && peca1h3_cad2>0 && peca1h3_cad3>0 && peca1h3_cad4>0 && peca1h3_cad5>0 && peca1h3_cad6>0 && peca1h3_cad7>0 && peca1h3_cad8>0 && peca1h3_cad9>0 && peca1h3_cad10 >0){
								
								printf("\n=================================================================\n"); 	
								printf("\n\nTodas as cadeiras desta sala estão ocupadas neste horário tente em outro horário.\n");
								printf("\n=================================================================\n"); 
	system("pause");
	system("cls");
							
			}
			else{
						printf("\n=================================================================\n"); 
						printf("\n****A peca sera as 21:00****\n");
						printf("\n=================================================================\n"); 
						
							
								printf("\nPara que data o cliente deseja:\n\n");
										printf("Dia(n):");
											scanf("%d",&dia3[i3]);
										printf("mes(n):");
											scanf("%d",&mes3[i3]);
										printf("ano(n):");
											scanf("%d",&ano3[i3]);
								printf("\n=================================================================\n"); 
								printf("\nA data e para %d/%d/%d\n",dia3[i3],mes3[i3],ano3[i3]);
								printf("\n=================================================================\n"); 
									
							
								
	system("pause");				
	system("cls");
	
	
								//ESCOLHENDO A CATEGORIA DO CLIENTE(MEIA,INTEIRA E INSENTO)
									printf("\n=================================================================\n"); 
									printf("\n________Qual categoria o cliente se encaixa________\n\n");
									printf("\n=================================================================\n"); 
									printf(" \n [ 1 ]Estudante\n [ 2 ]Crianca( 02 a 12 anos)\n [ 3 ]Idoso\n [ 4 ]Professor da r. publica\n [ 5 ]Aluno da r. publica(somente as terças)\n [ 6 ]Ingresso normal\n\n");
											printf("\nInforme o tipo de categoria escolhido\n");
											printf(":::");
													scanf("%d",&v_ingresso3);
													
													
											if (v_ingresso3>=1 && v_ingresso3<=4){
													printf("\n=================================================================\n");
													printf("Paga meia valor R$:%5.2f\n\n",meia_ent3);
													printf("\n=================================================================\n");
															quan_ingresso3[i3]= meia_ent3;
													printf("%d\n",quan_ingresso3[i3]);
													soma_total+=meia_ent3;
															
											}

									else{
									
									
									if(v_ingresso3==6){
											printf("\n=================================================================\n");
											printf("Paga inteira valor R$:%5.2f\n\n",inteira3);
											printf("\n=================================================================\n");
													quan_ingresso3[i3]= inteira3;
											printf("%d\n",quan_ingresso3[i3]);
											soma_total+=inteira3;
	
										}
										
										else{
																														
											if(v_ingresso3==5){	
													printf("\n=================================================================\n");								
													printf("insento\n");
													printf("\n=================================================================\n");
													quan_ingresso3[i3]= insento3;
											printf("%d\n",quan_ingresso3[i3]);
											soma_total+=insento3;
										
												}
															
								
											}
										}
																				
										
										
system("pause");
system("cls");
								
										do{									
								//PEÇA 1 HORARIO 3,ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA
								
									printf("\n\nQual cadeira o cliente deseja?\n\n");
									printf("\n=================================================================\n");
									printf("-=-=                      =-=Sala 1-=-=-                     -=-=\n");									
									printf("\n=================================================================\n");
									printf("\n====------------------------ PALCO --------------------------====\n");
									printf("\n Cadeiras: \n\n");
									printf("                     1 - 2 - 3 - 4 - 5     \n");
									printf("                     6 - 7 - 8 - 9 - 10     \n ");
									printf(":::");
										
											scanf("%d",&cadeirah3[i3]);   
											  

system("cls");													
											
									if(peca1h3_cad1==0 && cadeirah3[i3]==1){									

										peca1h3_cad1 = cadeirah3[i3];   
										printf("\n=================================================================\n");           
										printf("\n\n\n   Cadeira 1 reservada\n");					
								    	printf("\n=================================================================\n"); 
									}
									else if(peca1h3_cad2==0 && cadeirah3[i3]==2){
										
										peca1h3_cad2 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 2 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca1h3_cad3==0 && cadeirah3[i3]==3){
										
										peca1h3_cad3 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 3 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad4==0 && cadeirah3[i3]==4){
										
										peca1h3_cad4 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 4 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad5==0 && cadeirah3[i3]==5){
										
										peca1h3_cad5 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 5 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad6==0 && cadeirah3[i3]==6){
										
										peca1h3_cad6 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 6 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad7==0 && cadeirah3[i3]==7){
										
										peca1h3_cad7 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 7 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad8==0 && cadeirah3[i3]==8){
										
										peca1h3_cad8 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 8 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad9==0 && cadeirah3[i3]==9){
										
										peca1h3_cad9 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 9 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca1h3_cad10==0 && cadeirah3[i3]==10){
										
										peca1h3_cad10 = cadeirah3[i3];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 10 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									
									else{
										printf("\n=================================================================\n"); 
										printf("\n Esta cadeira está indisponível!\n");
										printf("\n=================================================================\n"); 
									}
									
									
										
									
									printf("-------DESEJA TROCAR A CADEIRA ?(se a cadeira estiver indisponivel)\n");
									printf("\n===---1 para sim---=== \n \n===---2 para não:---===\n");
									printf(":::");
									scanf("%d",&resp_cadeirah3);
									
								}	while(resp_cadeirah3==1);
									

system("cls");
									

								//IMPRESSÃO DO TICKET PEÇA 1 HORARIO 3
									printf("\n=======================================================================\n");
									printf("         \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");		
									printf("\n=======================================================================\n\n");		
									printf("                  \t======TICKET======                     \n");
									printf("                 \tPeca teatral:A terra chora                      \n ");
									printf("                 \tData:%d/%d/%d							 \n",dia3[i3],mes3[i3],ano3[i3]);
									printf("                 \tHora da peca:21:00                     \n");
									printf("                 \tNúmero da poltrona:%d					 \n",cadeirah3[i3]);
									printf("                 \tValor do ingresso:%d				      \n",quan_ingresso3[i3]);
									printf("                 \tSala: 1                                                      ");
									printf("\n======================================================================\n");	
			i3++;						
				

system("pause");
system("cls");
				}
			}
		}
		////---------------------/////////////////////////////////////////////////////////////
		//PEÇA NÚMERO 2
		////-------------------------------/////////////////////////////////////////////////////////
			system("cls");
			
			//PEÇA 2 ESCOLHENDO O HORARIO
			
				if(escolha_peca==2){
				printf("\n======================= Sala 2 =========================================\n");
				printf("\n========================================================================\n");
				printf("\t****Os horarios para peça Riquezas naturais são:****\n");
				printf("\n========================================================================\n");
				printf("[1] 15:00 hrs\n[2] 18:00 hrs\n[3] 21:00 hrs\n");
				printf(":::");
				
					scanf("%d",&escolha_horario);
						fflush(stdin);
				
			
					
	system("cls");
	                           
	
	
				//HORARIO 1 INFORMADO A DATA
					if(escolha_horario==1){
						
						
						if(peca2_cad1>0 && peca2_cad2>0 && peca2_cad3>0 && peca2_cad4>0 && peca2_cad5>0 && peca2_cad6>0 && peca2_cad7>0 && peca2_cad8>0 && peca2_cad9>0 && peca2_cad10 >0){
								
								printf("\n===============================**=================================================\n"); 
								printf("\tTodas as cadeiras desta sala estão ocupadas neste horário tente em outro horário.\n");
								printf("\n===============================**==================================================\n"); 
	system("pause");
	system("cls");
							
			}
			else{
			
						printf("\n========================================================================\n");
						printf("\n                 *****A peca sera as 15:00*****\n");
						printf("\n========================================================================\n");
								printf("\nPra que data o cliete deseja:\n");
										printf("\nDia(n):");
											scanf("%d",&dia1P2[i1P2]);
										printf("Mês(n):");
											scanf("%d",&mes1P2[i1P2]);
										printf("Ano(n):");
											scanf("%d",&ano1P2[i1P2]);
								printf("\n========================================================================\n");
								printf("\nA data e para %d/%d/%d\n",dia1P2[i1],mes1P2[i1],ano1P2[i1]);
								printf("\n========================================================================\n");
							
								
	system("pause");
	system("cls");
								
											
								//ESCOLHENDO A CATEGORIA DO CLIENTE(MEIA,INTEIRA E INSENTO)	
								
									printf("\n========================================================================\n");		
									printf("\n___________Qual categoria o cliente se encaixa___________\n");
									printf("\n========================================================================\n");
									printf(" [ 1 ]Estudante\n [ 2 ]Crianca( 02 a 12 anos)\n [ 3 ]Idoso\n");
									printf(" [ 4 ]Professor da r. publica\n [ 5 ]Aluno da r. publica(somente as terças)\n [ 6 ]Ingresso normal\n\n");
											printf("Informe o tipo de categoria escolhido\n");
											printf(":::");
													scanf("%d",&v_ingresso1P2);
													
													
											if (v_ingresso1P2>=1 && v_ingresso1P2<=4){
													printf("\n=======================================================================\n");	
													printf("Paga meia valor R$:%5.2f\n\n\n\n",meia_ent1P2);
													printf("\n=======================================================================\n");	
															quan_ingresso1P2[i1P2]= meia_ent1P2;
													printf("%d\n",quan_ingresso1P2[i1P2]);
													soma_total+=meia_ent1P2;
															
											}

									else{
									
									
									if(v_ingresso1P2==6){
											printf("\n=================================================================\n");
											printf("Paga inteira valor R$:%2.2f\n\n\n",inteira1P2);
											printf("\n=================================================================\n");
													quan_ingresso1P2[i1P2]= inteira1P2;
											printf("%d\n",quan_ingresso1P2[i1P2]);
											soma_total+=inteira1P2;
	
										}
										
										else{
										
											
									if(v_ingresso1P2==5){	
											printf("\n=================================================================\n");								
											printf("insento\n");
											printf("\n=================================================================\n");
													quan_ingresso1P2[i1P2]= insento1P2;
											printf("%d",quan_ingresso1P2[i1P2]);
											soma_total+=insento1P2;
										
									         	}
										
															
								
											}
										}
										
									
system("pause");
system("cls");								
									
											
								do{
										
							//PEÇA 2 HORARIO 1,ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA	
									
									printf("qual cadeira o cliente deseja?\n\n");
									printf("\n================================================================\n");	
									printf("-=-=                      =-=Sala 1-=-=-                     -=-=\n");	
									printf("=================================================================");
									printf("====------------------------ PALCO --------------------------====");						
									printf("\n Cadeiras: \n");
									printf("                     1 - 2 - 3 - 4 - 5     \n");
									printf("                     6 - 7 - 8 - 9 - 10     \n ");
									
										
											scanf("%d",&cadeiraP2[i1P2]);   
system("cls");
												
											
									if(peca2_cad1==0 && cadeiraP2[i1P2]==1){									
											

										peca2_cad1 = cadeiraP2[i1P2]; 
										printf("\n=================================================================\n");            
										printf("\n              Cadeira 1 reservada\n");
										printf("\n=================================================================\n");					
								
									}
									else if(peca2_cad2==0 && cadeiraP2[i1P2]==2){
										
										peca2_cad2 = cadeiraP2[i1P2];
										
										printf("\n=================================================================\n");   
										printf("\n              Cadeira 2 reservada\n");
										printf("\n=================================================================\n");   
									}
									else if(peca2_cad3==0 && cadeiraP2[i1P2]==3){
										
										peca2_cad3 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n              Cadeira 3 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad4==0 && cadeiraP2[i1P2]==4){
										
										peca2_cad4 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n                Cadeira 4 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad5==0 && cadeiraP2[i1P2]==5){
										
										peca2_cad5 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n                Cadeira 5 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad6==0 && cadeiraP2[i1P2]==6){
										
										peca2_cad6 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 6 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad7==0 && cadeiraP2[i1P2]==7){
										
										peca2_cad7 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 7 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad8==0 && cadeiraP2[i1P2]==8){
										
										peca2_cad8 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 8 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad9==0 && cadeiraP2[i1P2]==9){
										
										peca2_cad9 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 9 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									else if(peca2_cad10==0 && cadeiraP2[i1P2]==10){
										
										peca2_cad10 = cadeiraP2[i1P2];
										printf("\n=================================================================\n");   
										printf("\n\n\n   Cadeira 10 reservada\n");
										printf("\n=================================================================\n");   
										
									}
									
									else{
										printf("\n=================================================================\n");   
										printf("\n Esta cadeira está indisponível!\n\n\n");
										printf("\n=================================================================\n");   
									}
									
									printf("\n-----ALTERAR ESSA CADEIRA ?(se a cadeira estiver indisponível)---------");
									printf("\n ===---1 para sim---===\n  \n====----2 para não:---===\n");
									scanf("%d",&resp_cadeiraP2);
system("cls");	
								}	while(resp_cadeiraP2==1);
									
					
															 				

											
								//IMPRESSÃO DO TICKET PEÇA 2 HORARIO 1
									printf("\n=======================================================================\n");		
									printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
									printf("\n=======================================================================\n\n");		
									printf("                  \t======TICKET======                     \n");
									printf("                 \tPeça teatral:Riquezas naturais                      \n ");
									printf("                 \tData:%d/%d/%d							 \n",dia1P2[i1P2],mes1P2[i1P2],ano1P2[i1P2]);
									printf("                 \tHora da peça:15:00                     \n");
									printf("                 \tNúmero da poltrona:%d					 \n",cadeiraP2[i1P2]);
									printf("                 \tValor do ingresso:%d				      \n",quan_ingresso1P2[i1P2]);
									printf("      		\tSala: 2													       ");
									printf("\n======================================================================\n");
										
								i1P2++;

system("pause");
system("cls");
									}
								}
						
				
										
				//PEÇA 2 HORARIO 2 INFORMANDO A DATA	
					if(escolha_horario==2){
						
				
						if(peca2h2_cad1>0 && peca2h2_cad2>0 && peca2h2_cad3>0 && peca2h2_cad4>0 && peca2h2_cad5>0 && peca2h2_cad6>0 && peca2h2_cad7>0 && peca2h2_cad8>0 && peca2h2_cad9>0 && peca2h2_cad10 >0){
								
						printf("\n===================================**===============================================\n"); 		
						printf("\n\nTodas as cadeiras desta sala estão ocupadas neste horário tente em outro horário.\n");
						printf("\n===================================**================================================\n"); 
	system("pause");
	system("cls");
							
			}
			else{
						printf("\n=================================================================\n"); 
						printf("\n              **** A peca sera as 18:00 ****\n");
						printf("\n=================================================================\n"); 
						
						
								printf("Pra que data o cliete deseja:\n");
										printf("Dia(n):");
											scanf("%d",&dia2P2[i2P2]);
										printf("mes(n):");
											scanf("%d",&mes2P2[i2P2]);
										printf("ano(n):");	
											scanf("%d",&ano2P2[i2P2]);
								printf("\n=================================================================\n"); 
								printf("\nA data e para %d/%d/%d\n",dia2P2[i2P2],mes2P2[i2P2],ano2P2[i2P2]);
								printf("\n=================================================================\n"); 
								
								
	system("pause");				
	system("cls");
	
	
								//ESCOLHENDO A CATEGORIA DO CLIENTE(MEIA,INTEIRA E INSENTO)	
								
									printf("\n=================================================================\n"); 					
									printf("\n__________Qual categoria o cliente se encaixa_________\n\n");
									printf("\n=================================================================\n"); 
									printf(" [ 1 ]Estudante\n [ 2 ]Crianca( 02 a 12 anos)\n [ 3 ]Idoso\n [ 4 ]Professor da r. publica\n [ 5 ]Aluno da r. publica(somente as terças)\n [ 6 ]Ingresso normal\n\n");
											printf("\nInforme o tipo de categoria escolhido\n");
											printf(":::");
													scanf("%d",&v_ingresso2P2);
											if (v_ingresso2P2>=1 && v_ingresso2P2<=4){
												
												printf("\n=================================================================\n");
												printf("Paga meia valor R$:%5.2f\n\n\n\n",meia_ent2P2);
												printf("\n=================================================================\n");
															quan_ingresso2P2[i2P2]= meia_ent2P2;
													printf("%d\n",quan_ingresso2P2[i2P2]);
													soma_total+=meia_ent2P2;
															
											}

									else{
									
									
									if(v_ingresso2P2==6){
											printf("\n=================================================================\n"); 
											printf("Paga inteira valor R$:%2.2f\n\n\n",inteira2P2);
											printf("\n=================================================================\n"); 
													quan_ingresso2P2[i2P2]= inteira2P2;
											printf("%d\n",quan_ingresso2P2[i2P2]);
											soma_total+=inteira2P2;
	
										}
										
										else{
											
											
											if(v_ingresso2P2==5){	
											printf("\n=================================================================\n"); 								
													printf("insento\n");
											printf("\n=================================================================\n"); 
													quan_ingresso2P2[i2P2]= insento2P2;
											printf("%d",quan_ingresso2P2[i2P2]);
											soma_total+=insento2P2;
										
												}
														
								
											}
										}
																				
										
										
system("pause");
system("cls");

									do{
										
											
								//PEÇA 2 HORARIO 2,ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA	
									
									printf("\nQual cadeira o cliente deseja?\n\n");
									printf("\n=================================================================\n"); 
									printf("-=-=                      =-=Sala 1-=-=-                     -=-=\n");									
									printf("\n=================================================================\n");
									printf("\n====------------------------ PALCO --------------------------====\n\n");
									printf("\n Cadeiras: \n\n");
									printf("                     1 - 2 - 3 - 4 - 5     \n");
									printf("                     6 - 7 - 8 - 9 - 10     \n ");
									printf(":::");
									
										
											scanf("%d",&cadeirah2P2[i2P2]);   
											  

system("cls");													
											
									if(peca2h2_cad1==0 && cadeirah2P2[i2P2]==1){									

										peca2h2_cad1 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n");               
										printf("\n               Cadeira 1 reservada\n");
										printf("\n=================================================================\n"); 					 
								
									}
									else if(peca2h2_cad2==0 && cadeirah2P2[i2P2]==2){
										
										peca2h2_cad2 = cadeirah2P2[i2];
										printf("\n=================================================================\n"); 
										printf("\n                Cadeira 2 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca2h2_cad3==0 && cadeirah2P2[i2P2]==3){
										
										peca2h2_cad3 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n               Cadeira 3 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca2h2_cad4==0 && cadeirah2P2[i2P2]==4){
										
										peca2h2_cad4 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n                Cadeira 4 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h2_cad5==0 && cadeirah2P2[i2P2]==5){
										
										peca2h2_cad5 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n                Cadeira 5 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h2_cad6==0 && cadeirah2P2[i2P2]==6){
										
										peca2h2_cad6 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n               Cadeira 6 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h2_cad7==0 && cadeirah2P2[i2P2]==7){
										
										peca2h2_cad7 =  cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 7 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca2h2_cad8==0 && cadeirah2P2[i2P2]==8){
										
										peca2h2_cad8 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 8 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h2_cad9==0 && cadeirah2P2[i2P2]==9){
										
										peca2h2_cad9 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 9 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h2_cad10==0 && cadeirah2P2[i2P2]==10){
										
										peca2h2_cad10 = cadeirah2P2[i2P2];
										printf("\n=================================================================\n"); 
										printf("\n              Cadeira 10 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									
									else{
										printf("\n=================================================================\n"); 
										printf("\n Esta cadeira está indisponível!\n\n\n");
										printf("\n=================================================================\n"); 
									}			
														
									printf("-------DESEJA TROCAR A CADEIRA?(somente se a cadeira estiver indisponível)\n\n\n");
									printf("\n ===---1 para sim---===\n  \n===---2 para não---=== :\n");
									printf(":::");
									scanf("%d",&resp_cadeirah2P2);
									
									
								}	while(resp_cadeirah2P2==1);
									
									
system("cls");
								//IMPRESSÃO DO TICKET PEÇA 2 HORARIO 2
								
									printf("\n=======================================================================\n");	
									printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
									printf("\n=======================================================================\n\n");		
									printf("                  \t======TICKET======                     \n");
									printf("                 \tPeca teatral:Riquezas naturais                      \n ");
									printf("                 \tData:%d/%d/%d							 \n",dia2P2[i2P2],mes2P2[i2P2],ano2P2[i2P2]);
									printf("                 \tHora da peca:18:00                     \n");
									printf("                 \tNúmero da poltrona:%d					 \n",cadeirah2P2[i2P2]);
									printf("                 \tValor do ingresso:%d				      \n",quan_ingresso2P2[i2P2]);
									printf("                 \tSala:2                                                          ");
									printf("\n======================================================================\n");
				i2P2++;	

system("pause");
system("cls");						
				}
			}
			
			//HORARIO 3 INFORMANDO A DATA
					if(escolha_horario==3){
						
							
						if(peca2h3_cad1>0 && peca2h3_cad2>0 && peca2h3_cad3>0 && peca2h3_cad4>0 && peca2h3_cad5>0 && peca2h3_cad6>0 && peca2h3_cad7>0 && peca2h3_cad8>0 && peca2h3_cad9>0 && peca2h3_cad10 >0){
								
								printf("\n=================================================================\n"); 	
								printf("\n\nTodas as cadeiras desta sala estão ocupadas neste horário tente em outro horário.\n");
								printf("\n=================================================================\n"); 
	system("pause");
	system("cls");
							
			}
			else{
						printf("\n=================================================================\n"); 
						printf("\n****A peca sera as 21:00****\n");
						printf("\n=================================================================\n"); 
						
							
								printf("\nPara que data o cliente deseja:\n\n");
										printf("Dia(n):");
											scanf("%d",&dia3P2[i3P2]);
										printf("mes(n):");
											scanf("%d",&mes3P2[i3P2]);
										printf("ano(n):");
											scanf("%d",&ano3P2[i3P2]);
								printf("\n=================================================================\n"); 
								printf("\nA data e para %d/%d/%d\n",dia3P2[i3P2],mes3P2[i3P2],ano3P2[i3P2]);
								printf("\n=================================================================\n"); 
									
								
	system("pause");				
	system("cls");
	
	
								//ESCOLHENDO A CATEGORIA DO CLIENTE(MEIA,INTEIRA E INSENTO)
								
									printf("\n=================================================================\n"); 
									printf("\n________Qual categoria o cliente se encaixa________\n\n");
									printf("\n=================================================================\n"); 
									printf(" \n [ 1 ]Estudante\n [ 2 ]Crianca( 02 a 12 anos)\n [ 3 ]Idoso\n [ 4 ]Professor da r. publica\n [ 5 ]Aluno da r. publica(somente as terças)\n [ 6 ]Ingresso normal\n\n");
											printf("\nInforme o tipo de categoria escolhido\n");
											printf(":::");
													scanf("%d",&v_ingresso3P2);
													
													
											if (v_ingresso3P2>=1 && v_ingresso3P2<=4){
													printf("\n=================================================================\n");
													printf("Paga meia valor R$:%5.2f\n\n\n\n",meia_ent3P2);
													printf("\n=================================================================\n");
															quan_ingresso3P2[i3P2]= meia_ent3P2;
													printf("%d\n",quan_ingresso3P2[i3P2]);
													soma_total+=meia_ent3P2;
															
											}

									else{
									
									
									if(v_ingresso3P2==6){
											printf("\n=================================================================\n");
											printf("Paga inteira valor R$:%5.2f\n\n\n",inteira3P2);
											printf("\n=================================================================\n");
													quan_ingresso3P2[i3P2]= inteira3P2;
											printf("%d\n",quan_ingresso3P2[i3P2]);
											soma_total+=inteira3P2;
	
										}
										
										else{
																														
											if(v_ingresso3P2==5){	
													printf("\n=================================================================\n");								
													printf("insento\n");
													printf("\n=================================================================\n");
													quan_ingresso3P2[i3P2]= insento3P2;
											printf("%d\n",quan_ingresso3P2[i3P2]);
											soma_total+=insento3P2;
										
												}
															
								
											}
										}
																				
										
										
system("pause");
system("cls");
								//PEÇA 2 HORARIO 3 ESCOLHENDO QUAL CADEIRA O CLIENTE DESEJA
										do{									
									
									printf("\n\nQual cadeira o cliente deseja?\n\n");	
									printf("-=-=                      =-=Sala 1-=-=-                     -=-=\n");								
									printf("\n=================================================================\n");									
									printf("\n====------------------------ PALCO --------------------------====\n\n");
									printf("\n Cadeiras: \n\n");
									printf("                     1 - 2 - 3 - 4 - 5     \n");
									printf("                     6 - 7 - 8 - 9 - 10     \n ");
									printf(":::");
										
											scanf("%d",&cadeirah3P2[i3P2]);   
											  

system("cls");													
											
									if(peca2h3_cad1==0 && cadeirah3P2[i3P2]==1){									

										peca2h3_cad1 = cadeirah3P2[i3P2];   
										printf("\n=================================================================\n");           
										printf("\n\n\n   Cadeira 1 reservada\n");					
								    	printf("\n=================================================================\n"); 
									}
									else if(peca2h3_cad2==0 && cadeirah3P2[i3P2]==2){
										
										peca2h3_cad2 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 2 reservada\n");
										printf("\n=================================================================\n"); 
									}
									else if(peca2h3_cad3==0 && cadeirah3P2[i3P2]==3){
										
										peca2h3_cad3 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 3 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad4==0 && cadeirah3P2[i3P2]==4){
										
										peca2h3_cad4 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 4 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad5==0 && cadeirah3P2[i3P2]==5){
										
										peca2h3_cad5 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 5 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad6==0 && cadeirah3P2[i3P2]==6){
										
										peca2h3_cad6 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 6 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad7==0 && cadeirah3P2[i3P2]==7){
										
										peca2h3_cad7 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 7 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad8==0 && cadeirah3P2[i3P2]==8){
										
										peca2h3_cad8 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 8 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad9==0 && cadeirah3P2[i3P2]==9){
										
										peca2h3_cad9 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 9 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									else if(peca2h3_cad10==0 && cadeirah3P2[i3P2]==10){
										
										peca2h3_cad10 = cadeirah3P2[i3P2];
										printf("\n=================================================================\n"); 
										printf("\n\n\n   Cadeira 10 reservada\n");
										printf("\n=================================================================\n"); 
										
									}
									
									else{
										printf("\n=================================================================\n"); 
										printf("\n Esta cadeira está indisponível!\n");
										printf("\n=================================================================\n"); 
									}
									
									
										
									
									printf("-------DESEJA TROCAR A CADEIRA ?(se a cadeira estiver indisponivel)\n");
									printf("\n===---1 para sim---=== \n \n===---2 para não:---===");
									printf(":::");
									scanf("%d",&resp_cadeirah3P2);
									
								}	while(resp_cadeirah3P2==1);
									

system("cls");
									

								//IMPRESSÃO DO TICKET PEÇA 2 HORARIO 3
								
									printf("\n=======================================================================\n");
								 	printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
									printf("\n=======================================================================\n\n");		
									printf("                  \t======TICKET======                     \n");
									printf("                 \tPeca teatral:Riquezas naturais                      \n ");
									printf("                 \tData:%d/%d/%d							 \n",dia3P2[i3P2],mes3P2[i3P2],ano3P2[i3P2]);
									printf("                 \tHora da peca:21:00                     \n");
									printf("                 \tNúmero da poltrona:%d					 \n",cadeirah3P2[i3P2]);
									printf("                 \tValor do ingresso:%d				      \n",quan_ingresso3P2[i3P2]);
									printf("                 \tSala: 2                                                     ");
									printf("\n======================================================================\n");	
			i3P2++;						
				

system("pause");
system("cls");
				}
			}
		}	
	}
	//ESCOLHENDO ENTRE MOVIMENTAÇÕES E FECHAMENTO
	
		if(escolha_menu==1){
			printf("\n=======================================================================\n");
			printf("         \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
			printf("\n=======================================================================\n");
			printf("\n                  *=*=*=*=*=* GESTÃO *=*=*=*=*=\n");
			printf("\n=======================================================================\n");
			printf("\n                [1]Movimentações do dia\n\n                [2]Saldo de fechamento\n");
			printf(":::");
					scanf("%d",&m_do_dia);					
			
		
	
					

system("cls");
			 
		//MOVIMENTAÇÕES DO DIA
			
			if(m_do_dia==1){
				printf("\n\n=======================================================================\n");
				printf("\t*=*=*=*=*EXIBINDO AS MOVIMENTÇAÕ DO DIA*=*=*=*=*\n");
				printf("\n=======================================================================\n\n\n");
				printf("\t========ESCOLHA=======\n\n");
				printf("\t[1]Movimentações Peça: A terra chora\n\n \t[2]Movimentações Riquezas naturais\n");
				printf(":::");
						scanf("%d",&m_peca);
				
			

system("cls");
		//PEÇA A TERRA CHORA ESCOLHENDO HORARIOS
		
			if(m_peca==1){
				printf("\n_______________________ Sala 1 __________________________________________\n\n");
				printf("\n=======================================================================\n");
				printf("\tEscolha o horario:\n");
				printf("\n=======================================================================\n");
				printf("[1]15:00\n");
				printf("[2]18:00\n");
				printf("[3]21:00\n");
				printf("\n:::");
				scanf("%d",&m_horario);
			

system("cls");

			//HORARIO 1
			if(m_horario==1){
				printf("\n=======================================================================\n");	
				printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
				printf("\n=======================================================================\n\n");
				printf("\n============================ A terra chora ==============================\n");
				printf("\n=======================================================================\n");
				printf("\n=*=*=*=*= Exbindo movimentações das 15:00 =*=*=*=*=*=\n");
				printf("\n=======================================================================\n");
				printf("--------------------------------------------------Total de 10 ingressos\n\n ");
							
							
			if(cadeira[0]>0){
			
				printf("\n\n=====PRIMEIRA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[0],mes1[0],ano1[0]);
				printf("número da poltrona: %d\n",cadeira[0]);
				printf("Valor do ingresso: %d\n", quan_ingresso1[0]);
				printf("Sala: 1                                       \n");
				
			}
					else{
						printf("\n------NÃO VENDIDO-------\n\n\n");
					
					}
			
			if(cadeira[1]>0){
				
		
				printf("\n\n=====SEGUNDA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[1],mes1[1],ano1[1]);
				printf("número da poltrona: %d\n",cadeira[1]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[1]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO---------\n\n");
						}
				
			if(cadeira[2]>0){
					
				printf("\n\n=====TERCEIRA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[2],mes1[2],ano1[2]);
				printf("número da poltrona: %d\n",cadeira[2]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[2]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeira[3]>0){
				
				printf("\n\n=====QUARTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[3],mes1[3],ano1[3]);
				printf("número da poltrona: %d\n",cadeira[3]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[3]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeira[4]>0){
				
				printf("\n\n=====QUINTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[4],mes1[4],ano1[4]);
				printf("número da poltrona: %d\n",cadeira[4]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[4]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
			}
			
			if(cadeira[5]>0){
				
				printf("\n\n=====SEXTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[5],mes1[5],ano1[5]);
				printf("número da poltrona: %d\n",cadeira[5]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[5]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeira[6]>0){	
				printf("\n\n=====SETIMA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[6],mes1[6],ano1[6]);
				printf("número da poltrona: %d\n",cadeira[6]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[6]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeira[7]>0){	
				printf("peça teatral: A terra chora\n");
				printf("\n\n=====OITAVA COMPRA=====\n");
				printf("data: %d/%d/%d\n",dia1[7],mes1[7],ano1[7]);
				printf("número da poltrona: %d\n",cadeira[7]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[7]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			if(cadeira[8]>0){
				
				printf("\n\n=====NONA COMPRA=====\n\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[8],mes1[8],ano1[8]);
				printf("número da poltrona: %d\n",cadeira[8]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[8]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			if(cadeira[9]>0){
					
				printf("\n\n=====DECIMA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia1[9],mes1[9],ano1[9]);
				printf("número da poltrona: %d\n",cadeira[9]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1[9]);	
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");	
					}
			
													
system("pause");
system("cls");							
									
			}
	
	
		//HORARIO 2
			if(m_horario==2){
		    	printf("\n=======================================================================\n");	
				printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
				printf("\n=======================================================================\n\n");	
				printf("\n============================ A terra chora ==============================\n");
				printf("\n=======================================================================\n");
				printf("\n=*=*=*=*= Exbindo movimentações das 18:00 =*=*=*=*=*=\n");
				printf("\n=======================================================================\n");
					printf("--------------------------------------------------Total de 10 ingressos\n\n ");
							
							
			if(cadeirah2[0]>0){
			
				printf("\n\n=====PRIMEIRA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[0],mes2[0],ano2[0]);
				printf("número da poltrona: %d\n",cadeirah2[0]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[0]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n------NÃO VENDIDO-------\n\n\n");
					
					}
			
			if(cadeirah2[1]>0){
				
		
				printf("\n\n=====SEGUNDA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[1],mes2[1],ano2[1]);
				printf("número da poltrona: %d\n",cadeirah2[1]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[1]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO---------\n\n");
						}
				
			if(cadeirah2[2]>0){
					
				printf("\n\n=====TERCEIRA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[2],mes2[2],ano2[2]);
				printf("número da poltrona: %d\n",cadeirah2[2]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[2]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah2[3]>0){
				
				printf("\n\n=====QUARTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[3],mes2[3],ano2[3]);
				printf("número da poltrona: %d\n",cadeirah2[3]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[3]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah2[4]>0){
				
				printf("\n\n=====QUINTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[4],mes2[4],ano2[4]);
				printf("número da poltrona: %d\n",cadeirah2[4]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[4]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
			}
			
			if(cadeirah2[5]>0){
				
				printf("\n\n=====SEXTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[5],mes2[5],ano2[5]);
				printf("número da poltrona: %d\n",cadeirah2[5]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[5]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah2[6]>0){	
				printf("\n\n=====SETIMA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[6],mes2[6],ano2[6]);
				printf("número da poltrona: %d\n",cadeirah2[6]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[6]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah2[7]>0){	
			
				printf("\n\n=====OITAVA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[7],mes2[7],ano2[7]);
				printf("número da poltrona: %d\n",cadeirah2[7]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[7]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			if(cadeirah2[8]>0){
				
				printf("\n\n=====NONA COMPRA=====\n\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[8],mes2[8],ano2[8]);
				printf("número da poltrona: %d\n",cadeirah2[8]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[8]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			if(cadeirah2[9]>0){
					
				printf("\n\n=====DECIMA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia2[9],mes2[9],ano2[9]);
				printf("número da poltrona: %d\n",cadeirah2[9]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2[9]);	
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");	
					}
			
													
system("pause");
system("cls");			
							
					
		}
		//HORARIO 3
		if(m_horario==3){
				
				printf("\n=======================================================================\n");	
				printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
				printf("\n=======================================================================\n\n");
				printf("\n============================ A terra chora ==============================\n");
				printf("\n=======================================================================\n");
				printf("\n=*=*=*=*= Exbindo movimentações das 21:00 =*=*=*=*=*=\n");
				printf("\n=======================================================================\n");
					printf("--------------------------------------------------Total de 10 ingressos\n\n ");
							
							
			if(cadeirah3[0]>0){
			
				printf("\n\n=====PRIMEIRA COMPRA=====\n");
			    printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[0],mes3[0],ano3[0]);
				printf("número da poltrona: %d\n",cadeirah3[0]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[0]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n------NÃO VENDIDO-------\n\n\n");
					
					}
			
			if(cadeirah3[1]>0){
				
		
				printf("\n\n=====SEGUNDA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[1],mes3[1],ano3[1]);
				printf("número da poltrona: %d\n",cadeirah3[1]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[1]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO---------\n\n");
						}
				
			if(cadeirah3[2]>0){
					
				printf("\n\n=====TERCEIRA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[2],mes3[2],ano3[2]);
				printf("número da poltrona: %d\n",cadeirah3[2]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[2]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah3[3]>0){
				
				printf("\n\n=====QUARTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[3],mes3[3],ano3[3]);
				printf("número da poltrona: %d\n",cadeirah3[3]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[3]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah3[4]>0){
				
				printf("\n\n=====QUINTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[4],mes3[4],ano3[4]);
				printf("número da poltrona: %d\n",cadeirah3[4]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[4]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
			}
			
			if(cadeirah3[5]>0){
				
				printf("\n\n=====SEXTA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[5],mes3[5],ano3[5]);
				printf("número da poltrona: %d\n",cadeirah3[5]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[5]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah3[6]>0){	
				printf("\n\n=====SETIMA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[6],mes3[6],ano3[6]);
				printf("número da poltrona: %d\n",cadeirah3[6]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[6]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah3[7]>0){	
			
				printf("\n\n=====OITAVA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[7],mes3[7],ano3[7]);
				printf("número da poltrona: %d\n",cadeirah3[7]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[7]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			if(cadeirah3[8]>0){
				
				printf("\n\n=====NONA COMPRA=====\n\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[8],mes3[8],ano3[8]);
				printf("número da poltrona: %d\n",cadeirah3[8]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[8]);
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			if(cadeirah3[9]>0){
					
				printf("\n\n=====DECIMA COMPRA=====\n");
				printf("peça teatral: A terra chora\n");
				printf("data: %d/%d/%d\n",dia3[9],mes3[9],ano3[9]);
				printf("número da poltrona: %d\n",cadeirah3[9]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3[9]);	
				printf("Sala: 1                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");	
					}
													
system("pause");
system("cls");	
			
	     }
      }
      ////////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////////////////////////////////////////////////////////////
      //////////////////////////////////////////////////////////////////////////////////////////////
      system("cls");
      
	//PEÇA RIQUEZAS NATURAIS HORARIOS
	
			if(m_peca==2){
				printf("\n_______________________ Sala 1 __________________________________________\n\n");
				printf("\n=======================================================================\n");
				printf("\tEscolha o horario:\n");
				printf("\n=======================================================================\n");
				printf("[1]15:00\n");
				printf("[2]18:00\n");
				printf("[3]21:00\n");
				printf("\n:::");
				scanf("%d",&m_horario);
			

system("cls");

			//HORARIO 1
			if(m_horario==1){
				printf("\n=======================================================================\n");	
				printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
				printf("\n=======================================================================\n\n");
				printf("\n============================ Riquezas naturais ==============================\n");
				printf("\n=======================================================================\n");
				printf("\n=*=*=*=*= Exbindo movimentações das 15:00 =*=*=*=*=*=\n");
				printf("\n=======================================================================\n");
				printf("--------------------------------------------------Total de 10 ingressos\n\n ");
							
							
			if(cadeiraP2[0]>0){
			
				printf("\n\n=====PRIMEIRA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[0],mes1P2[0],ano1P2[0]);
				printf("número da poltrona: %d\n",cadeiraP2[0]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[0]);
				printf("Sala: 2                                       \n");
				
			}
					else{
						printf("\n------NÃO VENDIDO-------\n\n\n");
					
					}
			
			if(cadeiraP2[1]>0){
				
		
				printf("\n\n=====SEGUNDA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[1],mes1P2[1],ano1P2[1]);
				printf("número da poltrona: %d\n",cadeiraP2[1]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[1]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO---------\n\n");
						}
				
			if(cadeiraP2[2]>0){
					
				printf("\n\n=====TERCEIRA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[2],mes1P2[2],ano1P2[2]);
				printf("número da poltrona: %d\n",cadeiraP2[2]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[2]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeiraP2[3]>0){
				
				printf("\n\n=====QUARTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[3],mes1P2[3],ano1P2[3]);
				printf("número da poltrona: %d\n",cadeiraP2[3]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[3]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeiraP2[4]>0){
				
				printf("\n\n=====QUINTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[4],mes1P2[4],ano1P2[4]);
				printf("número da poltrona: %d\n",cadeiraP2[4]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[4]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
			}
			
			if(cadeiraP2[5]>0){
				
				printf("\n\n=====SEXTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[5],mes1P2[5],ano1P2[5]);
				printf("número da poltrona: %d\n",cadeiraP2[5]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[5]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeiraP2[6]>0){	
			
				printf("\n\n=====SETIMA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[6],mes1P2[6],ano1P2[6]);
				printf("número da poltrona: %d\n",cadeiraP2[6]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[6]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeiraP2[7]>0){	
			
				printf("\n\n=====OITAVA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[7],mes1P2[7],ano1P2[7]);
				printf("número da poltrona: %d\n",cadeiraP2[7]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[7]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			if(cadeiraP2[8]>0){
				
				printf("\n\n=====NONA COMPRA=====\n\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[8],mes1P2[8],ano1P2[8]);
				printf("número da poltrona: %d\n",cadeiraP2[8]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[8]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			if(cadeiraP2[9]>0){
					
				printf("\n\n=====DECIMA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia1P2[9],mes1P2[9],ano1P2[9]);
				printf("número da poltrona: %d\n",cadeiraP2[9]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso1P2[9]);
				printf("Sala: 2                                       \n");	
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");	
					}
			
													
system("pause");
system("cls");							
									
			}
	
	
			//HORARIO 2
			if(m_horario==2){
				printf("\n=======================================================================\n");	
				printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
				printf("\n=======================================================================\n\n");
				printf("\n============================ Riquezas naturais ==============================\n");
				printf("\n=======================================================================\n");
				printf("\n=*=*=*=*= Exbindo movimentações das 18:00 =*=*=*=*=*=\n");
				printf("\n=======================================================================\n");
					printf("--------------------------------------------------Total de 10 ingressos\n\n ");
							
							
			if(cadeirah2P2[0]>0){
			
				printf("\n\n=====PRIMEIRA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[0],mes2P2[0],ano2P2[0]);
				printf("número da poltrona: %d\n",cadeirah2P2[0]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[0]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n------NÃO VENDIDO-------\n\n\n");
					
					}
			
			if(cadeirah2P2[1]>0){
				
		
				printf("\n\n=====SEGUNDA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[1],mes2P2[1],ano2P2[1]);
				printf("número da poltrona: %d\n",cadeirah2P2[1]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[1]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO---------\n\n");
						}
				
			if(cadeirah2P2[2]>0){
					
				printf("\n\n=====TERCEIRA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[2],mes2P2[2],ano2P2[2]);
				printf("número da poltrona: %d\n",cadeirah2P2[2]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[2]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah2P2[3]>0){
				
				printf("\n\n=====QUARTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[3],mes2P2[3],ano2P2[3]);
				printf("número da poltrona: %d\n",cadeirah2P2[3]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[3]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah2P2[4]>0){
				
				printf("\n\n=====QUINTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[4],mes2P2[4],ano2P2[4]);
				printf("número da poltrona: %d\n",cadeirah2P2[4]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[4]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
			}
			
			if(cadeirah2P2[5]>0){
				
				printf("\n\n=====SEXTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[5],mes2P2[5],ano2P2[5]);
				printf("número da poltrona: %d\n",cadeirah2P2[5]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[5]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah2P2[6]>0){	
				printf("\n\n=====SETIMA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[6],mes2P2[6],ano2P2[6]);
				printf("número da poltrona: %d\n",cadeirah2P2[6]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[6]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah2P2[7]>0){	
			
				printf("\n\n=====OITAVA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[7],mes2P2[7],ano2P2[7]);
				printf("número da poltrona: %d\n",cadeirah2P2[7]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[7]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			if(cadeirah2[8]>0){
				
				printf("\n\n=====NONA COMPRA=====\n\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[8],mes2P2[8],ano2P2[8]);
				printf("número da poltrona: %d\n",cadeirah2P2[8]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[8]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			if(cadeirah2P2[9]>0){
					
				printf("\n\n=====DECIMA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia2P2[9],mes2P2[9],ano2P2[9]);
				printf("número da poltrona: %d\n",cadeirah2P2[9]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso2P2[9]);
				printf("Sala: 2                                       \n");	
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");	
					}
			
													
system("pause");
system("cls");			
							
					
		}
		//HORARIO 3
		if(m_horario==3){
				
				
				printf("\n=======================================================================\n");	
				printf("        \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=");
				printf("\n=======================================================================\n\n");
				printf("\n============================ Riquezas naturais ==============================\n");
				printf("\n=======================================================================\n");
				printf("\n=*=*=*=*= Exbindo movimentações das 21:00 =*=*=*=*=*=\n");
				printf("\n=======================================================================\n");
					printf("--------------------------------------------------Total de 10 ingressos\n\n ");
							
							
			if(cadeirah3P2[0]>0){
			
				printf("\n\n=====PRIMEIRA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[0],mes3P2[0],ano3P2[0]);
				printf("número da poltrona: %d\n",cadeirah3P2[0]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[0]);
				printf("Sala: 2                                       \n");	
			}
					else{
						printf("\n------NÃO VENDIDO-------\n\n\n");
					
					}
			
			if(cadeirah3P2[1]>0){
				
		
				printf("\n\n=====SEGUNDA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[1],mes3P2[1],ano3P2[1]);
				printf("número da poltrona: %d\n",cadeirah3P2[1]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[1]);
				printf("Sala: 2                                       \n");	
			}
					else{
						printf("\n\n--------NÃO VENDIDO---------\n\n");
						}
				
			if(cadeirah3P2[2]>0){
					
				printf("\n\n=====TERCEIRA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[2],mes3P2[2],ano3P2[2]);
				printf("número da poltrona: %d\n",cadeirah3P2[2]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[2]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah3P2[3]>0){
				
				printf("\n\n=====QUARTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[3],mes3P2[3],ano3P2[3]);
				printf("número da poltrona: %d\n",cadeirah3P2[3]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[3]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			
			if(cadeirah3P2[4]>0){
				
				printf("\n\n=====QUINTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[4],mes3P2[4],ano3P2[4]);
				printf("número da poltrona: %d\n",cadeirah3P2[4]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[4]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
			}
			
			if(cadeirah3P2[5]>0){
				
				printf("\n\n=====SEXTA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[5],mes3P2[5],ano3P2[5]);
				printf("número da poltrona: %d\n",cadeirah3P2[5]),
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[5]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah3P2[6]>0){	
				printf("\n\n=====SETIMA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[6],mes3P2[6],ano3P2[6]);
				printf("número da poltrona: %d\n",cadeirah3P2[6]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[6]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			
			if(cadeirah3P2[7]>0){	
			
				printf("\n\n=====OITAVA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[7],mes3P2[7],ano3P2[7]);
				printf("número da poltrona: %d\n",cadeirah3P2[7]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[7]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
						
					}
			if(cadeirah3P2[8]>0){
				
				printf("\n\n=====NONA COMPRA=====\n\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[8],mes3P2[8],ano3P2[8]);
				printf("número da poltrona: %d\n",cadeirah3P2[8]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[8]);
				printf("Sala: 2                                       \n");
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");
					}
			if(cadeirah3P2[9]>0){
					
				printf("\n\n=====DECIMA COMPRA=====\n");
				printf("peça teatral: Riquezas naturais\n");
				printf("data: %d/%d/%d\n",dia3P2[9],mes3P2[9],ano3P2[9]);
				printf("número da poltrona: %d\n",cadeirah3P2[9]);
				printf("Valor do ingresso: %d\n\n", quan_ingresso3P2[9]);
				printf("Sala: 2                                       \n");	
			}
					else{
						printf("\n\n--------NÃO VENDIDO----------\n\n");	
					}
													
system("pause");
system("cls");	
			
	     }
      }

  }
}
	//VALOR TOTAL DA SOMA DAS MOVIMENTAÇÕES
	
		if(m_do_dia==2){
			printf("\n\n===================================================================================\n");	
			printf("      \t-=-=-=-=-TEATRO CULTURA BRASILEIRA-=-=-=-=-=-=\n");
			
			printf("\n====================================================================================\n");
			;
			printf("\n=*=*=*=Exibindo o total das movimentações do dia: =*=*=*=*=*=*=*=*=\n");
		
			printf("\n________________________________________________________________________________\n");	
			printf("\n =-=-=-=-= A SOMA DO DIA É:%d -=-=-=-=-=-=-\n:",soma_total);
			printf("\n________________________________________________________________________________\n");	
			
			
		}
system("pause");
system("cls");
		
			
								//ESCOLHA FINAL DECIDE SE FECHA O PROGRAMA OU CONTINUA
									printf("\n______________________+__+__________________________________+__+________________\n");	
									printf("\nDeseja continuar? [1] PARA SIM ------- [2] PARA NÃO\n");
									printf("\n______________________+_+___________________________________+___+_______________\n");	
									printf(":::");
										scanf("%d",&resp);
													

										
										
						//ESTE COMANDO COMPLETA O LOOP											
										
	}	while (resp == 1);		
	
	
	
	
										
}

							

								
					     
				
				
		
	
	
				


	

								
						

					
			
				

