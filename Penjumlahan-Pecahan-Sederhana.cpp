// Program Penjumlahan Pecahan
/* Nama: Raihan Maulana
NPM: 2255061002
Kelas: PSTI A 2022 */

#include <iostream>
using namespace std;

int main()
{
     //KAMUS
     int A, B, C, D, P1, P2;

     //ALGORITMA
     cout << "Masukkan Pembilang 1: ";
     cin >> A;
     cout << "Masukkan Penyebut 1: ";
     cin >> B;
     cout << A << "/" << B << endl;

     cout << "Masukkan Pembilang 2: ";
     cin >> C;
     cout << "Masukkan Penyebut 2: ";
     cin >> D;
     cout << C << "/" << D << endl;

     P1 = (A * D + B * C); //Hasil Pembilang
     P2 = (B * D); //Hasil Penyebut
     cout << "Hasil = " << P1 << "/" << P2 << endl;
     return 0;
}