#include "iostream"
/*

//First name Litra (1)
int main() {

	std::cout <<"**   **" << std::endl;
	std::cout <<"**  **" << std::endl;
	std::cout <<"*****" << std::endl;
	std::cout <<"*****" << std::endl;
	std::cout <<"**  **" << std::endl;
	std::cout <<"**   **" << std::endl;

	return 0;
}
*/
/*
 //Perimetr and Ploshad (2c)

int main() {
	int a, b;
	float Per, Plosh;

  std::cout << "Number 1: ";
  std::cin >> a;

  std::cout << "Number 2: ";
  std::cin >> b;

 Per = 2 * (a+b);

 Plosh = a * b;

  std::cout << Per<< std:: endl;

  std::cout << Plosh<< std:: endl;
}
*/

/*
 // Srednee znachenie (6)
int main() {

float a, b, c, Sred, num;

std::cout << "First: ";
std::cin >> a;

std::cout << "Second: ";
std::cin >> b;

std::cout << "Third: ";
std::cin >> c;

Sred = (a + b + c) / 3;

num = 2 * (a + c) - 3 * b;

std::cout << Sred << std::endl;

std::cout << num << std::endl;

}
*/

/*
 //Znachenie viragenia (8c)

int main() {

float x, res;

std::cout << "X: ";
std::cin >> x;

res= (x + 1)*(x + 1) + 3*(x + 1);

std::cout << res << "-" << "Result" << std::endl;
}
*/

/*
 //Perevod (9c)
int main() {

int x;
float a, b, c;

std::cout << "kvMetr-1; Gektar-2; Akr-3, insert the number you want to use: ";
std::cin >> x;

if (x == 1) {

std::cout << "Amount: ";
std::cin >> a;

std::cout << "Gektar " << (a * 0.0001) << std::endl;
std::cout << "Akr " << (a * 0.000247105) << std::endl;

}
else if (x == 2) {

std::cout << "Amount: ";
std::cin >> b;

std::cout << "Akr " << (b * 2.47105) << std::endl;
std::cout << "KvMetr " << (b * 10000) << std::endl;

}
else if (x == 3) {

std::cout << "Amount: ";
std::cin >> c;

std::cout << "Gektar " << (c * 0.404686) << std::endl;
std::cout << "KvMetr " << (c * 4046.86) << std::endl;

}

return 0;
}
*/


 // Octatok ot delenia (12)
int main() {

int a, b;
float num1, num2;

std::cout << "Number 1: ";
std::cin >> a;

std::cout << "Number 2: ";
std::cin >> b;

if (a / b && a % b) {

	num1 = a % b;
	num2 = a / b;

	std::cout << "numbers are divided" << std::endl;
	std::cout << "Octatok " << num1 << std::endl;
	std::cout << "Chastnoe " << num2 << std::endl;
    }
}
