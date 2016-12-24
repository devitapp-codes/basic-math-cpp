#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int input, a, b;
  cout << "============ Menu ============\n\n";
  cout << "1. Penjumlahan & Pengurangan\n";
  cout << "2. Perkalian & Pembagian\n";
  cout << "3. Perpangkatan & Akar kuadrat\n";
  cout << "==============================\n";
  cout << "\n Input: ";
  cin >> input;

  switch(input) {
    case 1:
    	system("cls");
    	cout << "Bilangan 1 : ";
    	cin >> a;
        cout << "Bilangan 2 : ";
        cin >> b;
        cout << "\n" << a << " + " << b << " = " << a+b << endl;
        cout << a << " - " << b << " = " << a-b << endl;
        system("pause");// perhitungan penambahan dan pengurangan
    break;

    case 2:
    	system("cls");
    	cout << "Bilangan 1 : ";
    	cin >> a;
        cout << "Bilangan 2 : ";
        cin >> b;
        cout << "\n" << a << " x " << b << " = " << a*b << endl;
        cout << a << " : " << b << " = " << a/b << endl;
        system("pause");//perhitungan perkalian dan pembagian
    break;

    case 3:
    	// perhitungan perpangkatan dan akar kuadrat
    break;
  }
}
