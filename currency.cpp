#include <iostream>

int main() {

float pesos;
float reais;
float soles;
float pesos_usa;
float reais_usa;
float soles_usa;
  
std::cout << "Enter number of Colombian Pesos: \n";
std::cin >> pesos;

std::cout << "Enter number of Brazilian Reais: \n";
std::cin >> reais;

std::cout << "Enter number of Peruvian Soles: \n";
std::cin >> soles;
  
pesos_usa = pesos / 3193.37; 
reais_usa = reais / 3.73829;
soles_usa = soles / 3.28472; 
  
  std::cout << "You currently have: " << pesos_usa << " dollars of Colombian pesos, " << reais_usa << " dollars of Brazilian reais " << soles_usa << " of Peruvian soles. \n";
 
  return 0;

}