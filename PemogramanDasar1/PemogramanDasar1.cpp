#include <iostream>
using namespace std;

int main()
{//begin
    // numeric nJejari, nLuas
	// display 'Masukan Jejari= '
	// accept nJejari
	// compute nLuas = 3.14 * r * r
	// display ' Luasnya = ' + nLuas
	float nJejari, nLuas;

	cout << "Masukan Jejari";
	cin >> nJejari;
	nLuas = 3.14 * nJejari * nJejari;
	cout <<"Luas lingkaran adalah = " << nLuas << endl;

	system("pause");

}//end


