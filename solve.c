#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char* code(char* s) {
    int n=(int)sqrt(strlen(s))+(((int)(sqrt(strlen(s))))!=(sqrt(strlen(s)))),length = n*(n+1),i,y;
    char *new = (char*) calloc((length),sizeof(char));
    for(i=0;i<n;i++)
    {
        for(y=0;y<n;y++)
        {
            new[i*(n+1)+y] = 10+pow(s[(n-1-y)*n+i]-10,(n-1-y)*n+i<strlen(s));
        }
        new[i*(n+1)+y] = '\n';
    }
    new[(i-1)*(n+1)+y] = '\0';
    return new;
}

char* decode(char* s) {
    int n=0,i;
    char *new ;
    while(s[++n]!='\n'){}
    new = (char *) calloc(n*n,sizeof(char));
    for(i=strlen(s)-1;i>=0;i--)
    {
        new[(i)/(n+1)+((n-1-((i)%(n+1)))*n)] = s[i];
    }
    n=strlen(new);
    while(new[--n]==11){}
    new[n+1]='\0';
    return new;
}




void main()
{
    char *s = (char*) malloc(58*sizeof(char));
    
    strcpy(s,"I.was.going.fishing.that.morning.at.ten.o'clock\0");
    printf("\n----------------\n%s",code(s));
    printf("\n----------------\n%s",decode(code(s)));
    printf("\n----------------\nc.nhsoI\nltiahi.\noentinw\ncng.nga\nk..mg.s\n%coao.f.\n%c'trtig",11,11);
}




