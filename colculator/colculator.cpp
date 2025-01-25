

#include <iostream>

int main()
{
	float a, b;
	char c;

	std::cout << "Enter a number : ";
	std::cin >> a;
	std::cout << "Enter a number : ";
	std::cin >> b;
	std::cout << "Enter an operator : ";
	std::cin >> c;
	if (c == '+')
		std::cout << a + b;	
	if (c == '-')
		std::cout << a - b;
	if (c == '*')
		std::cout << a * b;
	if (c == '/') {
		if (b == 0.0f) std::cout << "eroor";
		else std::cout << a / b;
	}



	return 0;
}

