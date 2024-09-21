//Program Menghitung Keuntungan Bu Tailor Sweet
/*Nama: Raihan Maulana
NPM: 2255061002
Kelas: PSTI A'2022 */

#include <iostream>
using namespace std;

int main() {
     //KAMUS
     float LPB, HB, PK, LK, UK, SK; 
     //Luas per Baju, Harga Baju, Panjang Kain, Lebar Kain, Ukuran Kain, Sisa Kain
     float LPM, HM, PM, LM, UM; 
     //Luas per Masker, Harga Masker, Panjang Masker, Lebar Masker, Ukuran Masker
     int Mo, BB, BM; 
     //Modal, Banyak Baju, Banyak Masker
     long THB, THM, T, K; 
     //Total Harga Baju, Total Harga Masker, Total, Keuntungan/Kerugian

     
     HB = 120000; //Harga per Baju
     cout << "Harga per Baju = Rp" << HB << endl;
     HM = 10000; //Harga per Masker
     cout << "Harga per Masker = Rp" << HM << endl;
     Mo = 2900000; //Modal
     cout << "Modal = Rp" << Mo << endl;
     LPB = 3.5;
     cout << "Luas per Baju = " << LPB << " m2" << endl;
     LPM = 0.2 * 0.1;
     cout << "Luas per Masker = " << LPM << " m2" << endl;

     //ALGORITMA

     //KAIN
     cout << "Masukkan panjang kain = " << endl;
     cin >> PK;

     cout << "Masukkan lebar kain = " << endl;
     cin >> LK;

     UK = PK * LK;
     cout << "Ukuran Kain = " << UK << " m2 " << endl;
     
     //BAJU
     BB = UK/LPB;
     cout << "Banyak Baju = " << BB << endl;

     THB = BB * HB;
     cout << "Harga Total Baju = " << "Rp" << THB << endl;

     SK = UK - (BB * LPB);
     cout << "Sisa Kain = " << SK << " m2" << endl;

     //MASKER
     BM = SK/LPM;
     cout << "Banyak Masker = " << BM << endl;

     THM = BM * HM;
     cout << "Harga Total Masker = " << "Rp" << THM << endl;

     T = THB + THM;
     cout << "Total Penjualan = " << "Rp" << T << endl;

     K = T - Mo;

     if(T < Mo){
          cout << "Bu Tailor Sweet mendapati kerugian sebanyak " << "Rp" << K;
     }
     else if(T < Mo){
          cout << "Bu Tailor Sweet mendapati keuntungan sebanyak " << "Rp" << K;
     }
     return 0;
}