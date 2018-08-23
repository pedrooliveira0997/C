#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemplo de struct
struct Aluno{
  char nome[20];
  char matricula[50];
  char email [50];
};


int main(){
	

  	struct Aluno *lista;

  int tam; //tamanho do vetor
  int n;   //Numero de contatos cadastrados
  int opc; //Opcao do menu selecionada.
  int i;
 
    n = 0;    // arquivo inicialmente vazio.
    tam = 10; //tamanho inicial

    lista = (struct Aluno *)malloc(sizeof(struct Contato)*tam); // aloca??o dinamica da estrutura

  do{
  
    //Exibe o menu de opcoes.
    printf("\n---- Menu ----\n");
    printf("1 - Cadastrar contato\n");
    printf("2 - Exibir contatos\n");
    printf("3 - Eliminar contato\n");
    printf("4 - Sair do sistema\n\n");
    printf("Escolha uma opcao:\n");
    //Le a opcao selecionada.
    scanf("%d",&opc);

    if(opc==1){
      //Inserir novo contato no final do vetor.

      if(n==tam){
	//Capacidade esgotada, devemos aumentar o
	//vetor usando "realloc" (ex: dobrar capacidade).
	    tam *= 2;
        agenda = (struct Contato*)realloc(agenda, sizeof(struct Contato)*tam);
      }
      //Leitura dos dados.
      printf("Digite o nome: ");
      scanf(" %s",lista[n].nome);
      printf("Digite o email: ");
      scanf(" %s",agenda[n].email);
      printf("Digite o telefone: ");
      scanf("%d",&agenda[n].telefone);
      n++; //Incrementa numero de registros cadastrados.
    }
    else if(opc==2){
      //Exibe todos contatos cadastrados.
      for(i=0; i<n; i++){
	    printf("Contato = %d\n",i+1);
        printf("Nome: %s\n",agenda[i].nome);
        printf("email: %s\n",agenda[i].email);
	    printf("Telefone: %d\n",agenda[i].telefone);

	    printf("\n");
      }
    }
    else if(opc==3){
      //Apaga um contato
      char nome[100];
      int j;
      printf("\nDigite o nome a ser eliminado: ");
      scanf("%s",nome);
      for(i=0; i<n; i++){
             if (strcmp(agenda[i].nome, nome)==0){
             	for(j=i+1; j<n; j++){
                         strcpy(agenda[j-1].nome,agenda[j].nome);
                         agenda[j-1].telefone=agenda[j].telefone;
                         strcpy(agenda[j-1].email,agenda[j].email);

                 }
               n--;
               i=n;
              }
      }
    }
    //Enquanto a opcao de saida nao for escolhida,  continua mostrando menu.
  }while(opc!=4);

  //Libera a memoria alocada do vetor.
  free(agenda);

  return 0;
}
