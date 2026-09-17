#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaración de variables
    string nombre;
    int edad;
    int opcion;
    float promedio;
    int cantidadCalificaciones;

    float calificacion;
    float suma = 0;
    float calificacionMasAlta;
    float calificacionMasBaja;

    int aprobadas = 0;
    int reprobadas = 0;
    string estado;


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

    cout <<"Cuantas calificaciones deseas registrar?" ;
    cin >> cantidadCalificaciones;

   for (int i = 1; i <= cantidadCalificaciones; i++)

    {
    cout << "Ingrese la calificacion " << i << ": ";
    cin >> calificacion;

    if (calificacion < 0 || calificacion > 10)
    {
        cout << "Error: Las calificaciones deben estar entre 0 y 10." << endl;
        return 1;
    }

    suma = suma + calificacion;

    if (calificacion >= 6)
    {
        aprobadas++;
    }
    else
    {
        reprobadas++;
    }

    if (i == 1)
    {
        calificacionMasAlta = calificacion;
        calificacionMasBaja = calificacion;
    }
    else
    {
        if (calificacion > calificacionMasAlta)
        {
            calificacionMasAlta = calificacion;
        }

        if (calificacion < calificacionMasBaja)
        {
            calificacionMasBaja = calificacion;
        }
    }
}


    // Calcular promedio
    promedio = suma / cantidadCalificaciones;
   
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
    cout << "Promedio: " << promedio << endl;
    cout << "Calificacion mas alta: " << calificacionMasAlta << endl;
    cout << "Calificacion mas baja: " << calificacionMasBaja << endl;
    cout <<"Calificaciones aprobatorias:" << aprobadas << endl;
    cout <<"Calificaciones reprobatorias:" << reprobadas << endl;
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