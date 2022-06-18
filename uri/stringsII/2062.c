#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t,x,u;
    char s[51];
    scanf("%d",&t);
    
    for(x=0;x<t;x++){
        scanf("%s",s);
        for(u=0;u<strlen(s)-1;u++){
            //letras minúsculas convertidos em letras maiúsculas.
            toupper(s[u]);
        }
        if(strlen(s)==3){
            if(s[0]=='U'&&s[1]=='R'){
                printf("URI");
            }
            else if(s[0]=='O'&&s[1]=='B'){
                printf("OBI");
            }
            else{
                printf("%s",s);
            }
        }
        else{
            printf("%s",s);
        }
        if(x<t-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}