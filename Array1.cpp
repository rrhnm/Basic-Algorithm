#include <iostream>
using namespace std;
int main (){
     //KAMUS
     int TabInt[10]; int i;

     //Algoritma
     //Mengisi Array
     for (i = 0; i < 10; i++){
          TabInt[i] = i * 10;
     }

     //Menampilkan Array
     for (i = 0; i < 10; i++){
          cout << TabInt[i] << endl;
     }
     return 0;
}