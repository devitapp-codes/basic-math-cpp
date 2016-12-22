#include <iostream>
#include <stdlib.h>

using namespace std;

int case1()
{
    char loop;
    do{
        int bil1, bil2, hasil;
        char tanda;

        system("cls");
        cout << "Bilangan 1 : ";
        cin >> bil1;
        cout << "Bilangan 2 : ";
        cin >> bil2;
        cout << "[+/-]      : ";
        cin >> tanda;
        cout << "\n\n" << bil1 << " " << tanda << " " << bil2 << " = ";

        if(tanda=='+'){
            hasil=bil1+bil2;
            cout << hasil;
        }
        else if(tanda=='-'){
            hasil=bil1-bil2;
            cout << hasil;
        }
        else{
            cout << "\nMaaf! Operator salah!\n";
        }
        cout << "\n\nIngin Mengulang? [y/n]  ";
        cin >> loop;
    }while(loop=='y');

    cout << "\n\nTERIMA KASIH... ^_^\n";
    system("pause");
}

int main() {
  int input, a, b;
  cout << "============ Menu ============\n\n";
  cout << "1. Penjumlahan & Pengurangan\n";
  cout << "2. Perkalian & Pembagian\n";
  cout << "3. Perpangkatan & Akar kuadrat\n";
  cout << "==============================\n";
  cout << "Input: ";
  cin >> input;

  switch(input) {
    case 1:
        case1();// perhitungan penambahan dan pengurangan
    break;

    case 2:
    //perhitungan perkalian dan pembagian
    break;

    case 3:
    // perhitungan perpangkatan dan akar kuadrat
    break;
  }
}
