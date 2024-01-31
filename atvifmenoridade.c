#include <stdio.h>
int main(){
    int idade;
    printf("Digite a idade:\n");
    scanf("%i", &idade);
    if (idade < 18){
        printf("Menor de idade");
    }
return 0;
}
