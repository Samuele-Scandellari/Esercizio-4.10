#include <stdio.h>
int main() {
    int n, i = 0,potenza = 1;
    {
        printf("Inserisci un valore n (compreso tra 2 e 20): ");
        scanf("%d", &n);
        if (n < 2 || n > 20) {
            printf("Valore non valido! Riprova.\n");
        }
    } while (n < 2 || n > 20);
    printf("Le prime %d potenze di 2 sono:\n", n);
    while (i < n) {
        printf("2^%d = %d\n", i, potenza);
        potenza *= 2;
        i++;
    }
}