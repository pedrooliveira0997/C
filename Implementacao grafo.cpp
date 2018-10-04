// Direitos: Implementação de Vinicius da Silva Barbosa 
# include<stdio.h>
#include<string.h>
#include<stdlib.h>

void menu(){
       system("cls");
       printf(" _____________________________________________________________________________\n");
       printf("|                                                                             |\n");       
       printf("|      _________________________________________________________________      |\n");
       printf("|     |                    GRAFOS - CONTROLE DE VOO                     |     |\n");
       printf("|     |_________________________________________________________________|     |\n");
       printf("|                                                                             |\n");
       printf("|                                                                             |\n");
       printf("|                         |--------->MENU<--------|                           |\n");
       printf("|                         |_______________________|                           |\n");
       printf("|                         | 1 - INSERIR 1 CIDADE  |                           |\n");
       printf("|                         | 2 - INSERIR 10 CIDADES|                           |\n");
       printf("|                         | 3 - EDITAR CIDADES    |                           |\n");
       printf("|                         | 4 - EXIBIR CIDADES    |                           |\n");
       printf("|                         | 5 - INSERIR VOO       |                           |\n");
       printf("|                         | 6 - EDITAR  VOO       |                           |\n");
       printf("|                         | 7 - EXIBIR VOO        |                           |\n");
       printf("|                         | 8 - BUSCAR VOO        |                           |\n");
       printf("|                         | 9 - FINALIZAR         |                           |\n");              
       printf("|                         |_______________________|                           |\n");
       printf("|                                                                             |\n");
       printf("|                                                                             |\n");
       printf("|                                                                             |\n");
       printf("|_____________________________________________________________________________|\n");              
       printf("                             INFORME SUA OPCAO: ");
}

void fim(){
      printf("\n _____________________________________________________________________________");
      printf("\n|                     VOCE OPTOU POR FINALIZAR O PROGRAMA!                    |");
      printf("\n|                      PRESSIONE QUALQUER TECLA PARA SAIR                     |");
      printf("\n|_____________________________________________________________________________|\n");
}

main(){
       int i,j,k=0,valida[10];
       char cidade[10][40];
       int resp;
       char aux [10];
       char pesquisa [40];
       int opcao, result;
       int cont;
       char vai[40];
       char volta[40];
       char partida[10][40];
       char chegada[10][40];
       float distX[10];
       float distY[10];
	   int viagem;
       int num[10];
       int edita;
       int quantidade; 
       int invalido;     
      
       
       result = 0;
       quantidade = 0;
       viagem = 0;
       resp = 1;
       opcao = 0;
       cont = 0;
     
       
       for (i =0; i<10; i++){
           fflush(stdin);
            strcpy(cidade[i], " - ");
            strcpy(partida[i], " - ");
            strcpy(chegada[i], " - ");
            num[i] = 0;
            valida[i] = i+1;
       }
      
       
   //    inicio:
       while (resp == 1)  { 
              menu();
              scanf("%d",&opcao); 
              invalido = 0;
              for (i=0; i<10; i++){
                     if (opcao != valida[i]){
                          invalido++;
                     }
                     if (invalido == 10){
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                       OPCAO INVALIDA! TENTE NOVAMENTE                       |");
                          printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                          printf("\n|_____________________________________________________________________________|\n");
                          getchar();                            
                     }
              }             
              switch (opcao){
                     
                     case 1:
                          system("cls");
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                   VOCE ESCOLHEU INSERIR UMA NOVA CIDADE!                    |");
                          printf("\n|_____________________________________________________________________________|\n");
                          printf("\n\n     >> ENTRE COM A CIDADE A SER CADASTRADA E SUA COORDENADA X E Y: ");
                          fflush(stdin);
                          fgets(cidade[cont], 40, stdin);
                          fflush(stdin);
                          scanf("%f", &distX[cont]);
                          fflush(stdin);
						  scanf("%f", &distY[cont]);
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                        CIDADE CADASTRADA COM SUCESSO!                       |");
                          printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                          printf("\n|_____________________________________________________________________________|\n");
                          cont++;
                          getchar();                          
                     break;       
                     
                     case 2:
                          system("cls");
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                   VOCE ESCOLHEU INSERIR 10 NOVAS CIDADES!                   |");
                          printf("\n|_____________________________________________________________________________|\n");
                          printf("\n");
                          for (i=0; i<10; i++){
                              printf("\n     >> ENTRE COM A CIDADE NUMERO %d: ",i+1);
                              fflush(stdin);
                              fgets(cidade[i],40, stdin);
                          } 
                          for (i=0; i<9; i++){
                              for (j=i+1; j<10; j++){
                                   if (strcmp (cidade[i], cidade[j])>0){
                                       strcpy(aux, cidade[i]);
                                       strcpy(cidade[i],cidade[j]);
                                       strcpy(cidade[j], aux);
                                    }
                               }
                          }
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                 AS 10 CIDADES FORAM CADASTRADAS COM SUCESSO!                |");
                          printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                          printf("\n|_____________________________________________________________________________|\n");
                          cont = 2;
                          getchar();           
                     break;    
                     
                     case 3:
                          system("cls");
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                      VOCE ESCOLHEU EDITAR UMA CIDADE!                       |");
                          printf("\n|_____________________________________________________________________________|\n\n");
                          printf("\n     >> A SEGUIR A LISTA DAS CIDADES CADASTRADAS\n");
                          printf("\n\t\t\tNUMERO\t\t\tCIDADE\n\n");
                          for (i=0; i<10; i++){
                               printf("\t\t\t >>%d\t\t\t >>%s\n",i+1,cidade[i]);
                          }
                          printf("\n     >> INDIQUE O NUMERO DA CIDADE QUE DESEJA EDITAR: ");
                          scanf("%d",&i);
                          printf("\n     >> VOCE ESCOLHEU EDITAR A CIDADE: %s",cidade[i-1]);
                          printf("\n     >> AGORA ENTRE COM A NOVA CIDADE: ");
                          fflush(stdin);
                          fgets(cidade[i-1],40,stdin);
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                     A CIDADE FOI ALTERADA COM SUCESSO                       |");
                          printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                          printf("\n|_____________________________________________________________________________|\n");
                          getchar();    
                     break;
                     
                     case 4:
                          system("cls");
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                VOCE ESCOLHEU EXIBIR AS CIDADES CADASTRADAS                  |");
                          printf("\n|_____________________________________________________________________________|\n\n");
                          printf("\n\n\t\t        LISTA DAS ROTAS CADASTRADAS\n");
                          printf("\t\t___________________________________________\n\n");
                          for (i = 0; i < 10; i++) {
	                           printf("\t\t NUMERO >> %d\t\t\tCIDADE >> %s\n",i+1, cidade[i]);
	                           printf("\t\tCOORD X >>%.2f\t\tCOORD Y >>%.2f\n", distX[i], distY[i]);
	                           printf("\n\t\t___________________________________________\n\n");
                    	  }
                          printf("\n _____________________________________________________________________________");
                          printf("\n|                     VISUALIZACAO EFETUADA COM SUCESSO                       |");
                          printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                          printf("\n|_____________________________________________________________________________|\n");
                          getchar();   getchar();  
                     break;                    
                     
                     case 5:
                           if (cont < 2){
                                printf("\n _____________________________________________________________________________");
                                printf("\n| IMPOSSIVEL INSERIR ROTA DE VOO, DEVE HAVER PELO MENOS 2 CIDADES CADASTRADAS |");
                                printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                                printf("\n|_____________________________________________________________________________|\n");
                                getchar();   getchar();
                           }
                           else{             
                                invalido:
                                system("cls");
                                printf("\n _____________________________________________________________________________");
                                printf("\n|                   VOCE ESCOLHEU INSERIR UMA ROTA DE VOO                     |");
                                printf("\n|_____________________________________________________________________________|\n\n");
                                printf("\n\n\t\t        LISTA DAS ROTAS CADASTRADAS\n");
                                printf("\t\t___________________________________________\n\n");
                                for (i=0; i<10; i++){
                                     printf("\t\t NUMERO >> %d\t\t\tCIDADE >> %s\n",i+1,cidade[i]);
                                     printf("\n\t\t___________________________________________\n\n");  
                                }
                                printf("\n     >> ENTRE COM A CIDADE DE PARTIDA: ");
                                fflush(stdin);
                                fgets(vai,40, stdin);
                                strcpy(partida[viagem] , vai);
                                for (i=0; i<10; i++){
                                     if (strcmp (vai, cidade[i])==0){
                                          i = 10;
                                     }
                                     else{
                                          if (i == 9){
                                               printf("\n _____________________________________________________________________________");
                                               printf("\n|   IMPOSSIVEL INSERIR ROTA DE VOO, A CIDADE INFORMADA NAO ESTA CADASTRADA!   |");
                                               printf("\n|                   PRESSIONE UMA TECLA E TENTE NOVAMENTE                     |");
                                               printf("\n|_____________________________________________________________________________|\n");
                                               getchar();  
                                               goto invalido;
                                            return 0;
                                          }
                                     }
                                }    
                                                             
                                printf("\n     >> AGORA, ENTRE COM A CIDADE DE CHEGADA: ");
                                fflush(stdin);
                                fgets(volta,40, stdin);
                                strcpy(chegada[viagem] , volta);
                                for (i=0; i<10; i++){
                                     if (strcmp (volta, cidade[i])==0){
                                          i = 10;
                                     }
                                     else{
                                          if (i == 9){
                                               printf("\n _____________________________________________________________________________");
                                               printf("\n|   IMPOSSIVEL INSERIR ROTA DE VOO, A CIDADE INFORMADA NAO ESTA CADASTRADA!   |");
                                               printf("\n|                   PRESSIONE UMA TECLA E TENTE NOVAMENTE                     |");
                                               printf("\n|_____________________________________________________________________________|\n");
                                               getchar();  
                                               goto invalido;
                                          }
                                     }
                                }
                                
                                printf("\n     >> POR FIM, INFORME O NUMERO DO VOO: ");                     
                                scanf("%d",&num[viagem]);
                                printf("\n _____________________________________________________________________________");
                                printf("\n|                     ROTA DE VOO CADASTRADA COM SUCESSO                      |");
                                printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                                printf("\n|_____________________________________________________________________________|\n");
                                viagem ++;
                                getchar();
                           }                                 
                     break;
                     
                     case 6:
                           if (cont < 2){
                                printf("\n _____________________________________________________________________________");
                                printf("\n| IMPOSSIVEL INSERIR ROTA DE VOO, DEVE HAVER PELO MENOS 2 CIDADES CADASTRADAS |");
                                printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                                printf("\n|_____________________________________________________________________________|\n");
                                getchar();  
                           }
                           else{
                                system("cls");
                                printf("\n _____________________________________________________________________________");
                                printf("\n|                   VOCE ESCOLHEU EDITAR UMA ROTA DE VOO!                     |");
                                printf("\n|_____________________________________________________________________________|\n\n");
                                printf("\n\t\t        LISTA DAS ROTAS CADASTRADAS\n");
                                printf("\t\t___________________________________________\n");
                                for (i=0; i<10; i++){
                                     printf("\t\t CONTROLE >> %d\t\t\tVOO >> %d\n\t\t\t\tPARTIDA  >> %s\n\t\t\t\tCHEGADA  >> %s\n",i+1,num[i],partida[i],chegada[i]);
                                     printf("\n\t\t___________________________________________\n");
                                }
                                printf("\n\n     >> INFORME O CONTROLE DO VOO A SER EDITADO: ");  
                                scanf("%d",&edita);
                                printf("\n     >> VOCE ESCOLHEU EDITAR O VOO: %d",num[edita-1]);
                                
                                edite:
                                printf("\n\n     >> ENTRE COM A NOVA CIDADE DE PARTIDA: ");
                                fflush(stdin);
                                fgets(vai,40, stdin);
                                strcpy(partida[edita-1] , vai);
                                for (i=0; i<10; i++){
                                     if (strcmp (vai, cidade[i])==0){
                                          i = 10;
                                     }
                                     else{
                                          if (i == 9){
                                               printf("\n _____________________________________________________________________________");
                                               printf("\n|   IMPOSSIVEL INSERIR ROTA DE VOO, A CIDADE INFORMADA NAO ESTA CADASTRADA!   |");
                                               printf("\n|                   PRESSIONE UMA TECLA E TENTE NOVAMENTE                     |");
                                               printf("\n|_____________________________________________________________________________|\n");
                                               getchar();  
                                               goto edite;
                                          }
                                     }
                                }    
                                                             
                                printf("\n     >> AGORA, ENTRE COM A NOVA CIDADE DE CHEGADA: ");
                                fflush(stdin);
                                fgets(volta,40, stdin);
                                strcpy(chegada[edita-1] , volta);
                                for (i=0; i<10; i++){
                                     if (strcmp (volta, cidade[i])==0){
                                          i = 10;
                                     }
                                     else{
                                          if (i == 9){
                                               printf("\n _____________________________________________________________________________");
                                               printf("\n|   IMPOSSIVEL INSERIR ROTA DE VOO, A CIDADE INFORMADA NAO ESTA CADASTRADA!   |");
                                               printf("\n|                   PRESSIONE UMA TECLA E TENTE NOVAMENTE                     |");
                                               printf("\n|_____________________________________________________________________________|\n");
                                               getchar();  
                                               goto edite;
                                          }
                                     }
                                }
                                
                                printf("\n     >> POR FIM, INFORME O NOVO NUMERO DO VOO: ");                     
                                scanf("%d",&num[edita-1]);
                                printf("\n _____________________________________________________________________________");
                                printf("\n|                       ROTA DE VOO EDITADA COM SUCESSO                       |");
                                printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                                printf("\n|_____________________________________________________________________________|\n");
                                getchar();
                         
                         }                        
                         
                     break;
                     
                     case 7:
                           system("cls");
                           printf("\n _____________________________________________________________________________");
                           printf("\n|                  VOCE ESCOLHEU VISUALIZAR AS ROTAS DE VOO!                  |");
                           printf("\n|_____________________________________________________________________________|\n\n");
                           printf("\n\t\t        LISTA DAS ROTAS CADASTRADAS\n");
                           printf("\t\t___________________________________________\n\n");
                           for (i=0; i<10; i++){
                                printf("\t\t CONTROLE >> %d\t\t\tVOO >> %d\n\t\t\t\tPARTIDA  >> %s\n\t\t\t\tCHEGADA  >> %s\n",i+1,num[i],partida[i],chegada[i]);
                                printf("\n\t\t___________________________________________\n\n");
                           }
                           printf("\n _____________________________________________________________________________");
                           printf("\n|                   AS ROTA FORAM VISUALIZADAS COM SUCESSO!                   |");
                           printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                           printf("\n|_____________________________________________________________________________|\n");
                           getchar(); getchar();
                     break;
                     
                    case 8:
                          result = 0;
                          if (cont < 2){
                                printf("\n _____________________________________________________________________________");
                                printf("\n|  IMPOSSIVEL BUSCAR ROTA DE VOO, DEVE HAVER PELO MENOS 2 CIDADES CADASTRADAS |");
                                printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                                printf("\n|_____________________________________________________________________________|\n");
                                getchar();  
                          }
                          else{
                               system("cls");
                               printf("\n _____________________________________________________________________________");
                               printf("\n|                VOCE ESCOLHEU BUSCAR UMA ROTA DE VOO POR CIDADE              |");
                               printf("\n|_____________________________________________________________________________|\n\n");
                               printf("\n\n\t\t        LISTA DAS ROTAS CADASTRADAS\n");
                               printf("\t\t___________________________________________\n\n");
                               for (i=0; i<10; i++){
                                    printf("\t\t NUMERO >> %d\t\t\tCIDADE >> %s\n",i+1,cidade[i]);
                                    printf("\n\t\t___________________________________________\n\n");  
                               }
                               printf("\n     >> AGORA, ENTRE COM O NUMERO DA CIDADE A SER BUSCADA NAS ROTAS: ");                           
                               fflush(stdin);
                               fgets(pesquisa,40, stdin); 
                               printf("\n\n\t\t LISTA DAS ROTAS CADASTRADAS PARA A CIDADE\n");
                               printf("\t\t___________________________________________\n");                         
                               for (i=0; i<10; i++){                            
                                   if (strcmp (pesquisa, partida[i])==0){                                   
                                        printf("\t\t CONTROLE >> %d\t\t\tVOO >> %d\n\t\t\t\tPARTIDA  >> %s\n\t\t\t\tCHEGADA  >> %s\n",i+1,num[i],partida[i],chegada[i]);
                                        printf("\n\t\t___________________________________________\n\n");                              
                                        quantidade++;
                                        result = 1;
                                   }                                  
                                   if (strcmp (pesquisa, chegada[i])==0){                                  
                                        printf("\t\t CONTROLE >> %d\t\t\tVOO >> %d\n\t\t\t\tPARTIDA  >> %s\n\t\t\t\tCHEGADA  >> %s\n",i+1,num[i],partida[i],chegada[i]);
                                        printf("\n\t\t___________________________________________\n\n");                              
                                        quantidade++;
                                        result = 1;                                  
                                   } 
                                   if ((i == 9)&&(result!= 1)){
                                        printf("\n\t\t                -  ZERO  -                 \n"); 
                                        printf("\n\t\t NAO HA VOOS CADASTRADOS PARA ESSA CIDADE\n\n\n");
                                   }           
                               } 
                                           
                               printf("\n _____________________________________________________________________________");
                               printf("\n|    BUSCAS REALIZADAS COM SUCESSO, DESCULPE SE NA HA VOOS PARA SUA CIDADE    |");
                               printf("\n|                   PRESSIONE QUALQUER TECLA PARA CONTINUAR                   |");
                               printf("\n|_____________________________________________________________________________|\n");
                               getchar(); getchar();
                          }
                     break;
                     
                     case 9:
                          fim();
                          resp = 2;
                          getchar();
                     break;
                     
                     
                }  
                 
       }
       getchar();
             
}
