//Program Menghitung Upah Pak Mustofa
/* Nama: Raihan Maulana
NPM: 2255061002
Kelas: PSTI A 2022 */

#include <iostream>
using namespace std;

int main()
{
     //KAMUS
     float LT, LB, LK, LR, U;

     //ALGORITMA

     LT = (20 * 15);
     cout << "Luas Tanah= " << LT << endl;
     
     LB = (1.5 + 7.5) * 10 / 2;
     cout << "Luas Bangunan= " << LB << endl;
     
     LK = 3.14 * 1.5 * 1.5;
     cout << "Luas Kolam= " << LK << endl;

     LR = 300 - (112.5 + 7.065);
     cout << "Luas Rumput= " << LR << endl;

     U = LR * 5000;
     cout << "Upah Pak Mustofa= " << "Rp" << U << endl;
     return 0;
}