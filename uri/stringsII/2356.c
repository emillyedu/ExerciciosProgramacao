#include <stdio.h>
#include <string.h>

int main(){
    char d[101],s[101],dc[101];
    int x,y,z,r;
    
    while(scanf("%s %s",d,s)!=EOF){
        for(x=0;x<strlen(d);x++){
            for(y=0,z=x;y<strlen(d);y++,z++){
                dc[y]=d[z];
            }
            dc[y]='\0';
            //compara cadeias terminadas em nulo
            if(strncmp(s,dc,strlen(s))==0){
                r=1;
                break;
            }else{
                r=0;
            }
        }
        if(r==1)
            printf("Resistente\n");
        else
            printf("Nao resistente\n");
            r=0;
    }
    return 0;
}