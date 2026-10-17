#include <stdio.h>

int main()
{
    int opcion;
    float temperatura, resultado;

    printf("====================================\n");
    printf("     CONVERSOR DE TEMPERATURAS\n");
    printf("====================================\n");

    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Celsius a Kelvin\n");
    printf("4. Kelvin a Celsius\n");
    printf("5. Fahrenheit a Kelvin\n");
    printf("6. Kelvin a Fahrenheit\n");

    printf("\nSelecciona una opcion: ");
    scanf("%d", &opcion);

    printf("Ingresa la temperatura: ");
    scanf("%f", &temperatura);

    switch (opcion)
    {
    case 1:
        resultado = (temperatura * 9.0 / 5.0) + 32;
        printf("Resultado: %.2f Fahrenheit\n", resultado);
        break;

    case 2:
        resultado = (temperatura - 32) * 5.0 / 9.0;
        printf("Resultado: %.2f Celsius\n", resultado);
        break;

    case 3:
        resultado = temperatura + 273.15;
        printf("Resultado: %.2f Kelvin\n", resultado);
        break;

    case 4:
        resultado = temperatura - 273.15;
        printf("Resultado: %.2f Celsius\n", resultado);
        break;

    case 5:
        resultado = (temperatura - 32) * 5.0 / 9.0 + 273.15;
        printf("Resultado: %.2f Kelvin\n", resultado);
        break;

    case 6:
        resultado = (temperatura - 273.15) * 9.0 / 5.0 + 32;
        printf("Resultado: %.2f Fahrenheit\n", resultado);
        break;

    default:
        printf("Error: opcion no valida.\n");
        break;
    }

    printf("\n====================================\n");
    printf("         PROGRAMA FINALIZADO\n");
    printf("====================================\n");

    return 0;
}