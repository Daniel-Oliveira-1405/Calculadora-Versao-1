#include<stdio.h>

int main(){
    int n1, n2;
    char op;
    printf("Digite a operacao a ser efetuada: ");
    scanf("%d%c%d",&n1,&op,&n2);
    switch(op){
        case '+':
            printf("\n%d + %d = %d\n",n1,n2,n1+n2);
            break;
        case '-':
            printf("\n%d - %d = %d\n",n1,n2,n1-n2);
            break;
        case 'x':
            printf("\n%d x %d = %d\n",n1,n2,n1*n2);
            break;
        case '/':
            printf("\n%d : %d = %d e resto %d\n",n1,n2,n1/n2,n1%n2);
            printf("Divisao exata: %f\n",(float)n1/n2);
            break;
    }
    getchar();
}
