#include <iostream>

int main() {
  int opcion;

  do {
    std::cout << "\n**Menu de opciones**" << std::endl;
    std::cout << "1. Verificar si un numero es par" << std::endl;
    std::cout << "2. Determinar si un anio es bisiesto" << std::endl;
    std::cout << "3. Comparar dos numeros" << std::endl;
    std::cout << "4. Verificar si la edad es mayor de edad" << std::endl;
    std::cout << "5. Evaluar si un estudiante aprobo un examen" << std::endl;
    std::cout << "6. Salir" << std::endl;

    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion) {
      case 1:
        // Funcion para verificar si un numero es par
        std::cout << "\n**Verificar si un numero es par**" << std::endl;
        int numero;
        std::cout << "Ingrese un numero: ";
        std::cin >> numero;

        if (numero % 2 == 0) {
          std::cout << "El numero " << numero << " es par." << std::endl;
        } else {
          std::cout << "El numero " << numero << " es impar." << std::endl;
        }
        break;

      case 2:
        // Funcion para determinar si un ano es bisiesto
        std::cout << "\n**Determinar si un anio es bisiesto**" << std::endl;
        int ano;
        std::cout << "Ingrese un anio: ";
        std::cin >> ano;

        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
          std::cout << "El anio " << ano << " es bisiesto." << std::endl;
        } else {
          std::cout << "El anio " << ano << " no es bisiesto." << std::endl;
        }
        break;

      case 3:
        // Funcion para comparar dos numeros
        std::cout << "\n**Comparar dos numeros**" << std::endl;
        int num1, num2;
        std::cout << "Ingrese el primer numero: ";
        std::cin >> num1;

        std::cout << "Ingrese el segundo numero: ";
        std::cin >> num2;

        if (num1 == num2) {
          std::cout << "Los numeros " << num1 << " y " << num2 << " son iguales." << std::endl;
        } else {
          std::cout << "Los numeros " << num1 << " y " << num2 << " son diferentes." << std::endl;
        }
        break;

      case 4:
        // Funcion para verificar si la edad es mayor de edad
        std::cout << "\n**Verificar si la edad es mayor de edad**" << std::endl;
        int edad;
        std::cout << "Ingrese su edad: ";
        std::cin >> edad;

        if (edad >= 18) {
          std::cout << "Usted es mayor de edad." << std::endl;
        } else {
          std::cout << "Usted es menor de edad." << std::endl;
        }
        break;

      case 5:
        // Funcion para evaluar si un estudiante aprobo un examen
        std::cout << "\n**Evaluar si un estudiante aprobo un examen**" << std::endl;
        int nota;
        std::cout << "Ingrese la nota del examen: ";
        std::cin >> nota;

        if (nota >= 60) {
          std::cout << "El estudiante aprobo el examen." << std::endl;
        } else {
          std::cout << "El estudiante no aprobo el examen." << std::endl;
        }
        break;

      case 6:
        // Salir del programa
        std::cout << "\nSaliendo del programa..." << std::endl;
        break;

      default:
        std::cout << "\nOpcion no valida." << std::endl;
    }
  } while (opcion != 6);

  return 0;
}
