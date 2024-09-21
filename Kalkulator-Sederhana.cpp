//PROGRAM KALKULATOR CALC-SS
#include <iostream>
using namespace std;
int main() {
//KAMUS
     int A, B;
     char pilihan;
//ALGORITMA
     cout << "Masukkan bilangan pertama (A) = ";
     cin >> A;
     cout << "Masukkan bilangan kedua (B) = ";
     cin >> B;
     
     cout << "Pilihan a untuk penjumlahan dua buah bilangan" << endl;
     cout << "Pilihan b untuk pengurangan dua buah bilangan" << endl;
     cout << "Pilihan c untuk perkalian dua buah bilangan" << endl;
     cout << "Pilihan d untuk membagi dua buah bilangan float/integer" << endl;
     cout << "Pilihan e untuk pembagian dua buah bilangan" << endl;
     cout << "Pilihan f untuk sisa hasil bagi dua buah bilangan" << endl;
     
     cout << "Masukkan pilihan operasi = ";
     cin >> pilihan;
     
     
     switch (pilihan) {
          case 'a' : cout << "A + B = " << A + B << endl; break;
          case 'b' : cout << "A - B = " << A - B << endl; break;
          case 'c' : cout << "A * B = " << A * B << endl; break;
          case 'd' : cout << "A / B = " << (float)A / (float)B << endl; break;
          case 'e' : cout << "A div B = " << A / B << endl; break;
          case 'f' : cout << "A mod B = " << A % B << endl; break;
          default  : cout << "Bukan pilihan menu yang benar" << endl; break;
     }     
return 0;
}