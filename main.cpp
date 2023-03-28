#include <iostream>
#include <fstream>


int func2(int a)
{
	int c = a * a;
	return a + c;
}

int func1(int x)
{
	return func2(x) + 10 * x;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Hello world!" << std::endl;

	std::ifstream fx("in.txt");

	if (fx)
	{


		int x;
		int a;
		fx >> x;
		fx >> a;

		std::cout << x << std::endl;
		std::cout << a << std::endl;

		std::cout << "Привет мир!" << std::endl;

	}
	else
	{
		std::cout << "File is not opened!" << std::endl;
	}

	system("pause");
}