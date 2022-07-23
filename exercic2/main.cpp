#include <iostream>

using namespace std;

int main()
{
    int hora,minuto,segundos;

    cout << "digite a quantidade de horas " << endl;
    cin >> hora;

    cout << "digite a quantidade de minuto " << endl;
    cin >> minuto;

    minuto = minuto + (60 * hora);
    segundos= minuto * 60;

    cout << "a quantidade de minutos e: " << minuto << endl;

    cout << "a quantidade de segundos e: " << segundos << endl;



    return 0;
}
