//Mengalikan isi 2 matriks
#include <iostream>
using namespace std;
int main(){
// KAMUS
     int M1[10][10]; int NBrs1, NKol1;
     int M2[10][10]; int NBrs2, NKol2;
     int MHasil[10][10]; int NBrsHsl, NKolHsl;
     int i, j, k;
// ALGORITMA
//Membaca isi matriks M1 dan M2 : Buat sebagai latihan
// Deklarasi dan pengisian MHasil dengan perkalian M1 dan M2
     NBrsHsl = NBrs1; NKolHsl = NKol2;
     for (i=0; i<NBrsHsl; i++){
          for (j=0; j<NKolHsl; j++){
               MHasil[i][j] = 0;
               for (k=0; k<NKol1; k++) {
                    MHasil[i][j] = MHasil[i][j] + (M1[i][k] * M2[k][j]);
               }
          }
     }
return 0;
}