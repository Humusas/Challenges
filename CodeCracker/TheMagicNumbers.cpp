#include <iostream>
using namespace std;

//Replace the magic numbers below with constants to make the code clearer
int main()
{
//==========================================================================================================

	std::cout << "Welcome to the game, hero! You have a total health of " << 100 << "\n";
	std::cout << "and are in a fit condition to fight. With this health of " << 100 << "\n";
	std::cout << "you will be able to fight off many enemies, but beware they will fight \n";
	std::cout << "back, and soon your health will deplete from " << 100 << "down to zero!\n";
	std::cout << "Your stamina is only on " << 50 << " so be careful you don't get tired\n";
	std::cout << "too fast! Heros with a stamina of " << 50 << " usually don't last long\n";

//===========================================================================================================
	
	int health = 100;
	int stamina = 50;

	std::cout << "Welcome to the game, hero! You have a total health of " << health << "\n";
	std::cout << "and are in a fit condition to fight. With this health of " << health << "\n";
	std::cout << "you will be able to fight off many enemies, but beware they will fight \n";
	std::cout << "back, and soon your health will deplete from " << health << "down to zero!\n";
	std::cout << "Your stamina is only on " << stamina << " so be careful you don't get tired\n";
	std::cout << "too fast! Heros with a stamina of " << stamina << " usually don't last long\n";

}