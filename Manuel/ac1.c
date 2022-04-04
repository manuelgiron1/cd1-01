# include <stdio.h>
int main(void)
{
    char nombre[32];
    printf("cual es tu nombre?");
    scanf("%s", nombre)  ; 
    printf("hola %s",nombre);
    return 0;
}