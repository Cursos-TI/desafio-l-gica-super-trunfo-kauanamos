#include <stdio.h>

int main() {

    // Grupo 01
    char país1[20] = "Colombia";
    int população1 = 100;
    int área1 = 5;
    double pib1 = 2; 
    int pontos_turísticos1 = 200;
    char codigo1[5] = "A1";

    // Grupo 02
    char país2[20] = "França";
    int população2 = 500;
    int área2 = 7;    
    double pib2 = 6;  
    int pontos_turísticos2 = 500;
    char codigo2[5] = "B01";

    // Comparando as populações
    if (população1 > população2) {
        printf("A população de %s (%d) é maior que a população de %s (%d).\n", país1, população1, país2, população2);
    } else if (população2 > população1) {
        printf("A população de %s (%d) é maior que a população de %s (%d).\n", país2, população2, país1, população1);
    } else {
        printf("As populações de %s e %s são iguais.\n", país1, país2);
    }

    return 0;
}
