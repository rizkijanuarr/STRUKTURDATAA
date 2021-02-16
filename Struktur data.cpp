#include <iostream>
#include <windows.h>

using namespace std;
int main(){
  
 
  int i, j, b, m, matriks[10][10], transpose[10][10];
  cout << "Input Jumlah Baris Matriks: ";
  cin >> b;
  cout << "Input Jumlah Kolom Matriks: ";
  cin >> m;
  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < b; i++){
    
	for (j = 0; j < m; j++){
      cin  >> matriks[i][j];
    }
  }
  
  for (i = 0; i < b; i++){
    for (j = 0; j < m; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  
  cout << "Hasil Akhir Transpose Matriks: \n";
  for (i = 0; i < b; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
