#include <stdio.h>
#include "caesar.h"

int main () {
    int choice = 0;
    char text[1024] = "";
    printf("Write a text...\n");
    scanf("%s", &text);


    printf("\nChoose cipher type: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            encrypt_caesar_cipher(text);
            printf(text);
            break;
        case 2:
            decrypt_caesar_cipher(text);
            printf(text);
            //future cipher types coming soon...
    }
}
