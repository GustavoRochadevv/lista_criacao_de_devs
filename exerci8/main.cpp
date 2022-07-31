#include <iostream>

using namespace std;

int main()
{ int a, b, c;

   cout << "digite tres numeros";
   cin >> a;
   cin >> b;
   cin >> c;

   if(a + b > c && a + c > b && b + c > a){
    cout <<( " os 3 lados formam um triangulo ");

   }if ( a == b && a == c){
     cout <<(" equilatero ");
   }

     else if ( a == b || a == c || b == c){
        cout <<(" isosceles ");

     }
     else {
        cout << " escaleno ";
     }
    return 0;
}
