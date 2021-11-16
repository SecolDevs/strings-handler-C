#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void PalabraPropia(){
    printf("NOMBRE PROPIO \n");
    int num;
    char cadena[200];
    char *p=cadena;//puntero de la cadena, inicia en la primera posicion contiene lo que hay en ese almacenamiento
    printf("Digita tu oracion a convertir");
    fflush(stdin);
    //scanf("%s",cadena);
    fgets(cadena,200,stdin);
    num= strlen(cadena);
    while(*p!=0){
        if(p==cadena||(*p!=' '&& *(p-1)==' '))
            if(*p>='a'&& *p<='z')
                *p=*p-('a'-'A');
                p++;


    }

        printf("\n Con Palabras propias entonces queda asi: %s ",cadena);


}
int stringCounter(char baseText[], char searchString[]) {
    return 0;
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

    minTotales=minfinal-minInicial;
    printf("Minutos Totales: %d \n", minTotales);


    }

char *fillCharacters(char baseText[], char charToInsert, int rounds, int type) {
    char *result = "";
    return result;
}

char *deleteCharacters(char baseText[], char charToDelete) {
    char *result = "";
    return result;
}

char *deleteRepeatedChars() {
    printf("ELIMINAR CARACTERES REPETIDOS\n");
    int con;
    char palabra[20];
    printf("Digite una palabra: ");
    scanf("%s",&palabra);
    con= strlen(palabra);


    for (int i = 0; i <20; ++i) {
        for (int j = 0; j < con-1; ++j) {
            if(i!=j){//para comparar dos veces al mismo tiempo dos casillas diferentes
                if(palabra[i] == palabra[j]){
                    palabra[j] = ' ';//palabra en su parte j queda con un espacio
                }
            }//revisar

        }

    }

    for (int i = 0; i < con; ++i) {
        printf("%c \n",palabra[i]);
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
           //capitalizeFirstLetter();
            PalabraPropia();
            menuSelector();
            break;
        case 2:


            break;
        case 3:
            break;
        case 4:
            nuevoanio();
            menuSelector();
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:

            deleteRepeatedChars();
            menuSelector();
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
