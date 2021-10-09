//jogo do maior


#include <stdio.h>

int main (){

	int t, a, b, pA = 0, pB = 0;

	while (1){
	    scanf("%d", &t);

		if (t == 0)
			break;

		while (t--){
			scanf("%d %d", &a, &b);

            //se a for maior que b, some um aos pontos de a
			if (a > b)
            //pontos de A somados
				pA++;
			else if (b > a)
            //pontos de b somados
				pB++;
            else if (a==b)
                pA+=0;
		}
		printf("%d %d\n", pA, pB);
        //para as proximas repetições, considere pa=0 e pb=0
		pA = 0;
		pB = 0;

	}
}
