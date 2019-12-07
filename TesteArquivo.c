#include<stdio.h>

int main(void)
{
    printf("\n\n");
    printf("\n\t\t\t");
    printf("%c", 201);
    for(int i=0; i<48; i++)
    {
        printf("%c", 205);
    }
    printf("%c", 187);
    printf("\n\t\t\t%c          VICTOR HUGO BONATTO DA SILVA          %c", 186, 186);
    printf("\n\t\t\t");
    printf("%c", 200);
    for(int i=0; i<48; i++)
    {
        printf("%c", 205);
    }
    printf("%c",188);
    printf("\n\t\t\t");
    printf("%c", 201);
    for(int i=0; i<48; i++)
    {
        printf("%c", 205);
    }
    printf("%c",187);
    printf("\n\t\t\t%c                   EXERC%cCIOS                   %c", 186,214,186);
    printf("\n\t\t\t");
    printf("%c", 200);
    for(int i=0; i<48; i++)
    {
        printf("%c", 205);
    }
    printf("%c",188);

    FILE *fp;
    char s[100];

    puts("nome do arquivo: ");
    fgets(s,100,stdin);

    fp=fopen(s,"r");

    if(fp==NULL)
    {
        printf("\n\tNAO FOI POSSIVEL ABRIR O ARQUIVO!\n");

    }
    else
    {
        printf("\n\tARQUIVO %s ABERTO!!\n", s);
        fclose(fp);
    }





    getchar();
    return 0;
}
