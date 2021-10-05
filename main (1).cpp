/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
  int day,mth,ost;
  cin >> day >> mth;
  if ((day<=31)||(mth<=12)) {
  switch (mth) {
      case 1:
        ost = 365 - day;
      break;
      case 2:
      if (day<=28) {
        ost = 365 - 31 - day;
      }  else {
          cout << "Неверные данные";
          break;
      }
      break;
      case 3:
        ost = 365 - 31 - 28 - day;
      break;
      case 4:
      if (day<=30)  {
        ost = 365 - 31 -30 - 28 - day;
      } else {
          cout << "Неверные данные";
          break;
      }
      break;
      case 5:
        ost = 365 - 31 - 30 - 28 - 31 - day;
      break;
      case 6:
        if (day<=30)  {
        ost = 365 - 31 - 30 - 28 - 31 - 30 - day;
        } else {
          cout << "Неверные данные";
          break;
        }
       break;
       case 7:
        ost = 365 - 31 - 30 - 28 - 31 - 30 - 31 - day;
        break;
        case 8:
        ost = 365 - 31 - 30 - 28 - 31 - 30 - 31 - 31 - day;
        break;
        case 9:
        if (day<=30) {
        ost = 365 - 31 - 30 - 28 - 31 - 30 - 31 - 31 - 30 - day;
        } else {
          cout << "Неверные данные";
          break;
        }
        break;
        case 10:
        ost = 365 - 31 - 30 - 28 - 31 - 30 - 31 - 31 - 30 - 31 - day;
        break;
        case 11:
        if (day<=30) {
        ost = 365 - 31 - 30 - 28 - 31 - 30 - 31 - 31 - 30 - 31 - 30 - day;
        } else {
          cout << "Неверные данные";
          break;
        }
        break;
        case 12:
        ost = 365 - 31 - 30 - 28 - 31 - 30 - 31 - 31 - 30 - 31 - 30 - 31 - day;
        break;
        
  }

   cout << ost;
    } 
    else {
    cout << "Неверные данные";
    }
}
