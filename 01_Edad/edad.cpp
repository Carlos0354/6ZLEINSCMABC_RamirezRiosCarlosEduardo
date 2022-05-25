#include <iostream>

using namespace std;
 
void calcularEdad( int anioAct , int mesAct, int diaAct, int anioNac, int mesNac, int diaNac);

 

int main ()

{

    int anioAct;  //Año Actual

    int mesAct; //Mes actual

    int diaAct; //Fecha actual

 

    int anioNac; //Año nacimiento

    int mesNac; //Mes nacimiento

    int diaNac; //Fecha nacimiento

 

    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";

    cout << "Ingrese Año Actual: ";   cin >> anioAct;

    cout << "Ingrese Mes Actual: ";   cin >> mesAct;

    cout << "Ingrese Dia Actual: ";  cin >> diaAct;

 

    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;

    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;

    cout << "Ingrese Dia de Nacimiento: ";  cin >> diaNac;

 

    calcularEdad( anioAct , mesAct, diaAct, anioNac, mesNac, diaNac);

 

    return 0;

}
 

//Definicion de la Funcion

void calcularEdad( int anioAct , int mesAct, int diaAct, int anioNac, int mesNac, int diaNac)

{

    int respFech , respMes;

 

    if ( diaAct < diaNac  )

    {   //En caso de ser menor la fecha actual que el nacimiento

        diaAct = diaAct + 30; // Se le sumara los 30 días (1 mes) a la fecha actual

        mesAct = mesAct - 1; // Se le restara un mes (30 días) al mes actual

        respFech =  diaAct - diaNac; //Se le restara la fecha nacimiento al actual

    }

    else //En caso de ser mayor la fecha actual que el nacimiento

        respFech =  diaAct - diaNac;  //Se le resta fecha nacimiento al actual

 

    if( mesAct < mesNac )

    {   //En caso de ser menor el mes actual que el nacimiento

        mesAct = mesAct + 12; // Se le sumara los 12 meses (1 año) al mes actual

        anioAct = anioAct - 1 ; // Se le restara 1 año ( 12 meses) al año actual

        respMes = mesAct - mesNac; //Se le restara un  año nacimiento al actual

    }

    else //En caso de ser mayor el mes actual que el nacimiento

        respMes = mesAct - mesNac; //Se le restara un año nacimiento al actual

 
    cout << "\nUd. tiene:\n";

    cout << " Edad: " <<anioAct - anioNac << endl; //Muestra edad

    cout << " Mes: " << respMes << endl; //Muestra mes

    cout << " Dia: " << respFech << endl; //Muestra dia

}
