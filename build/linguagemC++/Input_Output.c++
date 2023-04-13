#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!\n"
       << "Olá mundo!" << std::endl;

  cout << "Exercicios circunferencia" << endl;
  int raio = 0;
  const float pi = 3.1415;

  cout << "\nQual valor do Raio?" << endl;
  cin >> raio;

  double area = pi * (raio * raio);

  cout << "\nO valor da area da circunferencia = " << area << endl;

  // Programa tabela verdade XOR (a OUexclusivo b | a ^ b )
  int a = 0, b = 0;
  cout << "\nTabela verdade para a expressão a XOR b\n";

  cout << setfill(' ') << setw(3) << "a"
       << "|" << setw(3) << "b"
       << "|" << setw(6) << "a ^ b" << endl;

  cout << setfill('-') << "-" << setw(3) << "|"
       << "-" << setw(3) << "|" << setw(7) << "" << endl;

  b = 1;

  cout << setfill(' ') << setw(3) << a << "|" << setw(3) << b << "|" << setw(4)
       << (a ^ b) << endl;

  a = 1;
  b = 0;

  cout << setfill(' ') << setw(3) << a << "|" << setw(3) << b << "|" << setw(4)
       << (a ^ b) << endl;

  b = 1;

  cout << setfill(' ') << setw(3) << a << "|" << setw(3) << b << "|" << setw(4)
       << (a ^ b) << endl;
}