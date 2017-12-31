#include <iostream>
#include <string>
#include <iomanip> // library IO Manipulation

using namespace std;

int main() {
  cout << "|" << setw(51) << setfill('=') << "|" << endl;
  cout << "|" << setw(18) << setfill(' ') << "" <<"Column 1 Row 1" << setw(19) << setfill(' ') <<"|" << endl;
  cout << "|" << setw(51) << setfill('=') << "|" << endl;
  cout << "|" << setw(5) << setfill(' ') << "" <<"Column 2 Row 1 " << setw(6) << setfill(' ') << "|" << setw(5) << setfill(' ') << "" << "Column 2 Row 2" << setw(6) << setfill(' ') << "|" << endl;
  cout << "|" << setw(51) << setfill('=') << "|" << endl;
  cout << "| Column 3 Row 1 | Column 3 Row 2 | Column 3 Row 3 |" << endl;
  cout << "|" << setw(51) << setfill('=') << "|" << endl;
  cout << " Press Enter to Continue....";
  cin.ignore();
  return 0;
}
