//Program Resistor
#include <iostream>
using namespace std;

int main() {
     //KAMUS
     int R1, R2, R3, RT;

     //ALGORITMA
     cout << "Masukkan tahanan 1 (Ohm) = " << endl;
     cin >> R1;
     cout << "Masukkan tahanan 2 (Ohm) = " << endl;
     cin >> R2;
     cout << "Masukkan tahanan 3 (Ohm) = " << endl;
     cin >> R3;
     
     if (R1 < 0 || R2 < 0 || R3 < 0) {
          cout << "Tahanan tidak boleh negatif!" << endl;
     } else {
          RT = R1 + R2 + R3;
          cout << "Total = " << RT << " Ohm" << endl;
     }
     return 0;
}