#include <iostream>

using namespace std;

int main()
{
    float matematica, fisica, quimica,
          port, ingles, media;

    cout << "nota de matematica: ";
    cin >> matematica;

    cout << "nota de fisica: ";
    cin >> fisica;

    cout << "nota de quimica: ";
    cin >> quimica;

    cout << "nota de portugues: ";
    cin >> port;

    cout << "nota de ingles: ";
    cin >> ingles;

    media = (3*matematica + 2.5*fisica +
             2.5*quimica+port+ingles) / 10;

    cout << "Media: " << media;
    return 0;
}
