#include <iostream>
#include <windows.h>

using namespace std;
int main() {

  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, a, b, c, d, jumlah = 0;
  cout << "Input Jumlah Baris Matriks Ke-1: ";
  cin >> a;
  cout << "Input Jumlah Kolom Matriks Ke-1: ";
  cin >> b;
  cout << "Input Jumlah Baris Matriks Ke-2: ";
  cin >> c;
  cout << "Input Jumlah Kolom Matriks Ke-2: ";
  cin >> d;
  if(b != d){
    cout << "Matriks Tidak Dapat Dikalikan Satu Sama Lain.\n";
  } else {
    cout << "Masukkan Matriks Ke-1: \n";
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan Matriks Ke-2: \n";
    for(i = 0; i < c; i++){
      for(j = 0; j < d; j++){
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < a; i++){
      for(j = 0; j < c; j++){
        for(k = 0; k < d; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
  
  return 0;
}
