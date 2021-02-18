#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,k; //"n" é o tamanho do array e "k" o número de dias.
    int *v; //Ponteiro para armazenar os valores.
    int i,j=0,soma=0,soma2=0; //Variáveis auxiliares.

    scanf("%d", &n); //Leitura do valor de "n".

    *v=malloc(n*sizeof(int)); //Alocando a memória necessária para armazenar os valores.
    if(v == NULL){ //Verificar se tem espaço para ser alocado.
        printf("Sem memoria\n");
        exit(1);
    }

    scanf("%d", &k); //Leitura do valor de "k".

    for(i=0;i<n;i++) //Ler os valores e armazenar.
        scanf("%d", &v[i]);

    do{
        for(i=j;i<(k+i);i++){
            soma2+=v[i];
        }
        if(soma2>soma){
            soma=soma2;
            soma2=0;
        }
        j++;
    }while(j<n);

    printf("%d", soma);
    printf("\n");

    free(v);
}
