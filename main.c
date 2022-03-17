#include <stdio.h>
#include <stdlib.h>

void ej11();
void ej12();
void ej13();
void ej2();
void ej311();
void ej312();
void ej313();
void ej314();
void ej315();
void ej321();
void ej322();
void ej4();
void ej5();
void ej61();
void ej62();
void ej63();
void ej64();
void ej65();
void ej66();
void ej71();
void ej72();
void ej73();

int main()
{
    int opcion,subOpcion;
    do
    {
        printf("Guia de Inicio\n\n");
        printf("1-Secuencial\n");
        printf("2-Estructuras Selectivas\n");
        printf("3-Concionales\n");
        printf("4-Estructuras Repetitivas\n");
        printf("5-Estructuras Selectivas y Repetitivas\n");
        printf("6-Para_Hacer\n");
        printf("7-Algoritmos de Ejemplo\n");
        printf("\n0-Cerrar\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            system("cls");
            do
            {
                printf("Secuencial\n\n");
                printf("Ejercicio 1\n");
                printf("Ejercicio 2\n");
                printf("Ejercicio 3\n");
                printf("\n0-Volver al menu anterior\n");
                scanf("%d",&subOpcion);
                switch(subOpcion)
                {
                case 1:
                    system("cls");
                    ej11();
                    break;
                case 2:
                    system("cls");
                    ej12();
                    break;
                case 3:
                    system("cls");
                    ej13();
                    break;
                }
            }
            while(subOpcion!=0);
            break;
        case 2:
            system("cls");
            ej2();
            break;
        case 3:
            system("cls");
            do
            {
                printf("Comdicionales\n\n");
                printf("1-Selectivos Simple\n");
                printf("2-Selectivos Compuestos\n");
                printf("\n0-Volver al Menu Anterior\n");
                scanf("%d",&subOpcion);
                switch(subOpcion)
                {
                case 1:
                    system("cls");
                    do
                    {
                        printf("Selectivos Simples\n\n");
                        printf("Ejercicio 1\n");
                        printf("Ejercicio 2\n");
                        printf("Ejercicio 3\n");
                        printf("Ejercicio 4\n");
                        printf("Ejercicio 5\n");
                        printf("\n9-Volver al Menu Anterior\n");
                        printf("0-Volver al Menu Principal\n");
                        scanf("%d",&subOpcion);
                        switch(subOpcion)
                        {
                        case 1:
                            system("cls");
                            ej311();
                            break;
                        case 2:
                            system("cls");
                            ej312();
                            break;
                        case 3:
                            system("cls");
                            ej313();
                            break;
                        case 4:
                            system("cls");
                            ej314();
                            break;
                        case 5:
                            system("cls");
                            ej315();
                            break;
                        }

                        break;
                    }
                    while(subOpcion!=9 || subOpcion!=0);
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    do
                    {
                        printf("Selectivos Compuestos\n\n");
                        printf("Ejercicio 1\n");
                        printf("Ejercicio 2\n");
                        printf("\n9-Volver al Menu Anterior\n");
                        printf("0-Volver al Menu Principal\n");
                        scanf("%d",&subOpcion);
                        switch(subOpcion)
                        {
                        case 1:
                            system("cls");
                            ej321();
                            break;
                        case 2:
                            system("cls");
                            //ej322();
                            break;
                        }
                        break;
                    }
                    while(subOpcion!=9 || subOpcion!=0);
                    system("cls");
                    break;
                }
            }
            while(subOpcion!=0);
            break;
        case 4:
            system("cls");
            //ej4();
            break;
        case 5:
            system("cls");
            //ej5();
            break;
        case 6:
            system("cls");
            do
            {
                printf("Para-Hacer\n\n");
                printf("Ejercicio 1\n");
                printf("Ejercicio 2\n");
                printf("Ejercicio 3\n");
                printf("Ejercicio 4\n");
                printf("Ejercicio 5\n");
                printf("Ejercicio 6\n");
                printf("\n0-Volver al Menu Anterior\n");
                scanf("%d",&subOpcion);
                switch(opcion)
                {
                case 1:
                    system("cls");
                    //ej61();
                    break;
                case 2:
                    system("cls");
                    //ej62();
                    break;
                case 3:
                    system("cls");
                    //ej63();
                    break;
                case 4:
                    system("cls");
                    //ej64();
                    break;
                case 5:
                    system("cls");
                    //ej65();
                    break;
                case 6:
                    system("cls");
                    //ej66();
                    break;
                }
            }
            while(subOpcion!=0);
            break;
        case 7:
            system("cls");
            do
            {
                printf("Algoritmoss de Ejemplo\n\n");
                printf("1-Contador y Acumulador\n");
                printf("2-Distintas Estructuras Repetitivas\n");
                printf("3-Obtencion de Maximos y Minimos\n");
                printf("\n0-Volver al Menu Anterior");
                scanf("%d",&subOpcion);
                switch(subOpcion)
                {
                case 1:
                    system("cls");
                    //ej71();
                    break;
                case 2:
                    system("cls");
                    //ej72();
                    break;
                case 3:
                    system("cls");
                    //ej73();
                    break;
                }
            }
            while(subOpcion!=0);
            break;
        }
        system("cls");
    }
    while(opcion!=0);
    printf("Nos vemos c:\n");
    return 0;
}


void ej11()
{
    printf("Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganara después de un mes si el banco paga a razón de 2porciento mensual\n\n");
    float capital,interes,total;
    printf("Ingrese el capital a depositar= $");
    scanf("%f",&capital);
    interes=capital*0.02;
    total=interes+capital;
    printf("Los intereses seran=$%.3f\nSu acumulado sera de=$%.2f\n",interes,total);
    system("pause");
    system("cls");
}

void ej12()
{
    printf("Una tienda ofrece un descuento del 15porciento sobre el total de la compra y un cliente desea saber cuánto deberá\n");
    printf("pagar finalmente por su compra.\n\n");
    float produ,compra=0,desc,total;
    char c='s';
    while(c=='s')
    {
        printf("Ingrese el valor del producto\n");
        scanf("%f",&produ);
        printf("Desea continuar S/N\n");
        fflush(stdin);
        scanf("%c",&c);
        compra=compra+produ;
    }
    desc=compra*0.15;
    total=-desc+compra;
    printf("Total de Compra=%.2f\n",compra);
    printf("Descuento=%.2f\n",desc);
    printf("Total Final=%.2f\n",total);
    system("pause");
    system("cls");
}

void ej13()
{
    printf("Un maestro desea saber que porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes\n\n");
    float total,homb,mujer;
    printf("\Ingrese el total del alumnado masculino=");
    scanf("%f",&homb);
    printf("\nIngrese el total del alumnado femenino=");
    scanf("%f",&mujer);
    total=homb+mujer;
    homb=homb*100/total;
    mujer=mujer*100/total;
    printf("\nPorcentaje de hombres%.2f%%\n",homb);
    printf("Porcentaje de mujeres%.2f%%\n",mujer);
    system("pause");
    system("cls");
}

void ej2()
{
    printf("Razonemos a partir de un ejemplo. Realizar un algoritmo que permita ingresar un numero e informe\n");
    printf("!Numero mayor a cero! o !Numero menor o igual a cero! segun corresponda.\n");
    printf("Analisis del problema. El algoritmo debera:\n");
    printf("1.	Leer el numero que ingresa el usuario\n");
    printf("2.	Seleccionar mediante una condicion si ese numero es o no mayor a cero\n");
    printf("3.	Informar con una de las leyendas enunciadas\n\n");
    int num;
    printf("Ingrese un mumero:\n");
    scanf("%d",&num);
    printf("Su numero es %d\n",num);
    if(num>0)
    {
        printf("!Numero mayor a cero!");
    }
    else
    {
        printf("!Numero menor o igual a cero!");
        if(num==0)
        {
            printf(" exactamente 0");
        }
    }
    printf("\n");
    system("pause");
    system("cls");
}

void ej311()
{
    printf("Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres\n");
    printf("calificaciones es mayor o igual a 7; reprueba en caso contrario\n\n");
    float total=0,nota=0,prom=0;
    int i;
    for(i=0; i<3; i++)
    {
        printf("Ingrese nota:");
        scanf("%f",&nota);
        total+=nota;
    }
    prom=total/3;
    if(prom>=7)
    {
        printf("Prom %.2f, el alumno ha aprovado\n",prom);
    }
    else
    {
        printf("Prom %.2f, el alumno ha desaprovado\n",prom);
    }
    system("pause");
    system("cls");
}

void ej312()
{
    printf("En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $1000\n");
    printf("¿Cuál será la cantidad que pagara una persona por su compra?\n\n");
    float produ,compra=0,desc,total;
    int bandera=0;
    char c='s';
    while(c=='s')
    {
        printf("Ingrese el valor del producto\n");
        scanf("%f",&produ);
        printf("Desea continuar S/N\n");
        fflush(stdin);
        scanf("%c",&c);
        compra=compra+produ;
    }
    if(compra>1000)
    {
        desc=compra*0.2;
        total=-desc+compra;
        bandera=1;
    }
    else
    {
        total=compra;
    }

    printf("Total de Compra=%.2f\n",compra);
    if(bandera==1)
    {
        printf("Descuento=%.2f\n",desc);
        printf("Total Final=%.2f\n",total);
    }
    printf("\n");
    system("pause");
    system("cls");
}

void ej313()
{
    printf("3) Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:\n");
    printf("Si trabaja 40 horas o menos se le paga $16 por hora\n");
    printf("Si trabaja mas de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.\n\n");
    float hora,total;
    printf("Cuantas horas ha trabajado?");
    scanf("%f",&hora);
    if(hora<40)
    {
        total=hora*16;
    }
    else
    {
        total=(hora-40)*20+(40*16);
    }
    printf("Ha trabajado %.2f horas\n",hora);
    printf("Su sueldo es de=%.2f\n",total);
    system("pause");
    system("cls");
}

void ej314()
{
    printf("4) Que lea dos números y los imprima en forma ascendente\n\n");
    int a,b;
    printf("Ingrese el primer numero:\n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&b);
    if(a<b)
    {
        printf("Menor=%d\n",a);
        printf("Mayor=%d\n",b);
    }
    else if(a>b)
    {
        printf("Menor=%d\n",b);
        printf("Mayor=%d\n",a);
    }
    if (a==b)
    {
        printf("%d y %d son iguales\n",a,b);
    }
    system("pause");
    system("cls");
}

void ej315()
{
    printf("5) Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o mas se aplica un descuento del 20%%  sobre el total de la compra y si son menos de tres camisas un descuento del 10%%\n\n");
    int cont=0;
    float camisa,totCamisa=0,desc;
    char control='s';
    while(control=='s')
    {
        printf("Ingrese el costo de la camisa\n");
        scanf("%f",&camisa);
        totCamisa+=camisa;
        //totCamisa=totCamisa+camisa;
        cont++;
        printf("Cantinuar? S/N\t");
        fflush(stdin);
        scanf("%c",&control);
    }
    printf("\nTotal de camisas=%.2f\n",totCamisa);
    if(cont>=3)
    {
        desc=totCamisa*0.2;
        totCamisa=totCamisa-desc;
    }
    else
    {
        desc=totCamisa*0.1;
        totCamisa=totCamisa-desc;
    }
    printf("El total a pagar con el descuento=%.2f\n",totCamisa);
    system("pause");
    system("cls");
}

void ej321()
{
    printf("1) Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume.\n\n");
    int a,b,tot;
    char operacion;
    printf("Ingrese el primer numero:\n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&b);
    if(a==b)
    {
        tot=a*b;
        operacion='X';
    }
    else
    {
        if(a>b)
        {
            tot=a-b;
            operacion='-';
        }
        else
        {
            tot=a+b;
            operacion='+';
        }
    }
    printf("Operacion(%c)=%d\n\n",operacion,tot);

    system("pause");
    system("cls");
}

/*void ej322()
{
    printf("2) Leer tres números diferentes e imprimir el numero mayor de los tres.\n\n");
    system("pause");
    system("cls");
}

void ej4()
{
    printf("Realizar un algoritmo que permita realizar 3 veces lo siguiente: ingresar 2 números calcular su suma e informar el resultado.\nEl algoritmo deberá:\n1.	Leer el número que ingresa el usuario\n3. 2. Efectuar la suma y almacenarla\n3. 3.	Mostrar el resultado almacenado\nPara efectuar esto una sola vez bastaría con el siguiente algoritmo:\nPero el algoritmo anterior sólo efectúa una vez la suma de dos números, para que pueda hacerlo más veces deberíamos repetir las sentencias de entrada, proceso y salida de datos tantas veces como se solicite.\nPara realizar esto utilizamos una estructura repetitiva que ejecute 3 iteraciones\n\n");
    system("pause");
    system("cls");
}

void ej5()
{
    printf("Realizar un algoritmo que permita ingresar 5 números e informe cuantos números ingresados son mayores a cero y cuantos menores a cero.\nEl algoritmo deberá:\n1. 1.	Leer el número que ingresa el usuario\n2. 2.	Comparar el valor del número ingresado con cero, en caso de ser mayor deberá contar uno más de la cantidad que tenía\n3. 3.	Comparar el valor del número ingresado con cero, en caso de ser menor deberá contar uno más de la cantidad que tenía\n4. 4.	Informar con una de las leyendas enunciadas\nPara realizar los pasos 2 y 3 se debe usar estructuras SELECTIVAS. La lectura de números como las distintas comparaciones se deberán ejecutar 5 veces, por lo tanto es necesaria una estructura REPETITIVA que abarque esas sentencias. Sólo el informe se realiza una vez.\n\n");
    system("pause");
    system("cls");
}

void ej61()
{
    printf("1)	Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Diseño Estructurado de Algoritmos \n\n");
    system("pause");
    system("cls");
}

void ej62()
{
    printf("2)	Leer 10 números y obtener su cubo y su cuarta.\n\n");
    system("pause");
    system("cls");
}

void ej63()
{
    printf("3)	Leer 10 números e imprimir solamente los números positivos\n\n");
    system("pause");
    system("cls");
}

void ej64()
{
    printf("4)	Leer 15 números negativos y convertirlos a positivos e imprimir dichos números.\n\n");
    system("pause");
    system("cls");
}

void ej65()
{
    printf("5)	Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos. Realizar un algoritmo para calcular la calificación media y la calificación mas baja de todo el grupo\n\n");
    system("pause");
    system("cls");
}

void ej66();
{
    printf("6)	Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando, el multiplicador y el producto.\n\n");
    system("pause");
    system("cls");
}

void ej71()
{
    printf("Ejemplo de uso de contadores y acumuladores\n\nIngresar 10 números distintos de cero e informar el resultado de la suma de los positivos y el producto de los negativos\n\n");

    system("pause");
    system("cls");
}

void ej72()
{
    printf("Uso de distintas estructuras repetitivas\n\nIngresar 10 números distintos de cero. Sumar los positivos y obtener el producto de los negativos\n1. Uso  de la estructura MIENTRAS\n2. Uso de la estructura HACER...MIENTRAS\n3. Uso de la estructura PARA\n4. Ingresar números distintos de 0 (no se sabe cuántos).  Sumar los positivos y multiplicar los negativos.\n\n");
    system("pause");
    system("cls");
}

void ej73()
{
    printf("Obtención de máximos y mínimos\n\nSe ingresa de 30 alumnos su nombre y promedio. Se pide informar el nombre del mejor alumno y su promedio\n\n");
    system("pause");
    system("cls");
}
*/
