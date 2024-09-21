//Program Mengecek Bilangan Bulat Positif atau Negatif atau 0
#include <iostream>
using namespace std;

int main() {
     //KAMUS
     int i;

     //ALGORITMA
     cout << "Masukkan Bilangan = " << endl;
     cin >> i;
     if (i > 0) {
          cout << "Bilangan tersebut adalah bilangan bulat positif" << endl;
     }
     else if (i == 0) {
          cout << "Bilangan tersebut adalah nol (0)" << endl;
     }
     else {
          cout << "Bilangan tersebut adalah bilangan bulat negatif" << endl;
     }
     return 0;
}