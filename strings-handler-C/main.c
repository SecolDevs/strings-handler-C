#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void PalabraPropia() {
    printf("NOMBRE PROPIO \n");
    int num;
    char cadena[200];
    char *p = cadena;//puntero de la cadena, inicia en la primera posicion contiene lo que hay en ese almacenamiento
    printf("Digita tu oracion a convertir");
    fflush(stdin);
    //scanf("%s",cadena);
    fgets(cadena, 200, stdin);
    num = strlen(cadena);
    while (*p != 0) {
        if (p == cadena || (*p != ' ' && *(p - 1) == ' '))
            if (*p >= 'a' && *p <= 'z')
                *p = *p - ('a' - 'A');
        p++;


    }

    printf("\n Con Palabras propias entonces queda asi: %s ", cadena);


}

void Option2() {
    char fr[100]="",pEnter[100]="",aux[100];
    short int cont=0,a=0,b=0;
    printf("Ingreso a la Opcion 2, buscar una palabra en una Frase\n");
    printf("Escribe una frase \n");
    gets(fr);
    printf("Escribe una palabra a buscar\n");
    gets(aux);

    while (fr[a]!=0){
        if (fr[a]==' '|| fr[a]==','|| fr[a]=='.'){
            if (strcmp(pEnter, aux) == 0){
                ++cont;
            }
            for (b=0;b<100;b++){//borrar contenido de la variable
                pEnter[b]=0;
            }
            b=0;
        } else{
            pEnter[b]=fr[a];
            ++b;
        }
        a++;
    }
    if (strcmp(pEnter, aux) == 0){
        cont++;
    }
    if (cont==0){
        printf("La palabra %s no se encuentra en la frase", aux);
    } else{
        printf("La palabra %s se encuentra %d veces en la frase", aux, cont);
    }

}

void Option3(){
    char enterSt[50];
    printf("Ingrese la frase a revisar\n");
    gets(enterSt);
    short int cont=0;
    for (int i = 0; i < strlen(enterSt); ++i) {
        if (enterSt[i]=='a' || enterSt[i]=='A' || enterSt[i]=='e' || enterSt[i]=='E' || enterSt[i]=='i' || enterSt[i]=='I' || enterSt[i]=='o' || enterSt[i]=='O' || enterSt[i]=='u' || enterSt[i]=='U'){
            ++cont;
        }
    }
    if (cont==0){
        printf("La cadena que ingreso no tiene vocales");
    } else{
        printf("La cadena ingresada tiene  %d vocales",cont);
    }

}

int stringCounter(char baseText[], char searchString[]) {
    int textSize = strlen(baseText), counter = 0, indexString = 0;
    char auxString[50];

    baseText[textSize] = ' ';
    baseText[textSize + 1] = '\0';

    for (int i = 0; baseText[i] != '\0'; ++i) {
        if (baseText[i] == ' ') {
            auxString[indexString] = '\0';
            indexString = 0;
            if (strcmp(searchString, auxString) == 0) counter++;
            memset(auxString, 0, 50);
        } else {
            auxString[indexString] = baseText[i];
            indexString++;
        }
    }

    return counter;
}

int vowelsCounter(char baseText[]) {
    return 0;
}

int VerificarFormato(char *cad) {
    int hora, minuto;
    if (strlen(cad) != 5) {
        return 1;//quiere decir que cumple con el formato de horas y minutos con el :
    }
    if (cad[2] != ':') {
        return 1;//significa que en la mitad debe haber un : para seguir el formato
    }
    for (int i = 0; i < 5; i++) {
        if (i != 2 && (cad[i] < '0' || cad[i] > '9')) {
            return 1;//para que loos demas espacios puedan tener valores desde el 0 hasta el 9
        }
    }
    hora = atoi(cad);//convierte la cadena a valor numerico
    minuto = atoi(cad + 3);// a partir del espacio tres da los minutos en forma de numero
    if (hora > 23 || minuto > 59) {
        return 1;
    }//devolvemos el 1 si no cumple con los requisitos del formato
    return 0;
}
void Option5(){
    char charEnter[1];
    char enterSt[50];
    char finalSt[100],aux[100];
    short int op;
    short int veces=0;

    printf("Digite el caracter que quiere agregar: \n");
    //printf_s("Digite un caracter: \n");
    gets(charEnter);
    fflush(stdin);

    printf("Digite una frase o palabra:\n");
    gets(enterSt);
    fflush(stdin);


    printf("Digite las veces que desea agredar %s a la frase %s \n",charEnter,enterSt);
    scanf("%d",&veces);
    fflush(stdin);

    printf("Digite 0. Si desea agregar el caracter por la IZQUIERDA\n");
    printf("Digite 1. Si desea agregar el caracter por la DERECHA\n");
    scanf("%d",&op);
    fflush(stdin);

    for (int i = 0; i < veces; ++i) {
        aux[i]=charEnter[0];
    }
    if (op==0){
        strcpy(finalSt, aux);
        strcat(finalSt, enterSt);

    }
    if (op==1){
        strcpy(finalSt, enterSt);
        strcat(finalSt,aux);

    }
    if(op!=1 && op!=0){
        printf("Ingreso una opcion erronea");
    }

    printf("La cadena de caracteres final es:\n%s",finalSt);
}
void nuevoanio() {
    const int minfinal = 1439;
    char actual[5];
    // char nuevo[5];
    /* nuevo[0]='2';
     nuevo[1]='3';
     nuevo[2]=':';
     nuevo[3]='5';
     nuevo[4]='9';*/
    int minInicial, minTotales;
    printf(" Digite la hora desde la que quiere conocer los minutos  ");
    fflush(stdin);
    scanf("%s", actual);

    if (VerificarFormato(actual)) {
        printf("ERROR de formato");
        exit(0);

    }

    minInicial = atoi(actual) * 60 + atoi(actual + 3);

    minTotales = minfinal - minInicial;
    printf("Minutos Totales: %d \n", minTotales);


}

char *fillCharacters(char baseText[], char charToInsert, int rounds, int type) {
    char *result = "";
    return result;
}

char *deleteCharacters(char baseText[], char charToDelete[]) {
    int indexChar = 0, indexCharLength = 0;
    int countAddChar = 1;
    char *result = "";

    while (baseText[indexChar]) {
        countAddChar = 1;
        int indCaracter = 0;
        while (charToDelete[indCaracter]) {

            if (baseText[indexChar] == toupper(charToDelete[indCaracter]) ||
                baseText[indexChar] == tolower(charToDelete[indCaracter])) {
                countAddChar = 0;
            }
            indCaracter++;
        }
        if (countAddChar) {
            baseText[indexCharLength] = baseText[indexChar];
            indexCharLength++;
        }
        indexChar++;
    }
    baseText[indexCharLength] = 0;

    result = baseText;
    return result;
}

char *deleteRepeatedChars() {
    printf("ELIMINAR CARACTERES REPETIDOS\n");
    int con;
    char palabra[20];
    printf("Digite una palabra: ");
    scanf("%s", &palabra);
    con = strlen(palabra);


    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < con - 1; ++j) {
            if (i != j) {//para comparar dos veces al mismo tiempo dos casillas diferentes
                if (palabra[i] == palabra[j]) {
                    palabra[j] = ' ';//palabra en su parte j queda con un espacio
                }
            }//revisar

        }

    }

    for (int i = 0; i < con; ++i) {
        printf("%c \n", palabra[i]);
    }


    getchar();
}

/*void eliminarcaracteres(){
    char palabra[30],noRepetidos[30],aux;
    printf("Ingrese una palabra");
    fflush(stdin);
    fgets(palabra,30,stdin);

    for (int i=1;i<50;i++){
        for(int j=0;j<50;j++){
            if(palabra[i]!=palabra[j])
            {
                aux=palabra[j];
                palabra[j]=palabra[i];
                palabra[j]=aux;
                noRepetidos[j]=palabra[j];
            }
        }
    }
    printf("%s",noRepetidos);
    getchar();
}*/
char *stringIntersection(char textOne[], char textTwo[]) {
    int size1, size2, cont = 0, counter = 0;
    char auxString1[255], auxString2[255];
    char *result = "";

    size2 = strlen(textTwo);
    for (int i = size2 - 1; i >= 0; --i) {
        for (int j = 0; j < size2 - 1; ++j) {
            if (textTwo[i] == textTwo[j]) cont++;
        }
        if (cont > 1) {
            memset(auxString1, 0, 255);
            memset(auxString2, 0, 255);
            for (int j = i + 1; j < size2 - 1; ++j) {
                auxString1[counter] = textTwo[j];
                counter++;
            }
            counter = 0;
            for (int j = 0; j < i; ++j) {
                auxString2[j] = textTwo[j];
            }
            memset(textTwo, 0, 255);
            strcat(strcpy(textTwo, auxString2), auxString1);
            size2 = strlen(textTwo);
        }
        cont = 0;
    }

    size1 = strlen(textOne);
    size2 = strlen(textTwo);
    memset(auxString1, 0, 255);
    cont = 0;
    counter = 0;
    for (int i = 0; i < size2; ++i) {
        for (int j = 0; j < size1; ++j) {
            if (textTwo[i] == textOne[j]) cont++;
        }
        if (cont > 0) {
            auxString1[counter] = textTwo[i];
            counter++;
            cont = 0;
        }
    }

    result = auxString1;
    return result;
}

char *wordsCounter(char baseText[], char wordToCount[]) {
    char *result = "";
    return result;
}

int isValidEmail(char email[]) {
    return strchr(email, '@') && strchr(email, '.');;
}

char baseText[255];
char otherText[255];
char charToDelete[1];

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
    fflush(stdin);

    switch (choosedOption) {
        case 1:
            //capitalizeFirstLetter();
            PalabraPropia();
            printf("\n");
            system("pause");
            menuSelector();
            break;
        case 2:
            Option2();
            printf("\n");
            system("pause");
            menuSelector();
            break;
        case 3:
            printf("Ingreso a la Opcion --Contar vocales--\n");
            Option3();
            printf("\n");
            system("pause");
            menuSelector();
            break;
        case 4:
            nuevoanio();
            menuSelector();
            break;
        case 5:
            printf("Ingreso a la Opcion --Llenar con Caracteres--\n");
            Option5();
            printf("\n");
            system("pause");
            menuSelector();
            break;
        case 6:
            printf("Inserta la cadena \n");
            gets(baseText);
            printf("Inserta el caracter a eliminar \n");
            gets(charToDelete);
            printf("Cadena con caracteres eliminados: \n%s \n", deleteCharacters(baseText, charToDelete));
            break;
        case 7:
            printf("Inserta la cadena 1 \n");
            gets(baseText);
            printf("Inserta la cadena 2 \n");
            gets(otherText);
            printf("Cadena de Interseccion: \n%s \n", stringIntersection(baseText, otherText));
            menuSelector();
            break;
        case 8:
            deleteRepeatedChars();
            menuSelector();
            break;
        case 9:
            printf("Inserta la cadena \n");
            gets(baseText);
            printf("Inserta la palabra a contar \n");
            gets(otherText);
            printf("La palabra %s se encuentra %d veces \n", otherText, stringCounter(baseText, otherText));
            break;
        case 10:
            printf("Inserta el email a validar \n");
            gets(baseText);
            printf("El email %s es %s \n", baseText, isValidEmail(baseText) ? "CORRECTO" : "INCORRECTO");
            menuSelector();
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