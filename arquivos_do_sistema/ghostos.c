#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int main()
{
	int a = 1;
	int b = 1;
	int soma;
	soma = a + b;
	
	
    printf("A soma de %d e %d é: %d\n", a, b, soma);
    fflush(stdout); 
    
    sleep(1); 
    printf("Qual a importancia disso?\n");
        fflush(stdout); 
    
    sleep(2); 
    
     #ifdef _WIN32
        system("cls"); 
    #else
        system("clear"); 
    #endif
    
    printf("Nenhuma");
    
	return 0;
}
