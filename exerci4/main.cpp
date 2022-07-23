#include <iostream>

using namespace std;

int main()
{
    int idade , anoAtual , anoNasc;

    cout << "digite o ano atual ";
    cin >> anoAtual;

    cout << "digite seu ano de nascimento ";
    cin >> anoNasc;



    idade = anoAtual - anoNasc;

    cout << "o usuario possui " << idade << " anos " ;
    return 0;
}
