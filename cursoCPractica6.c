#include <stdio.h>

int main(void){
    int x=1;
    int N=0;
    int calificacion;
    const int clave = 999;
    int calificaciones_validas = 0;
    float suma_califiacionesValidas = 0;
    int aprobadas = 0;
    int excelentes = 0;
    int rango_medio = 0;
    int notas_pares = 0;

    while(1){
        printf("\nCuantas calificaciones desea ingresar? (1 a 20): ");
        if (scanf(" %d", &N) != 1){
            puts("----- Ingrese un ENTERO -----");
            // limpiar buffer
            int ch; while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }
        if (!(N >= 1 && N <= 20)){
            puts("----- Fuera de rango (1..20). Intente de nuevo. -----");
            continue;
        }
        break;
    }

    while (x <= N){
        printf("\nIngrese una calificacion (0..100) o %d para terminar: ", clave);
        if (scanf(" %d", &calificacion) != 1){
            puts("----- Ingrese un ENTERO válido -----");
            int ch; while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }

        if (calificacion == clave) break;

        if (calificacion < 0 || calificacion > 100){
            puts("----- Fuera de rango (0..100). Ignorado. -----");
            continue;
        }

        calificaciones_validas += 1;
        suma_califiacionesValidas  += calificacion;
        if (calificacion >= 60){
            aprobadas += 1;
        }
        if (calificacion >= 90 && calificacion <= 100){
            excelentes += 1;
        }
        if (calificacion >= 40 && calificacion <= 80){
            rango_medio += 1;
        }
        if (calificacion % 2 == 0){
            notas_pares += 1;
        }

        x+=1;
    }

    printf("---Tabla de multiplicar de las calificaciones aprobadas---\n");
    for (int i=1;i<=10;i++){
        int resultado = 0;
        resultado = aprobadas * i;
        printf("\n%d x %d = %d", aprobadas,i,resultado);
        printf("\n");
    }

    float promedio = 0;
    promedio = suma_califiacionesValidas / N;

    printf("--------Resumen de calificaciones-------------\n");
    printf("El total de calificaciones validas ingresadas fue de: %d\n", calificaciones_validas);
    if (calificaciones_validas > 0){
        printf("El promedio de las calificaciones validas es de: %.2f\n", promedio);
    }
    printf("El total de calificaciones aprobatorias ingresadas fue de: %d\n", aprobadas);
    printf("El total de calificaciones excelentes ingresadas fue de: %d\n", excelentes);
    printf("El total de calificaciones en rango medio ingresadas fue de: %d\n", rango_medio);
    printf("El total de calificaciones pares ingresadas fue de: %d\n", notas_pares);

    return 0;
}
