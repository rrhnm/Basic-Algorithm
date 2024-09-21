//PROGRAM RESTO DAHAR
/*Nama: Raihan Maulana
NPM: 2255061002
Kelas: PSTI A'2022 */

#include <iostream>
using namespace std;

int main(){

//KAMUS
     int makanan, minuman;
     int Tmak, Tmin, TH, T; /*Total harga makanan, total harga minuman, 
     Total Harga, Total Bayar (Setelah pajak)*/
     int countmak, countminuman; //Hitung makanan, hitung minuman

//ALGORITMA
     cout << "=================================================" << endl;
     cout << "         SELAMAT DATANG DI RESTORAN DAHAR!" << endl;
     cout << "=================================================" << endl;

     cout << "===DAFTAR MENU MAKANAN RESTORAN DAHAR===" << endl;
     cout << "1. Nasi goreng" << endl;
     cout << "2. Bakso" << endl;
     cout << "3. Nasi 3T" << endl;
     cout << "4. Mi Ayam" << endl;
     cout << "=================================================" << endl;
     cout << "Pilih makanan dengan angka dan masukkan 0 jika sudah selesai" << endl;
    
     countmak = 0;
     cin >> makanan;

     while(makanan != 0){
     switch(makanan){
          case 1: cout << "Nasi Goreng = Rp10000" << endl; break;
          case 2: cout << "Bakso = Rp10000" << endl; break;
          case 3: cout << "Nasi 3T = Rp10000" << endl; break;
          case 4: cout << "Mi Ayam = Rp10000" << endl; break;
          }
          if(makanan == 1){
               countmak++;
          }
          else if(makanan == 2){
               countmak++;
          }
          else if(makanan == 3){
               countmak++;
          }
          else if(makanan == 4){
               countmak++;
          }
          else{
               cout << "Menu tidak tersedia." << endl;
          }
          cin >> makanan;
     }
     cout << "Total makanan = " << countmak << endl;
     Tmak = countmak * 10000;
     cout << "Total harga makanan = Rp" << Tmak << endl;

     cout << "===DAFTAR MENU MINUMAN RESTORAN BAHAR===" << endl;
     cout << "1. Jus Mangga" << endl;
     cout << "2. Jus Alpukat" << endl;
     cout << "3. Teh Es" << endl;
     cout << "4. Milktea" << endl;
     cout << "=================================================" << endl;
     cout << "Pilih minuman dengan angka dan masukkan 0 jika sudah selesai" << endl;
     
     countminuman = 0;
     cin >> minuman;

     while(minuman != 0){
     switch(minuman){
          case 1: cout << "Jus Mangga = Rp5000" << endl; break;
          case 2: cout << "Jus Alpukat = Rp5000" << endl; break;
          case 3: cout << "Teh Es = Rp5000" << endl; break;
          case 4: cout << "Milktea = Rp5000" << endl; break;
          }
          if(minuman == 1){
               countminuman++;
          }
          else if(minuman == 2){
               countminuman++;
          }
          else if(minuman == 3){
               countminuman++;
          }
          else if(minuman == 4){
               countminuman++;
          }
          else{
               cout << "Menu tidak tersedia." << endl;
          }
          cin >> minuman;
     }
     cout << "Total minuman = " << countminuman << endl;
     Tmin = countminuman * 5000;
     cout << "Total harga minuman = Rp" << Tmin << endl;
     
     TH = Tmak + Tmin;
     cout << "Total Harga = Rp" << TH << endl;

     T = (TH * 0.1) + TH;
     cout << "Total Bayar (Pajak 10%) = Rp" << T << endl;

     cout << "===TERIMA KASIH TELAH MENGGUNAKAN PROGRAM RESTORAN DAHAR===" << endl;
     cout << "           ==SELAMAT MENIKMATI PESANAN==" << endl;
     return 0;
}