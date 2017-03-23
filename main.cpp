#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
using std::endl;
using std::cout;
using std::cin;

int main(){
  string name;
  int year, month, day;
  cout<<"Introduce tu nombre: ";
  cin >> name;
  cout << "Tu nombre es " << name << "\n";
  cout << "Introduce tu año de nacimiento: ";
  cin >> year;
  cout << "Introduce tu mes de nacimiento: ";
  cin >> month;
  cout << "Introduce tu dia de nacimiento: ";
  cin >> day;
  cout << "Vas a morir MAÑANA, no es cierto tu fecha de nacimiento es: " << day << "-" << month << "-" << year <<endl;
  return 0;
}
