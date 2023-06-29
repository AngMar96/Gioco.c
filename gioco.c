#include <stdio.h>
#include <string.h>

#define MAX_NOME 50
 
int main() {
    int punteggio = 0;
    int risposta;
    int scelta;
    char nome[MAX_NOME];
    
    printf("Benvenuto al gioco a risposta multipla!\n");
    
    do {
        printf("\nCosa desideri fare?\n");
        printf("1. Avviare il gioco\n");
        printf("2. Terminare il gioco\n");
        printf("Inserisci il numero corrispondente alla tua scelta: ");
        scanf("%d", &scelta);
        
        if (scelta == 1) {
            printf("\nGrande! Avviamo il gioco!\n");
            
            printf("Inserisci il tuo nome: ");
            getchar();  // Consuma il carattere di nuova riga residuo
            fgets(nome, MAX_NOME, stdin);
            nome[strcspn(nome, "\n")] = '\0';  // Rimuove il carattere di nuova riga
            
            printf("Ciao, %s! Iniziamo a giocare!\n", nome);
            do{
 
            // Domanda 1
            printf("\nDomanda 1: Che cosa indica gigabyte?\n");
            printf("1. 100milioni di byte\n");
            printf("2. 1 miliardo di byte\n");
            printf("3. 10 byte\n");
            printf("Inserisci il numero corrispondente alla risposta: ");
            scanf("%d", &risposta);
 if (risposta == 2) {
                punteggio++;
            } else {
                printf("Risposta errata!\n");
        }
 
        if(risposta < 1){
                printf("no\n");
continue;
        }



        if(risposta > 3 ){
                printf("no\n");
continue; 
           }
 

        if(risposta >=1 , risposta <=4){
break;
}
 
} while(1);
 
        do{     
            // Domanda 2
            printf("\nDomanda 2: La tastiera è una periferica di ?\n");
            printf("1. input\n");
            printf("2. output\n");
            printf("3. neutra\n");
            printf("Inserisci il numero corrispondente alla risposta: ");
            scanf("%d", &risposta);
            
            if (risposta == 1) {
                punteggio++;
            } else {
                printf("Risposta errata!\n");
                printf("Risposta errata!\n");
}
           
        if (risposta < 0 ){
                printf("no\n");
}
        if (risposta > 3) {
        printf("no\n");
continue;
}
 
        if(risposta > 0 , risposta <5){
        break;
}
 
}while (1); 
      
            // Aggiungi altre domande qui
            
            printf("\nIl gioco è terminato, %s!\n", nome);
            printf("Hai totalizzato %d punti.\n", punteggio);
        } else if (scelta == 2) {
            printf("\nHai scelto di terminare il gioco. Arrivederci!\n");
            break;
        } else {
            printf("\nScelta non valida. Riprova.\n");
        }
    } while (1);
    
    return 0;
}
