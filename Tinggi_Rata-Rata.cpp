// Program Tinggi Rata-Rata
// Hitung tinggi rata-rata 5 anak
#include <iostream>
using namespace std;

int main()
{    
     // KAMUS
int a1, a2, a3, a4, a5;
float ratarata;
     
     // ALGORITMA
     cout << "Masukkan tinggi anak 1 =" << endl;
     cin >> a1;
     
     cout << "Masukkan tinggi anak 2 =" << endl;
     cin >> a2;
     
     cout << "Masukkan tinggi anak 3 =" << endl;
     cin >> a3;

     cout << "Masukkan tinggi anak 4 =" << endl;
     cin >> a4;
     
     cout << "Masukkan tinggi anak 5 =" << endl;
     cin >> a5;

     ratarata = (a1 + a2 + a3 + a4 + a5)/5;
cout << "Rata-rata = " << ratarata << endl;
return 0;
}