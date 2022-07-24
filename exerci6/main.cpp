#include <iostream>

using namespace std;

int main()
{
    float area , raio , perimetro;

    cout << "informe o raio da circunferencia" << endl;
    cin >> raio;

    area = 3.14 * ( raio * raio );

    perimetro = 2 * 3.14 * raio;

    cout << " a area da circunferencia e : " << area << endl;
    cout << " o perimetro da circunferencia e :" << perimetro << endl;

    return 0;
}
