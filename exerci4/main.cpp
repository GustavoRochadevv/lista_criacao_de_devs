#include <iostream>

using namespace std;

int main()
{

    // O exercício pede pra você pedir o ano atual e a idade que ele mostra o ano que vc nasceu
    int idade , anoAtual , anoNasc;

    cout << "digite o ano atual ";
    cin >> anoAtual;

    cout << "digite a sua idade ";
    cin >> idade;



    anoNasc = anoAtual - idade;

    cout << "o usuario nasceu em " << anoNasc;
    return 0;
}
