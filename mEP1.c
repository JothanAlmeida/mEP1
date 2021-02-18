#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,k; //"n" � o tamanho do array e "k" o n�mero de dias.
    int *v; //Ponteiro para armazenar os valores.
    int i,j=0,soma=0,soma2=0; //Vari�veis auxiliares.

    scanf("%d", &n); //Leitura do valor de "n".

    *v=malloc(n*sizeof(int)); //Alocando a mem�ria necess�ria para armazenar os valores.
    if(v == NULL){ //Verificar se tem espa�o para ser alocado.
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
