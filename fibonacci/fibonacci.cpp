/**
************************
import time

def FibonacciRecursiva(n):
    if n<=1:
        return n;
    else:
        return FibonacciRecursiva(n-1) + FibonacciRecursiva(n-2);

def FibonacciNoRecursiva(n):
    x=0
    n1=0
    n2=1
    if n<=1:
        return n;
    else:
        for x in range(1,n):
            f=n1+n2;
            n1=n2;
            n2=f;
            x=x+1
        return f;

while(1):
    numero = int(input("Introduce el número en la secuencia de Fibonacci que quieres calcular: "))
    print("El numero en la secuencia de Fibonacci es: " + str(numero));
    start= time.time(); #Empieza a contar el tiempo
    print("\nEl valor correspondiente con algoritmo de Fibonnaci NO Recursivo es: " + str(FibonacciNoRecursiva(numero))+ "\nTerminado en "+str(time.time() - start)+" segundos!\n");
    start= time.time(); #Empieza a contar el tiempo
    print("\nEl valor correspondiente con algoritmo de Fibonnaci Recursivo es: " + str(FibonacciRecursiva(numero)) + "\nTerminado en "+str(time.time() - start)+" segundos!\n");
    print("\n------------------------------------------------------\n")
************************
*/
//Tarea fibonacci en c++ en no recursivo

#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
using std::cout;
using std::cin;
using std::endl;
using std::chrono::high_resolution_clock;

unsigned long long fibonacci(const int iter) {
  unsigned long long int first = 0;
  unsigned long long int second = 1;

  unsigned long long aux = 0;
  if (iter <= 1)
    return 0;
  else if (iter == 2)
    return 1;
  else if (iter > 2) {
    for (int i = 0; i < iter; i++) {
      aux = first + second;
      first = second;
      second = aux;
    }
    return aux;
  }
  return iter;
}

unsigned long long fibonacci_rec(const int iter) {
  if (iter <= 1)
    return 0;
  else if (iter == 2)
    return 1;
  else
    return fibonacci_rec(iter - 1) + fibonacci_rec(iter - 2);
}

int main() {
  cout << "Enter the Fibonacci 'n'th number to calculate\n";
  unsigned int Fiboiter = 0;
  cin >> Fiboiter;
  float timer;
  // Start timer
  unsigned long long Fibo = fibonacci(Fiboiter);
  // End timer
  cout << "The 'n'th Fibonacci number is: " << Fibo << " and it took " << timer << "to calculate\n";

  // Start timer
  Fibo = fibonacci_rec(Fiboiter);
  // End timer
  cout << "The 'n'th Fibonacci number is: " << Fibo << " and it took " << timer << "to calculate with recursion";
  cin >> Fiboiter;
  return 0;
}
