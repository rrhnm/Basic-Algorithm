/* 
Nama: Raihan Maulana
NPM: 2255061002
Kelas: PSTI A'2022
Program Diskon Toko Buku Maribaca
*/

#include <iostream>
using namespace std;

int main() {
     
     //KAMUS
     int U, HB, TB, K;
     //Uang, Harga Buku, Total Belanja, Kembalian

     cout << "Program Toko Buku Maribaca" << endl;
     cout << "===========================" << endl;

     //ALGORITMA
     cout << "Masukkan uang (Rp) = ";
     cin >> U;
     cout << "Masukkan harga buku (Rp) = ";
     cin >> HB;

     if (HB >= 100000 && HB < 150000) {
          cout << "Selamat Anda mendapat diskon 7%!" << endl;
          TB = HB - (HB * 7/100);
          cout << "Total belanja Anda adalah = Rp" << TB << endl;
          K = U - TB;
          cout << "Kembalian Anda adalah = Rp" << K << endl;
     
     } else if (HB >= 150000 && HB <= 250000) {
          cout << "Selamat Anda mendapat diskon 10%!" << endl;
          TB = HB - (HB * 10/100);
          cout << "Total belanja Anda adalah = Rp" << TB << endl;
          K = U - TB;
          cout << "Kembalian Anda adalah = Rp" << K << endl;
     
     } else if (HB > 250000) {
          cout << "Selamat Anda mendapat diskon 12%!" << endl;
          TB = HB - (HB * 12/100);
          cout << "Total belanja Anda adalah = Rp" << TB << endl;
          K = U - TB;
          cout << "Kembalian Anda adalah = Rp" << K << endl;
     
     } else {
          cout << "Maaf, Anda tidak mendapat diskon :(" << endl;
          TB = HB;
          cout << "Total belanja Anda adalah = Rp" << TB << endl;
          K = U - TB;
          cout << "Kembalian Anda adalah = Rp" << K << endl;
     }
     return 0;
}