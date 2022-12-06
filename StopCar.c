#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	// Função Autenticação do usuário
	void fc_validarUsuario(){
		
		// Declaração de variável 
		char usuarioMestre[20], usuario[20];
		int  senhaMestre = 102030, senha;
		
		// Função strcpy - biblioteca string.h
		strcpy(usuarioMestre,"Mestre");
		
		// Interface Console
		printf("----------------------------\n");
		printf("-> ESTACIONAMENTO StopCAR <-\n");
		printf("----------------------------\n");
		printf("  Autenticação do Usuário   \n");
		printf("----------------------------\n");
		printf("-> Informe Usuário: ");
		scanf("%s",&usuario);
		printf("-> Informe Senha:   ");		
		scanf("%d",&senha);
		
		// Validar Usuário
		if((strcmp(usuarioMestre,usuario) != 0) && (senhaMestre == senha)) 
		{
			// Limpar Tela
			system("cls");
			
			// Apresentar Menu
			fc_mostrarMenu();
		}
		else
			{	
				// Saída de dados
				printf("----------------------------\n");
				printf("-> ATENÇÃO: Usuário e/ou Senha INCORRETOS !!!\n");
				printf("-> O programa StopCar será finalizado...\n");
				printf("----------------------------\n");
			}
				
	}

	// Função Menu do Sistema
	void fc_mostrarMenu(){
		
		// Declaração de variável
		int opcao; 
		
		// Interface Console
		printf("----------------------------\n");
		printf("    MENU DE OPERAÇÕES       \n");
		printf("----------------------------\n");
		printf("[ 0 ] - Registro Usuário    \n");
		printf("[ 1 ] - Entrada de Veículo  \n");
		printf("[ 2 ] - Saída de Veículo    \n");
		printf("[ 3 ] - Configurações       \n");
		printf("[ 4 ] - Relatórios          \n");
		printf("[ 5 ] - Sair                \n");
		printf("----------------------------\n");
		printf("-> Informe Opção: ");
		scanf("%d",&opcao);
		
		// Validar opção
		if(opcao<0 || opcao>5)
		{
			// Saída de dados
			printf("----------------------------\n");
			printf("-> ATENÇÃO: Opção INCORRETA !!!\n");
			printf("-> O programa StopCar será finalizado...\n");
			printf("----------------------------\n");		
		}
		else{
				switch(opcao)
				{
					case 0: {
						
								system("cls");
								printf("-> Criar a Função [ 0 ] - Registro Usuário \n");
								fc_mostrarMenu();
								
								break;
							}
							
					case 1: {
								printf("-> Criar a Função [ 1 ] - Entrada de Veículo \n");
								fc_mostrarMenu();
								break;
							}
													
					case 2: {
								printf("-> Criar a Função [ 2 ] - Saída de Veículo \n");
								fc_mostrarMenu();
								break;
							}
					
					case 3: {
								printf("-> Criar a Função [ 3 ] - Configurações \n");
								fc_mostrarMenu();
								break;
							}

					case 4: {
								printf("-> Criar a Função [ 4 ] - Relatórios \n");
								fc_mostrarMenu();
								break;
							}
							
					case 5: {
								printf("[ 5 ] - Sair \n");
								break;
							}							
				}
			}
	}


int main() {
	
	// Seta idioma
	setlocale(LC_ALL, "Portuguese");
	
	// Função Autenticação do usuário
	fc_validarUsuario();
	
	// Console pause
    system("PAUSE");
    return 0;

}
