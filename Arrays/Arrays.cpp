/*// VT 74.  Cod 001
// Asignar 25 variables integer (cada una con un nombre diferente)
int notaEstudiante1{};
int notaEstudiante2{};
int notaEstudiante3{};
// ...
int notaEstudiante25{};

int notaEstudiante[25]{}; // asigna 25 variables integer en un array fijo*/

/*// VT 74. Cod.002
#include <iostream>
int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int primos[5]{}; // contiene  cinco números primos
    primos[0] = 2; // El primer elemento tiene un índice 0
    primos[1] = 3;
    primos[2] = 5;
    primos[3] = 7;
    primos[4] = 11; // El último elemento tiene un índice 4 (tamaño del array-1)

    std::cout << "El número primo más bajo es: " << primos[0] << '\n';
    std::cout << "La suma de los cinco primeros primos es: " << primos[0] + 
        primos[1] + primos[2] + primos[3] + primos[4] << '\n';

    return 0;
}*/

/*//VT 74. Cod. 003
#include <iostream>
int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    double vidaBateria[3]{}; // asigna 3 doubles
    vidaBateria[0] = 2.5;
    vidaBateria[1] = 3.3;
    vidaBateria[2] = 4.1;

    std::cout << "El promedio de vida de la batería es: " << (vidaBateria[0] + 
        vidaBateria[1] + vidaBateria[2]) / 3.0 << " hora(s)\n";

    return 0;
}*/

/*// VT 74 Cod. 004
#include <iostream>
int main() {

    int array[5]{}; // declara un array de tamaño 5 

    // usando un índice literal (constante) :
    array[1] = 5; // correcto

    // usando un índice variable (no-constante):
    int indice{ 3 };
    array[indice] = 6; // correcto

    // usando una expresión que evalúa a un índice integer:
    array[2 + 2] = 7; // correcto

    std::cout << "El valor es:  " << array[1] << '\n';
    std::cout << "El valor es:  " << array[indice] << '\n';
    std::cout << "El valor es:  " << array[3] << '\n';
    std::cout << "El valor es:  " << array[4] << '\n';
}*/

/*//VT 74 COD. 005

// usar un literal constante
int numeroHorasPorDia[5]{}; // Correcto

// usar una constexpr simbólica
constexpr int diasPorSemana{ 5 };
int numeroHorasPorDia[diasPorSemana]{}; // Correcto

// usar un enumerador
enum DiasSemana
{
    lunes,
    martes,
    miercoles,
    jueves,
    viernes,
    sabado,
    domingo,

    maxDiasPorSemana
};
int numeroHorasPorDia[maxDiasPorSemana]{}; // Correcto

// usar una macro
#define DIAS_POR_SEMANA 7
int numeroHorasPorDia[DIAS_POR_SEMANA]{}; // trabaja, pero no usarlo 
                                         //(usar una constexpr simbólica mejor)*/






                                         
//VT 74 COD. 006

#include <iostream>
int main()
{
    // usar una variable no-constante
    int diasPorSemana{};
    std::cin >> diasPorSemana;
    int numeroHorasPorDia[diasPorSemana]{}; // No correcto.  diasPorSemana no es una constante en tiempo de compilación

    // usar una variable const en tiempo de ejecución
    int temp{ 5 };
    const int diasPorSemana{ temp }; // el valor de diasPorSemana no es conocido hasta el tiempo de ejecución, 
                                     // así que es una constante en tiempo de ejecución, no en tiempo de compilación
    int numberOfLessonsPerDay[diasPorSemana]{}; // No correcto

}



