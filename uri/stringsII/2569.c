#include <stdio.h>
#include <string.h>

void retiraZero(const char *operando, char *operandoSem7){

	unsigned short i = 0;
	unsigned short j = 0;

	while (operando[i])
	{

		if (operando[i] == '7')
			operandoSem7[j++] = '0';
		else
			operandoSem7[j++] = operando[i];

		i++;
	}

	operandoSem7[j] = '\0';

}

long int StringParaInt(char *str){

	long int i, multiplicador = 1, numero = 0;

	for(i = strlen(str) - 1; i >= 0; i--, multiplicador *= 10)
		numero +=  (str[i] - 48) * multiplicador;

	return numero;
}

void main (){
	char n1[11], n2[11], resultCom7[100];
	char n1Sem7[11], n2Sem7[11], resultSem7[100];
	long int result;
	char op;

	scanf("%s %c %s", n1, &op, n2);

 	retiraZero(n1, n1Sem7);
	retiraZero(n2, n2Sem7);

	if (op == '+')
		result = StringParaInt(n1Sem7) + StringParaInt(n2Sem7);
	else if (op == 'x')
		result = StringParaInt(n1Sem7) * StringParaInt(n2Sem7);

	sprintf(resultCom7, "%ld", result);

	retiraZero(resultCom7, resultSem7);
	printf("%ld\n", StringParaInt(resultSem7));
}
