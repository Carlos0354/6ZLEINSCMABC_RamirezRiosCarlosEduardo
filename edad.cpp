#include <iostream>

using namespace std;

 
void calcularEdad( int a�oAct , int mesAct, int diaAct, int a�oNac, int mesNac, int diaNac);

 

int main ()

{

    int a�oAct;  //A�o Actual

    int mesAct; //Mes actual

    int diaAct; //Fecha actual

 

    int a�oNac; //A�o nacimiento

    int mesNac; //Mes nacimiento

    int diaNac; //Fecha nacimiento

 

    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";

    cout << "Ingrese A�o Actual: ";   cin >> a�oAct;

    cout << "Ingrese Mes Actual: ";   cin >> mesAct;

    cout << "Ingrese Dia Actual: ";  cin >> diaAct;

 

    cout << "\nIngrese A�o Nacimiento: ";  cin >> a�oNac;

    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;

    cout << "Ingrese Dia de Nacimiento: ";  cin >> diaNac;

 

    calcularEdad( a�oAct , mesAct, diaAct, a�oNac, mesNac, diaNac);

 

    return 0;

}
 

//Definicion de la Funcion

void calcularEdad( int a�oAct , int mesAct, int diaAct, int a�oNac, int mesNac, int diaNac)

{

    int respFech , respMes;

 

    if ( diaAct < diaNac  )

    {   //En caso de ser menor la fecha actual que el nacimiento

        diaAct = diaAct + 30; // Se le sumara los 30 d�as (1 mes) a la fecha actual

        mesAct = mesAct - 1; // Se le restara un mes (30 d�as) al mes actual

        respFech =  diaAct - diaNac; //Se le restara la fecha nacimiento al actual

    }

    else //En caso de ser mayor la fecha actual que el nacimiento

        respFech =  diaAct - diaNac;  //Se le resta fecha nacimiento al actual

 

    if( mesAct < mesNac )

    {   //En caso de ser menor el mes actual que el nacimiento

        mesAct = mesAct + 12; // Se le sumara los 12 meses (1 a�o) al mes actual

        a�oAct = a�oAct - 1 ; // Se le restara 1 a�o ( 12 meses) al a�o actual

        respMes = mesAct - mesNac; //Se le restara un  a�o nacimiento al actual

    }

    else //En caso de ser mayor el mes actual que el nacimiento

        respMes = mesAct - mesNac; //Se le restara un a�o nacimiento al actual

 

    cout << "\nUd. tiene:\n";

    cout << " Edad: " <<a�oAct - a�oNac << endl; //Muestra edad

    cout << " Mes: " << respMes << endl; //Muestra mes

    cout << " Dia: " << respFech << endl; //Muestra dia

}
