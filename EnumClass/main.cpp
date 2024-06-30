#include <iostream>

enum class Fruits
{
	Apple, Banana, Cherry, Grapes = 7
};

int main()
{
	Fruits f1 = Fruits::Apple;
	std::cout << static_cast<int>(f1) << '\n';


	return 0;
}