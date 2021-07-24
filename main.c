#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a temperature in Fahrenheit:  ");
    //float temperatureF;
    //scanf("%f",&temperatureF);
    //float temperatureC = (temperatureF- 32.0) * 5.0 / 9.0;
    //printf( "%.2f", temperatureC);

    printf("Enter your name: ");
    char name[40];
    scanf("%39s", name);
    //printf("%s", name);

    char msg[50];
    strcpy_s(msg, 50, name);
    strcat_s(msg, 50, " is ");
    strcat_s(msg, 50, "learning C");
    printf("%s", msg);
    return 0;
}
