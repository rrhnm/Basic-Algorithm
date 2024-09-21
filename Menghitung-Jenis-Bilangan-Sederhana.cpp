#include <iostream>
using namespace std;
int main(){
//KAMUS
     int N, countgenap, countganjil, countpos, countneg;
//ALGORITMA
     cout << "Masukkan angka" << endl;
     countgenap = 0; countganjil = 0; countpos = 0; countneg = 0;
     cin >> N;
     while(N != -999){
          if(N % 2 == 0){
               countgenap++;
          }
          else{
               countganjil++;
          }
          if (N > 0){
               countpos++;
          }
          else if (N < 0){
               countneg++;
          }
          cin >> N;
     } //N = -999
     cout << "Bilangan genap ada = " << countgenap << endl;
     cout << "Bilangan ganjil ada = " << countganjil << endl;
     cout << "Bilangan positif ada = " << countpos << endl;
     cout << "Bilangan negatif ada = " << countneg << endl;
     return 0;
}