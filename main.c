#include <stdio.h>

int main(int argc, char *argv[])
{

    char nombre[50], cedula[10];

    float precioA = 150, precioB = 55, precioC = 180, precioD = 70, precioE = 120;
    float subtotalA = 0, subtotalB = 0, subtotalC = 0, subtotalD = 0, subtotalE = 0;
    float numA = 0, numB = 0, numC = 0, numD = 0, numE = 0;
    float subtotal = 0, total = 0;

    char opcion;

    printf("****Escoja un producto que desee facturar: *******\n");
    printf("1. Llantas (Precio:$150)\n");
    printf("2. Kit Pastillas de freno (Precio:$55)\n");
    printf("3. Kit de Embrague (Precio:$180)\n");
    printf("4. Faro (Precio:$70)\n");
    printf("5. Radiador (Precio:$120)\n");
    scanf("%c", &opcion);

        switch (opcion)
    {
    case 'a':
        printf("Ingrese el numero de Llantas: \n");
        scanf("%f", &numA);
        break;
    case 'b':
        printf("Ingrese el numero de Kit Pastillas de freno: \n");
        scanf("%f", &numB);
        break;
    case 'c':
        printf("Ingrese el numero Kit de embrague: ");
        scanf("%f", &numC);
        break;
    case 'd':
        printf("Ingrese el numero de Faros: ");
        scanf("%f", &numD);
        break;
    case 'e':
        printf("Ingrese el numero de Radiadores: ");
        scanf("%f", &numE);
        break;
    default:
        break;
    }

    subtotalA= precioA * numA;
    subtotalB= precioB * numB;
    subtotalC= precioC * numC;
    subtotalD= precioD * numD;
    subtotalE= precioE * numE;

    subtotal = subtotalA+subtotalB+subtotalC+subtotalD+subtotalE;
 

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su numero de cedula: ");
    scanf("%s", cedula);

    printf("******Datos del Cliente******");
    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);
    printf("*****Factura********");
    printf("Producto        Cantidad       Precio Unitario       Precio total \n");


    if (numA!=0)
    {
        printf ("Kit Frenos          %.0f           %.2f          %.2f\n",numA,precioA,subtotalA);
    }

    if (numB!=0)
    {
        printf("Kit Pastilla           %.0f          %.2f          %.2f\n",numB,precioB,subtotalB);
    }

    if (numC!=0)
    {
        printf("Kit Embrague           %.0f          %.2f          %.2f\n",numC,precioC,subtotalC);
    }

    if (numD!=0)
    {
        printf("Faros                  %.0f          %.2f          %.2f\n",numD,precioD,subtotalD);
    }  

    if (numE!=0)
    {
        printf("Radiador               %.0f          %.2f          %.2f\n",numE,precioE,subtotalE);
    }

    printf("El subtotal es: %.2f\n",subtotal);
    printf("El total es: %.2f\n",total);


    return 0;
}
