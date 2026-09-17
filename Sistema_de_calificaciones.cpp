#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaración de variables
    string nombre;
    int edad;
    float calificacion1, calificacion2, calificacion3;
    float promedio;

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
