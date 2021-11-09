#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char senha[100];
    int i, cont, indicador;

    while (scanf("%[^\n]%*c", senha) != EOF) {

        indicador = 1;
        cont = 0;

        //se for menor que 6 ou maior que 32 caracteres
        if (strlen(senha) < 6 || strlen(senha) > 32)
        	indicador = 0;
        else {
        	for (i = 0; i < strlen(senha); i++) {
                //se tiver apenas letras
        		if (!isalpha(senha[i]) && !isdigit(senha[i])) {
        			indicador = 0;
        			break;
        		}
        	}

            //se o indicador ainda for 1
        	if (indicador) {
	        	for (i = 0; i < strlen(senha); i++) {
                    //se uma letra for maiuscula e tiver uma sequencia de letras minusculas
	        		if (islower(senha[i]) && isalpha(senha[i])) {
	        			cont++;
	        			break;
	        		}
	        	}
	        	for (i = 0; i < strlen(senha); i++) {
                    //se todas forem maiuculas e tiver uma letra minuscula
	        		if (isupper(senha[i]) && isalpha(senha[i])) {
	        			cont++;
	        			break;
	        		}
	        	}
	        	for (i = 0; i < strlen(senha); i++) {
                    //se um digito for número
	        		if (isdigit(senha[i])) {
	        			cont++;
	        			break;
	        		}
	        	}
	        }
        }
        printf("Senha %svalida.\n", (indicador == 0 || cont!=3? "in" : ""));
    }
    return 0;
}