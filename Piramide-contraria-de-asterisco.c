#include <stdio.h>
char main()
{
    int linhas, i, j;
    printf("Digite a quantidade de linhas que deseja em sua pirâmide: ");
    scanf("%d", &linhas);

    for(i = 1; i <= linhas; i++){
        for(j = linhas; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
}