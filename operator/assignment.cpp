#include <iostream>
using namespace std;

int main(){
  int panjang, lebar;
  panjang = 30;
  lebar = 10;
  panjang = lebar;
  lebar = panjang*5;

  cout << "panjang: " << panjang << endl;
  cout << "lebar: " << lebar << endl;
}
