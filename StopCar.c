#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	// Fun��o Autentica��o do usu�rio
	void fc_validarUsuario(){
		
		// Declara��o de vari�vel 
		char usuarioMestre[20], usuario[20];
		int  senhaMestre = 102030, senha;
		
		// Fun��o strcpy - biblioteca string.h
		strcpy(usuarioMestre,"Mestre");
		
		// Interface Console
		printf("----------------------------\n");
		printf("-> ESTACIONAMENTO StopCAR <-\n");
		printf("----------------------------\n");
		printf("  Autentica��o do Usu�rio   \n");
		printf("----------------------------\n");
		printf("-> Informe Usu�rio: ");
		scanf("%s",&usuario);
		printf("-> Informe Senha:   ");		
		scanf("%d",&senha);
		
		// Validar Usu�rio
		if((strcmp(usuarioMestre,usuario) != 0) && (senhaMestre == senha)) 
		{
			// Limpar Tela
			system("cls");
			
			// Apresentar Menu
			fc_mostrarMenu();
		}
		else
			{	
				// Sa�da de dados
				printf("----------------------------\n");
				printf("-> ATEN��O: Usu�rio e/ou Senha INCORRETOS !!!\n");
				printf("-> O programa StopCar ser� finalizado...\n");
				printf("----------------------------\n");
			}
				
	}

	// Fun��o Menu do Sistema
	void fc_mostrarMenu(){
		
		// Declara��o de vari�vel
		int opcao; 
		
		// Interface Console
		printf("----------------------------\n");
		printf("    MENU DE OPERA��ES       \n");
		printf("----------------------------\n");
		printf("[ 0 ] - Registro Usu�rio    \n");
		printf("[ 1 ] - Entrada de Ve�culo  \n");
		printf("[ 2 ] - Sa�da de Ve�culo    \n");
		printf("[ 3 ] - Configura��es       \n");
		printf("[ 4 ] - Relat�rios          \n");
		printf("[ 5 ] - Sair                \n");
		printf("----------------------------\n");
		printf("-> Informe Op��o: ");
		scanf("%d",&opcao);
		
		// Validar op��o
		if(opcao<0 || opcao>5)
		{
			// Sa�da de dados
			printf("----------------------------\n");
			printf("-> ATEN��O: Op��o INCORRETA !!!\n");
			printf("-> O programa StopCar ser� finalizado...\n");
			printf("----------------------------\n");		
		}
		else{
				switch(opcao)
				{
					case 0: {
						
								system("cls");
								printf("-> Criar a Fun��o [ 0 ] - Registro Usu�rio \n");
								fc_mostrarMenu();
								
								break;
							}
							
					case 1: {
								printf("-> Criar a Fun��o [ 1 ] - Entrada de Ve�culo \n");
								fc_mostrarMenu();
								break;
							}
													
					case 2: {
								printf("-> Criar a Fun��o [ 2 ] - Sa�da de Ve�culo \n");
								fc_mostrarMenu();
								break;
							}
					
					case 3: {
								printf("-> Criar a Fun��o [ 3 ] - Configura��es \n");
								fc_mostrarMenu();
								break;
							}

					case 4: {
								printf("-> Criar a Fun��o [ 4 ] - Relat�rios \n");
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
	
	// Fun��o Autentica��o do usu�rio
	fc_validarUsuario();
	
	// Console pause
    system("PAUSE");
    return 0;

}
