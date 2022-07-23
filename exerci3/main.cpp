#include <iostream>

using namespace std;

int main()
{
    float c , f;

    cout << "informe a temperatura em graus celsius ";
    cin >> c;

    f = (1.8 * c + 32);

    cout << "graus fahrenreit : " << f << endl;

    return 0;
}
