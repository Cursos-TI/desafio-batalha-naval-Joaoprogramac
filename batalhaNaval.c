#include <stdio.h>

int main() {
    
    char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro [10][10]; //Representação do tabuleiro

    for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
    
    tabuleiro[i][j] = 0;
   
}
}    
    
printf("tabuleiro batalha naval"); // IMPRIMINDO O TABULEIRO

for (int j = 0; j < 10; j++){

    printf("%c ", linha[j]);
}

printf("\n"); // NAVIO vertical e horizontal

for (int i = 1; i < 4; i++){

    tabuleiro[i][1] = 3;

}

for (int j = 4; j < 7; j++)
  {
    
    tabuleiro[4][j] = 3;
}

for (int i = 0; i < 10; i++){

    printf("%2d ", i + 1); //número da linha

    for (int j = 0; j < 10; j++){

        printf("%d ", tabuleiro[i][j]); // Valor do tabuleiro
}

printf("\n"); // linha da matriz

}

    return 0;
}
