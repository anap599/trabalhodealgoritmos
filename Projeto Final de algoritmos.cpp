#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int pontos=0;


int main();
void final1();
void final2();
void questao2B();
void porta2B();
void porta1B();
void porta1C();
void questao1B();


void desafiofinal(){
	system("cls");
	int conti;
	int i3 =0,i4=0,cv=0;
	int aux=0;
	int labi[20][30] = {{3,2,2,2,2,2,8,2,2,2,2,8,2,2,2,2,2,2,2,8,2,2,2,2,2,2,2,8,2,4},
						{1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1},
	                    {1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,5,2,6,0,3,2,4,0,5,0,1},
	                    {1,2,2,2,7,2,0,0,0,0,0,5,2,6,0,0,0,3,0,0,0,0,0,6,0,1,0,0,0,1},
						{1,0,0,0,0,0,0,0,2,4,0,0,0,0,0,0,0,1,0,2,4,0,0,0,0,1,0,0,0,1},
						{1,0,3,2,2,2,0,0,0,1,0,0,1,0,2,2,2,6,2,0,1,0,3,2,2,6,0,0,0,1},
						{1,0,1,0,0,0,0,0,0,5,2,2,6,0,0,0,0,0,0,0,1,0,1,0,0,5,2,4,0,1},
						{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,5,2,6,0,0,0,0,1,0,1},
						{0,0,5,2,2,2,0,0,0,0,3,2,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1},
						{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,5,2,2,4,0,0,0,3,2,2,2,6,0,1},
						{1,0,3,2,0,0,0,3,2,2,6,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1},
						{1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,5,2,1},
						{1,0,1,0,0,3,2,6,0,0,3,2,7,2,6,0,0,0,0,3,2,2,2,1,2,4,0,0,0,1},
						{1,0,5,2,8,6,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1},
						{1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,2,8,2,0,1,0,0,0,1},
						{1,2,4,0,0,0,0,1,0,0,1,0,3,7,2,4,0,2,2,6,0,0,1,0,0,1,0,0,0,1},
						{1,0,1,0,0,1,0,1,0,3,6,0,1,0,0,6,0,0,0,0,0,0,1,0,0,5,2,4,0,0},
						{1,0,5,2,2,6,0,1,0,1,0,3,6,0,0,0,0,0,3,2,2,0,0,0,0,0,0,1,0,1},
						{1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1},
						{5,2,2,2,2,2,2,7,2,2,2,7,2,2,2,2,2,2,7,2,2,2,7,2,2,2,2,7,2,6}};
						
	char lab[20][30];
	//LEGENDA 0 É VAZIO 1 ¦(186) 2 -(205) 3 É SE(201) 4 SD(187) 5 IE(200) 6ID (188) 7 L (202) 8T(203)
	while (i3<20)
	{
		i4=0;
		while(i4<30)
		{
			if(labi[i3][i4] == 0)
			{
				lab[i3][i4] = 32;
			}
			if(labi[i3][i4] == 1)
			{
				lab[i3][i4] = 186;
				
			}
			if(labi[i3][i4] == 2)
			{
				lab[i3][i4] = 205;
			}
			if(labi[i3][i4] == 3)
			{
				lab[i3][i4] = 201;
			}
			if(labi[i3][i4] == 4)
			{
				lab[i3][i4] = 187;
			}
			if(labi[i3][i4] == 5)
			{
				lab[i3][i4] = 200;
			}
			if(labi[i3][i4] == 6)
			{
				lab[i3][i4] = 188;
			}
			if(labi[i3][i4] == 7)
			{
				lab[i3][i4] = 202;
			}
			if(labi[i3][i4] == 8)
			{
				lab[i3][i4] = 203;
			}
			i4++;
		}
		
		i3++;
	}
		
	
	
	printf("\n\n");
	
	i3 = 0;
	i4 = 0;
	while(i3<20)
	{
		printf("        ");
		i4 = 0;
		while(i4<30)
		{
			printf("%c",lab[i3][i4]);
			i4++;
			
		}
		printf("\n");
		i3++;
	}	

	lab[8][0] = '*';
	while(cv != 1)
	{
		system("cls");
		printf("\n\n");
		i3 = 0;
		i4 = 0;
		while(i3<20)
		{
			printf("        ");
			i4 = 0;
			while(i4<30)
			{
				printf("%c",lab[i3][i4]);
				i4++;
				
			}
			printf("\n");
			i3++;
		}
		printf("\n    USE AS SETAS PARA CONTROLAR");
		char teclac;
		int tecla;
		int kb = 0;
		fflush(stdin);
		kb = 0;
		while(kb != 1)
		{
			
			if ( kbhit() )
			{
				kb = 1;
			}
			 
	        teclac = getch(); 
	  		tecla = int(teclac);
	            
	  
	
	        
			if(tecla ==72)
			{
				printf("cima");
				i3 = 0;
				i4 = 0;
				while(i3<20)
				{
					i4=0;
					while(i4<30)
					{
						if(lab[i3][i4] == 42)
						{
							
							if(labi[i3-1][i4] == 0)
							{
								lab[i3][i4] = 32;
								lab[i3-1][i4] = '*';
								
								
							}
							break;
						}
						i4++;
					}
					i3++;
				}
			}
			if(tecla ==80)
			{
				printf("baixo");
				i3 = 0;
				i4 = 0;
				while(i3<20)
				{
					i4=0;
					while(i4<30)
					{
						if(lab[i3][i4] == 42)
						{
							if(labi[i3+1][i4] == 0)
							{
								lab[i3][i4] = 32;
								lab[i3+1][i4] = '*';
								
								
							}
							break;
						}
						i4++;
					}
					i3++;
				}
				//codigo para baixo
			}
			if(tecla ==75)
			{
				printf("esquerda");
				//codigo para esqueda
				i3 = 0;
				i4 = 0;
				while(i3<20)
				{
					i4=0;
					while(i4<30)
					{
						if(lab[i3][i4] == 42)
						{
							if(labi[i3][i4-1] == 0)
							{
								lab[i3][i4] = 32;
								lab[i3][i4-1] = '*';
							}
							break;
						}
						i4++;
					}
					i3++;
				}
			}
			if(tecla ==77)
			{
				printf("direita");
				i3 = 0;
				i4 = 0;
				while(i3<20)
				{
					i4=0;
					while(i4<30)
					{
						
						if(lab[i3][i4] == 42)
						{
							
							if(labi[i3][i4+1] == 0)
							{
								lab[i3][i4] = 32;
								
								lab[i3][i4+1] = '*';
								
							}
							break;
						}
						i4++;
					}
					i3++;
				}
				//codigo para direita
			}
		}
		
		if(lab[16][29] == 42)
		{
			cv = 1;
		}
	}
	system("cls");
	
	
	i3 = 0;
	i4 = 0;
	while(i3<20) //print final
	{
		printf("        ");
		i4 = 0;
		while(i4<30)
		{
			printf("%c",lab[i3][i4]);
			i4++;
			
		}
		printf("\n");
		i3++;
	}	
	printf("     PARABENS VOCE GANHOU O JOGO\n");
	printf("\n    Digite 1 para continuar");
	scanf("%d", &conti);
	if(pontos ==3)
	{
		final1();
	}
	if(pontos != 3)
	{
		final2();
	}

	
}
void final1(){
	system("cls");
	int sim;
	printf("PARABENS!\n");
	printf("\t\tVOCE CHEGOU AO FINAL DA SUA JORNADA. O CAMINHO NAO FOI FACIL E AS ESCOLHAS FORAM DIFICEIS.\n\t\t ENTRETANTO VOCE ENCONTROU O QUE BUSCAVA. A JOIA DO TEMPO.\n");
	printf("\n\t\tCOM ELA VOCE DESCOBRIU SER CAPAZ DE VOLTAR NO TEMPO, E MELHORAR AS SUAS ESCOLHAS, TORNANDO-SE UMA PESSOA AINDA MELHOR AO LONGO DA SUA VIDA...\n");
	printf("DIGITE 1 PARA JOGAR NOVAMENTE OU QUALQUER OUTRA TECLA PARA SAIR\n");
	scanf("%d",&sim);
	if (sim == 1){
		main();
	}else("ATE MAIS!");
}
void final2(){
	system ("cls");
	int nao;
	printf("PARABENS!\n");
	printf("\t\tVOCE CHEGOU AO FINAL DA SUA JORNADA. O CAMINHO NAO FOI FACIL E AS ESCOLHAS FORAM DIFICEIS.\n\t\t ENTRETANTO VOCE ENCONTROU O QUE BUSCAVA. A JOIA DO TEMPO.\n");
	printf("\n\t\tCOM ELA VOCE DESCOBRIU SER CAPAZ DE VOLTAR NO TEMPO, POREM NAO PODE MUDAR O QUE JA FOI FEITO, TORNANDO-SE UM MERO ESPECTADOR DA PROPRIA VIDA, E SENDO OBRIGADO A CONVIVER COM O PESO DE SUAS ESCOLHAS DIA APOS DIA.\n");
	printf("DIGITE 1 PARA JOGAR NOVAMENTE OU QUALQUER OUTRA TECLA PARA SAIR\n");
	scanf("%d",&nao);
	if (nao == 1){
		main();
	}else("ATE MAIS!");
}
void porta2C(){
	system("cls");
	int vidas = 5;
	char letra;
	int i2 = 0, n2 = 0, acerto2 = 0;
	char pp[11] = {'S','I','N','C','E','R','I','D','A','D','E'};
	int c1[11];
	int digitado;
	
	while(i2<11)
	{
		c1[i2] = 0;
		i2++;
	}
	
	while(vidas > 0 && n2<11)
	{
		i2=0;
		printf("\n");
		system("cls");
		printf("VIDAS: %d\n",vidas);
		while(i2<11)
		{
			if(c1[i2] == 1)
				printf(" %c ",pp[i2]);
			else
				printf(" _ ");
			i2++;
		}
		fflush(stdin);
		printf("\nDigite uma letra maiuscula \n");
		scanf("%c",&letra);
		n2 = 0;
		acerto2 = 0;
		while( n2 <= 11)
		{
			if(letra == pp[n2])
			{
				c1[n2] = 1;
				acerto2 = 1;
			}
			n2++;
		}
		if(acerto2 == 0)
		{
			printf("\nNao tem essa letra na palavra!");
			vidas--; 
		}
		if(acerto2 == 1)
		{
			printf("\nAcertou");
		}
		i2=0;
		n2=0;
		while(i2<11)
		{
			
			if(c1[i2] == 1) 
			n2++;
			i2++;
		}
	}
	if(vidas == 0)
	{
		printf("\nAcabaram as suas vidas");
	}
	if(n2 == 11)
	{
		printf("\nParabens! Voce acertou a palavra\n");
		i2=0;
		while(i2<11)
		{
			if(c1[i2] == 1)
				printf(" %c ",pp[i2]);
			else
				printf(" _ ");
			i2++;
		}
		printf("\n");
		printf("Digite 1 para seguir para seu proximo desafio:\n");
		scanf("%d",&digitado);
			if (digitado == 1){
				questao1B();
			}
			else{
				printf("FIM DE JOGO!");
			}
	}
}
void porta2B(){ 
	system("cls");
	int campo[3][3];
	int i,escolha,j, escolha2;
	int escolha3,z,escolha4,k,continuar;
	campo[0][0] = 1;
	campo[0][1] = 1;
	campo[0][2] = 0;
	campo[1][0] = 1;
	campo[1][1] = 0;
	campo[1][2] = 0;
	campo[2][0] = 1;
	campo[2][1] = 0;
	campo[2][2] = 0;
	
	printf("1   2   3\t%cCOLUNA\n",174);
	printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,203,205,205,203,205,205,187);
	printf("%c  %c  %c  %c\n",186,186,186,186);
	printf("%c  %c  %c  %c  %cTERCEIRA LINHA\n",186,186,186,186,174);
	printf("%c%c%c%c%c%c%c%c%c%c\n",204,205,205,206,205,205,206,205,205,185);
	printf("%c  %c  %c  %c\n",186,186,186,186);
	printf("%c  %c  %c  %c   %cSEGUNDA LINHA\n",186,186,186,186,174);
	printf("%c%c%c%c%c%c%c%c%c%c\n",204,205,205,206,205,205,206,205,205,185);
	printf("%c  %c  %c  %c\n",186,186,186,186);
	printf("%c  %c  %c  %c   %cPRIMEIRA LINHA\n",186,186,186,186,174);
	printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,202,205,205,202,205,205,188);	
	printf("Escolha uma coluna da primeira linha");
	scanf("%d", &i);
	
	if (campo[0][i]== 1){
		
		printf("BOMBA ! !\n Voce pisou em uma bomba. Deseja tentar novamente?\n 1 - Sim\t2 - Nao\n ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			porta2B();
		}
			else {
				printf("FIM DE JOGO!");
			}
	}
				if( campo[0][i] == 0){
					printf("Escolha uma coluna da segunda linha:\n");
					scanf("%d",&j);
					if(campo[0][j]==0){
	 	printf("Escolha uma coluna, da segunda linha:\n");
	 	scanf("%d",&j);
	 		if(campo[1][j] == 1) {
	 			printf("BOMBA!\nVoce pisou em uma bomba. Deseja tentar novamente?\n 1 - Sim\t\t2 - Nao\n");
	 			scanf("%d", &escolha2);
			 }
			 	if(escolha2 == 1){
			 		porta2B();
				 }if(escolha2 == 2){
				 	printf("FIM DE JOGO !");
				 }
			if(campo[1][j]==0){
				printf("Esolha uma coluna da terceira linha");
				scanf("%d", &k);
				if (campo[2][k]==1){
					printf("Voce pisou em uma bomba.\n DESEJA tentar novamente?\n 1 - Sim\t\t2 - Nao");
					scanf("%d", &escolha3);
						if(escolha3 == 1){
							porta2B();
						}
						if(escolha3 == 2){
							printf("FIM DE JOGO");
						}
				}
				if(campo[2][k]== 0){
					printf("Escolha uma coluna da terceira linha:\n");
					scanf("%d",&z);
					if(campo[2][z] == 1){
						printf("Voce pisou em uma bomba.\n DESEJA tentar novamente?\n 1 - Sim\t\t2 - Nao");
						scanf("%d", &escolha4);
						if(escolha4 == 1){
							porta2B();
						}
						if(escolha4 == 2){
							printf("FIM DE JOGO");
						}
					}
				if(campo[2][z]==0){
					printf("PARABENS. VOCE CHEGOU AO FINAL DO CAMINHO\n");
					printf("DESEJA PROSSEGUIR PARA A PROXIMA QUESTAO?\n 1-SIM\t\t2-NAO\n");
					scanf("%d", &continuar);
					if(continuar == 1){
						questao2B();
					}
					
				}	if(continuar == 2){
					printf("FIM DE JOGO");
				}
				}
			} 
			 
			 
	 }
				}
	 
	
	
}

void questao2A(){
	system("cls");
	int eq2, digito;
	
	printf("Voce encontra um senhor velho abaixado no chao procurando por algo. Ao perguntar o que ele esta procurando ele te responde que e cego e nao consegue encontrar a chave que o levara ate a porta do ultimo desafio. Notando que a chave esta proxima do seu pe, voce entao decide:\n");
	printf("1 - Entregar a chave.\n 2-Chutar a chave para mais longe ainda, dizer que nao tem nenhuma chave por perto e tomar a chave para si.\n");
	scanf("%d", &eq2);
	
		if (eq2 == 1)
		{
			pontos = pontos+1;
		}
			if(eq2 == 2){
				pontos = pontos + 2;
			}
				if (eq2 != 1 || eq2 !=2){
					printf("escolha novamente");
						questao2A();
				}
				printf("DIGITE 1 OU 2 PARA CONHECER O SEU PROXIMO DESAFIO\n");
	scanf("%d", &digito);
		if(digito == 1){
			
			//porta2B();
		}
		if (digito == 2){
			//porta2C()
		}
}
void questao2C(){
	system("cls");
	int esc2c,opic,fm;
	
	printf("Um homem caminha em sua direcao e pergunta se voce acredita que ele e um grande mentiroso.\n");
	printf("1 - Voce acredita que ele esta dizendo a verdade dessa vez.\n2 - Voce nao acredita que ele diz a verdade.\n");
	scanf("%d", &esc2c);
		if(esc2c == 1){
			pontos = pontos +1;
		}
			if(esc2c == 2){
				pontos = pontos +2;
			}
				while (esc2c != 2 || esc2c != 1){
					printf("escolha novamente\n");
					scanf("%d", &esc2c);
				}
		printf("DIGITE 1 PARA ENFRENTAR SEU GRANDE DESAFIO FINAL \n");
		scanf("%d", &fm);
			if(fm == 1){
				//desafiofinal();				
			}
			while( fm != 1){
				printf("digite novamente\n");
				scanf("%d", &fm);
			}
}
void questao2B(){ 
	system("cls");
	
	int esc2b,opcc,fim;
	int esco2b;
	
	printf("Voce encontra um senhor velho sentado no chao, que ao ouvir seus passos comeca a falar com voce. Ele lhe diz que e cego e por causa disso nao conseguiu realizar o Grande Deasafio. Entao ele desistiu e agora quer lhe dar todos os seus pertences. Voce decide:\n");
	printf("1 - Nao aceitar nada, pois ele pode precisar de seus itens para sua jornada de volta.\n2 - Aceitar os itens e seguir seu caminho rumo ao proximo desafio.\n");
	scanf("%d", &esco2b);
		if(esco2b == 1){
			pontos = pontos +1;
		}
			if(esco2b == 2){
				pontos = pontos +2;
			}
				while (esco2b != 2 && esco2b != 1){
					printf("escolha novamente\n");
					scanf("%d", &esco2b);
				}
		printf("DIGITE 1 PARA ENFRENTAR SEU GRANDE DESAFIO FINAL \n");
		scanf("%d", &fim);
			if(fim == 1){
				desafiofinal();				
			}
			while( fim != 1){
				printf("digite novamente\n");
				scanf("%d", &fim);
			}
}

//funcao para a porta 2A
void porta2A(){
	
int youranswer,seguir;
int escolhaporta;
int esc;
	
	printf("EM UMA IGREJA HAVIAM 4 VELAS. ENTÃO DOIS LADROES ENTRARAM E LEVARAM DUAS VELAS. QUANTAS VELAS TEM AO TOTAL?\n");
	printf("SUA RESPOSTA:\n");
	scanf("%d",&youranswer);
	if(youranswer == 6)
	{
		printf("OS LADROES LEVARAM MAIS SEIS VELAS, OU SEJA NAO ROUBARAM, AGORA TEM 6 VELAS\n");
		printf("DIGITE 1 PARA SEGUIR AO SEU PROXIMO DESAFIO\n");
		scanf("%d",&seguir);
		if(seguir == 1){
			system("cls");
			printf("SEGUINDO O SEU PROXIMO DESAFIO, VOCE SE DEPARA COM DUAS PORTAS, QUAL DESEJA SEGUIR?\n 1- ESQUERDA\t\t\t2 - DIREITA");
			scanf("%d",&escolhaporta);
				if(escolhaporta == 1){
					porta2B();
				}
				if(escolhaporta == 2){
					porta2C();
				}
				else{
					printf("FIM DE JOGO!");
				}
		}
		
		
		
		
		
	}
	else{
		printf("RESPORTA INCORRETA, DESEJA TENTAR NOVAMENTE? 1 - SIM	2 - NAO\n");
		scanf("%d", &esc);
		if(esc == 1){
			porta2A();
		}
		else("FIM DE JOGO");
	}

}

void questao1C(){
	system("cls");
	int esc1c,ennd;
	
	printf("Voce encontra uma velha senhora, e ela lhe pergunta qual o melhor caminho ate a saida. Sabendo que o unico modo de sair e conseguindo encontrar a reliquia, voce entao decide:\n");
	printf("1 - Dizer-lhe o caminha correndo o risco de perder a reliquia para a velha senhora, e segue seu caminho.\n2 - Voce diz que tambem esta perdido e segue para o proximo desafio.\n");
	scanf("%d", &esc1c);
		if(esc1c == 1){
			pontos = pontos +1;
		}
			if(esc1c == 2){
				pontos = pontos +2;
			}
				while (esc1c != 2 && esc1c != 1){
					printf("escolha novamente\n");
					scanf("%d", &esc1c);
				}
		printf("DIGITE 1 PARA ENFRENTAR SEU GRANDE DESAFIO FINAL \n");
		scanf("%d", &ennd);
			if(ennd == 1){
				desafiofinal();				
			}
			while( ennd != 1){
				printf("digite novamente\n");
				scanf("%d", &ennd);
			}
}
void questao1B(){
	system("cls");
	int esc1b,pic,end;
	
	printf("Uma crianca esta perdida na caverna ha muitos dias e ela sente muita fome. Ela pergunta se voce tem um bolo de cereja, coincidentemente voce possui em sua bolsa.Sabendo que ainda esta no comeco de sua jornada, e o bolo e tudo o que voce trouxe, voce entao decide:\n");
	printf("1 - Dar o pedaco a crianca faminta.\n2 - Dizer que nao tem bolo de cereja e seguir para seu Grande Desafio\n");
	scanf("%d", &esc1b);
		if(esc1b == 1){
			pontos = pontos +1;
		}
			if(esc1b == 2){
				pontos = pontos +2;
			}
				while (esc1b != 2 && esc1b != 1){
					printf("escolha novamente\n");
					scanf("%d", &esc1b);
				}
		printf("DIGITE 1 PARA ENFRENTAR SEU GRANDE DESAFIO FINAL \n");
		scanf("%d", &end);
			if(end == 1){
				desafiofinal();				
			}
			while( end != 1){
				printf("digite novamente\n");
				scanf("%d", &end);
			}
}

//funcao para a questao 1A
void questao1A(){
	system("cls");
	int choice;
	int digite;
	printf("Nesse momento 3 zumbis aparecem andando em sua direção. Voce possui 3 pocoes de cura. Sabendo que você corre o risco de ser transformado em zumbi nessa grande aventura e precise de suas poções você decide:\n");
	printf("1 - Ajudar os zumbis com suas pocoes de cura.\n2 - Enfrentar a horda de zumbis, derrota-los e seguir para o seu grande desafio.\n");
	scanf("%d", &choice);
	if (choice == 1){
		pontos=pontos+1;
		
	}
	if (choice == 2){
		
		pontos = pontos+2;
	}
	
	printf("DIGITE 1 OU 2 PARA CONHECER O SEU PROXIMO DESAFIO\n");
	scanf("%d", &digite);
		if(digite == 1){
			
			porta1B();
		}
		if (digite == 2){
			porta1C();
		}

}

void porta1B(){
	
	int vidas = 5;
	char letra;
	int i = 0, n = 0, acerto = 0;
	char p1[11] = {'H','O','N','E','S','T','I','D','A','D','E'};
	int c1[11];
	int digitado;
	
	while(i<11)
	{
		c1[i] = 0;
		i++;
	}
	
	while(vidas > 0 && n<11)
	{
		i=0;
		printf("\n");
		printf("VIDAS: %d\n",vidas);
		while(i<11)
		{
			if(c1[i] == 1)
				printf(" %c ",p1[i]);
			else
				printf(" _ ");
			i++;
		}
		fflush(stdin);
		printf("\nDigite uma letra \n");
		scanf("%c",&letra);
		n = 0;
		acerto = 0;
		while( n <= 11)
		{
			if(letra == p1[n])
			{
				c1[n] = 1;
				acerto = 1;
			}
			n++;
		}
		if(acerto == 0)
		{
			printf("\nNao tem essa letra na palavra!");
			vidas--; 
		}
		if(acerto == 1)
		{
			printf("\nAcertou");
		}
		i=0;
		n=0;
		while(i<11)
		{
			
			if(c1[i] == 1) 
			n++;
			i++;
		}
	}
	if(vidas == 0)
	{
		printf("\nAcabaram as suas vidas");
	}
	if(n == 11)
	{
		printf("\nParabens! Voce acertou a palavra");
		printf("Digite 1 para seguir para seu proximo desafio:\n");
		scanf("%d",&digitado);
			if (digitado == 1){
				questao1B();
			}
			else{
				printf("FIM DE JOGO!");
			}
	}
}

void porta1C(){
	
	system("cls");
	int i=0,j=0,acertos=0;
	char comecar;
	int numeros[5];
	int respostas[5];
	int seguinte;
	int nescolhido;
	
	srand(time(NULL));
	
	printf("Voce deve decorar os numeros exibidos em 5 segundos e depois escreve-los na ordem que foram exibidos.\n");
	printf("Digite 1 para comecar\n");
	scanf("%d",&comecar);
		if(comecar == 1)
		{
			for(i=0;i<5;i++){
				numeros[i] = (rand()% 30)+1;
			}
			j=5;
			do{
				system("cls");
				printf("MEMORIZE OS NUMEROS ABAIXO EM %d\n\n\n",j);
				j--;
				for(i=0;i<5;i++){
					printf("%d\t",numeros[i]);
					
				}
				Sleep(1000);
				
			}while (j>0);
			system("cls");
			printf("DIGITE OS NUMEROS QUE VOCE MEMORIZOU");
			
				for(i=0;i<5;i++){
					printf("\t%dro Numero:",i+1);
					scanf("%d",&respostas[i]);
					if(respostas[i]==numeros[i]){
						acertos++;
					}
				}
				if(acertos==5){
					printf("VOCE ACERTOU TODOS OS NUMEROS EXIBIDOS\n Digite 1 para seguir ate o proximo desafio\n");
					scanf("%d",&seguinte);
						if(seguinte == 1){
							questao1C();
						}else{ printf("FIM DE JOGO!");}
						}	else{printf("VOCE NAO ACERTOU TODOS OS NUMEROS. DESEJA TENTAR NOVAMENTE?\n1- SIM \t\t2- NAO");
						scanf("%d",&nescolhido);
						if(nescolhido == 1){
							porta1C();
						}else{printf("FIM DE JOGO");}
						
				}
		}else
		{
			printf("fim de jogo!");
}
}
//funcao para a porta 1A
void porta1A(){
	system("cls");
	int jornada;
	int opc ;
	char resposta[] = "quarta";
	char op[20];
	printf("SE ONTEM FOSSE AMANHA, HOJE SERIA SEXTA-FEIRA. QUE DIA %c HOJE?",144);
					printf("SUA RESPOSTA: ");
					scanf("%d", &op);
					
						if (strstr(resposta,op)){
							printf("RESPOSTA CORRETA! DIGITE 1 PARA SEGUIR EM SUA JORNADA\n");
							scanf("%d",&jornada);
							if( jornada == 1){
								questao1A();
							}else{printf("FIM DE JOGO");
							}
							
							
						
					}
					else{
						printf("Resposta errada. Gostaria de tentar novamente?\n1 - SIM	2 - NAO");
						scanf("%c", &opc);
						if(opc == 1){
							porta1A();
						}
						else("FIM DE JOGO!");
}
}



int main() {
	
	int op,novamente,opi;
	char palavra, resposte[] = "quarta";
	char resp[20];
	int porta;
	int jornada1;
	
	printf("AVENTURA NA CAVERNA \n 1 - INICIAR >\n");
	
	scanf("%d", &op);
	
	if (op == 1)
	
	{
		printf("Sua Aventura esta prestes a come%car, escolha sabiamente a resposta para suas perguntas...\n",135);
		printf("1 - ENTRAR NA CAVERNA\n");
		
		scanf("%d", &opi);
		
			if(opi == 1)
			{
				printf("ENTRANDO NA CAVERNA VOCE SE DEPARA COM DOIS CAMINHOS. QUAL SEGUIR?\n 1- ESQUERDA			2- DIREITA\n");
				scanf("%d", &porta);
				if (porta == 1){
					printf("SE ONTEM FOSSE AMANHA, HOJE SERIA SEXTA-FEIRA. QUE DIA %c HOJE?",144);
					printf("SUA RESPOSTA:\n ");
					
					scanf("%s", &resp);
						if (strstr(resposte,resp)){
							printf("RESPOSTA CORRETA.\n DIGITE 1 PARA SEGUIR EM SUA JORNADA");
							scanf("%d",&jornada1);
							if( jornada1 == 1){
								questao1A();
							}else{printf("FIM DE JOGO");
							}
						
					}
					else{
						printf("Resposta errada. Gostaria de tentar novamente?\n1 - SIM	2 - NAO");
						scanf("%d", &novamente);
						if(novamente == 1){
							porta1A();
							
						}
						else{
							printf("FIM DE JOGO!");
						}
						
					}
				}
				
				if (porta == 2){
					
					porta2A();
				}
					
			}
		
	}
	
}
