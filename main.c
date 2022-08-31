// Programa 2 modificado
// Autor: Erick Avila     Grupo: 600, 602

// Librerías
#include <stdio.h>
#include <stdlib.h>

// Función principal
int main() {
  // Asignar color
  system("color 3F");

  // Encabezado
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175);
  printf("%c Datos almacenados (Programa 2 Modificado) %c\n", 190, 190);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175);

  // Variable nombre
  char nombre[255];

  // Solicitar nombre
  printf("Ingrese su nombre:\n");
  gets(nombre);
  printf("Buenos d%cas %s\n", 161, nombre);

  // Solicitar cantidad
  float cantidad;

  printf("%s, %cDe cuanto llego el %cltimo recibo de luz?\n", nombre, 168, 163);
  fflush(stdin);
  scanf("%f", &cantidad);

  // Solicitar nombre y apellido de otra persona
  char nombre_otrapersona[255];

  printf("%s, %cCu%cl es el nombre de tu mam%c?\n", nombre, 168, 160, 161);
  fflush(stdin);
  gets(nombre_otrapersona);

  // Solicitar cantidad a otra persona
  float cantidad_otrapersona;

  printf("%s, %cCuanto recibe de beca al mes?\n", nombre_otrapersona, 168);
  fflush(stdin);
  scanf("%f", &cantidad_otrapersona);

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 2F"); // Asignar color

  // Imprimir datos almacenados
  printf("Datos almacenados:\n");
  printf("Nombre: %s = %.2f\n", nombre, cantidad);
  printf("Nombre: %s = %.2f\n", nombre_otrapersona, cantidad_otrapersona);

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 60"); // Asignar color

  // Mensaje de despedida
  printf("Hasta pronto...\n");
  printf("Programa 2 Modificado, creado por: Avila Barba Erick Yahir\n");

  return 0;
}
