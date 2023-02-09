#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
   double num1, num2;
   char operacion;

   cout << "ingresa tu primer numero: ";
   cin >> num1;

   cout << "ingresa el segundo numero: ";
   cin >> num2;

   cout << "Elige el operador a usar (+, -, *, /): ";
   cin >> operacion;

   if (operacion == '+') {
      cout << num1 + num2;
   } else if (operacion == '-') {
      cout << num1 - num2;
   } else if (operacion == '*') {
      cout << num1 * num2;
   } else if (operacion == '/') {
      cout << num1 / num2;
   } else {
      cout << "operador invalido ";
   }

   return 0;
}
