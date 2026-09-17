#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaración de variables
    string nombre;
    int edad;
    int opcion;
    float calificacion1, calificacion2, calificacion3;
    float promedio;

// Nuevo Menu Principal!
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
    cout << "Inserta una opcion ingresando la numeracion: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1:

    // Solicitar datos
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;

    cout << "Ingrese la edad: ";
    cin >> edad;

    // Validar edad
    if (edad < 0 || edad > 120)
    {
        cout << "Edad invalida" << endl;
        return 1;
    }

    cout << "Ingrese la calificacion 1: ";
    cin >> calificacion1;

    cout << "Ingrese la calificacion 2: ";
    cin >> calificacion2;

    cout << "Ingrese la calificacion 3: ";
    cin >> calificacion3; 

        // Validar calificaciones
    if (calificacion1 < 0 || calificacion1 > 10 ||
        calificacion2 < 0 || calificacion2 > 10 ||
        calificacion3 < 0 || calificacion3 > 10)
    {
        cout << "Error: Las calificaciones deben estar entre 0 y 10." << endl;
        return 1;
    }

    // Calcular promedio
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

   
    string estado;

    if (promedio >= 9)
    {
        estado = "EXCELENTE";
    }
    else if (promedio >= 7)
    {
        estado = "APROBADO";
    }
    else if (promedio >= 6)
    {
        estado = "REGULAR (aprobado con lo minimo)";
    }
    else
    {
        estado = "REPROBADO";
    }

    // Mostrar el resultado
    cout << endl;
    cout << " RESUMEN DEL ESTUDIANTE " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Calificacion 1: " << calificacion1 << endl;
    cout << "Calificacion 2: " << calificacion2 << endl;
    cout << "Calificacion 3: " << calificacion3 << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;

    break;

    case 2:
    cout << "Sistema de calificaciones Escolares" << endl;
    cout << "Este programa permite registrar estudiantes y calcular sus calificaciones" << endl;
    break;

    case 3:
    cout << "Saliendo del programa..." << endl;
    break;

    default:
    cout << "Opcion Invalida." << endl;
    break;
    
    }   


    return 0;
}