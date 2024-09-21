#include <iostream>
using namespace std;

int entryData(int data[]){
     int i;
     for (i = 0; i < 10; i++){
         cout << "Masukkan indeks ke-" << i << endl;
         cin >> data[i];
     }
     return data[i];
}

int main (){
     //KAMUS
     int data[10]; int i;
     data[i] = entryData(data);
     for (i = 0; i < 10; i++){
          cout << "Array ke-" << i << " = " << data[i] << endl;
     }
     return 0;
}