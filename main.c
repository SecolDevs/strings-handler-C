#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *capitalizeFirstLetter(char baseText[]) {
    char *result = "Result";
    return result;
}

int stringCounter(char baseText[], char searchString[]) {
    return 0;
}

int vowelsCounter(char baseText[]) {
    return 0;
}

int newYear(char timeFormat[]) {
    return 0;
}

char *fillCharacters(char baseText[], char charToInsert, int rounds, int type) {
    char *result = "";
    return result;
}

char *deleteCharacters(char baseText[], char charToDelete) {
    char *result = "";
    return result;
}

char *deleteRepeatedChars(char baseText[]) {
    char *result = "";
    return result;
}

char *stringIntersection(char textOne[], char textTwo[]) {
    char *result = "";
    return result;
}

char *wordsCounter(char baseText[], char wordToCount[]) {
    char *result = "";
    return result;
}

int isValidEmail(char email[]) {
    return 0;
}


void menuSelector() {
    int choosedOption;
    printf("1. Convertir en nombre propio el contenido de una cadena \n"
           "2. Buscar cadena de caracteres \n"
           "3. Contar Vocales \n"
           "4. Anio Nuevo \n"
           "5. Llenar Caracteres \n"
           "6. Borrar Caracteres \n"
           "7. Interseccion de dos cadenas \n"
           "8. Eliminar caracteres repetidos \n"
           "9. Contar palabras \n"
           "10. Validar email \n"
           "11. Salir \n");
    scanf("%d", &choosedOption);

    char inputText[100];

    switch (choosedOption) {
        case 1:
            fseek(stdin, 0, SEEK_END);
            printf("Insert Input Text \n");
            gets(inputText);
            char *result = capitalizeFirstLetter(inputText);
            printf("%s\n", result);
            menuSelector();
            break;
        case 2:

            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            break;
    }
}


int main() {
    printf("Welcome, please choose an option\n");

    menuSelector();

    return 0;
}
