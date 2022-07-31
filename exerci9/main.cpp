#include <iostream>

using namespace std;

int main()
{

	float a,b,c,delta,raiz1,raiz2;
	cout <<("Insira um valor no a: ");
    cin >> a;

	cout <<("Insira um valor no b : ");
	cin>> b;

	cout <<("Insira um valor no c: ");
	cin >> c;


	 if (a != 0){
		delta = (b*b)- 4*a*c;
		    if (delta==0){
		    	raiz1 = (-b + sqrt (delta))/ (2*a);
		    	cout <<("O delta deu 0(zero)");
		    	cout <<("As raizes serao iguais a :", raiz1);
	}else {
		if (delta > 0 ){
			raiz1 = (-b + sqrt (delta))/ (2*a);
			raiz2 = (-b - sqrt (delta))/ (2*a);

			cout <<(" O delta eh MAIOR que 0(zero)");
			cout <<(" primeira raiz eh igual a: ",raiz1);
			cout <<(" segunda raiz eh igual a: ",raiz2);

	}else {
	    cout <<("Delta menor que 0(zero)");
	   cout <<("Nao existe raizes Reais");
		}

	}
	}else {
		cout <<(" Essa nao eh uma equacao do segundo grau ");
		cout <<(" Tente novamente ");
		cout << (" Mas dessa vez experimente adotar um valor para A diferente de  ");
	}
    return 0;
}
