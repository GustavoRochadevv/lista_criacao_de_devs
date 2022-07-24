#include <iostream>

using namespace std;

int main()
{

    int num1 , num2 , num3;

    cout << "digite tres numeros" << endl;
    cin >> num1;

     cin >> num2;

      cin >> num3;

      if(num1 <= num2 <= num3){
        cout << " a ordem crescente e :" << num1 , num2 , num3;
      }

    return 0;
}
