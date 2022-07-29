#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
using namespace std;
int main(int argc, char const *argv[]){
setlocale(LC_ALL, "portuguese");
    
    int linha,coluna;
    int matriz[2][2];
    
    for (linha=0; linha<2; linha++)
    {
        for (coluna=0; coluna<2;coluna++)
        {
            printf("Digitar os valores da matriz para: linha %d, coluna %d: ",linha+1,coluna+1); 
            scanf("%d", &matriz[linha][coluna]);
            
        } }
        printf("\nVeja a sua Matriz\n\n");
            
        for (linha=0;linha<2;linha++) {
            for (coluna=0;coluna<2;coluna++) printf("%d\t",matriz[linha][coluna]);
            printf("\n\n");  
            
        }
            system("pause");
            return 0;
}

