#include <iostream>

void Stars();
void Rectangle();
void HollowRect();
void Triangle();
void Diamond();

int main()
{
	//Stars();
	//Rectangle();
	//HollowRect();
	//Triangle();
	Diamond();
	system("pause");
}


void Stars()
{
	int numStars;
	char Star = '*'; //not neccessery variable

	std::cout << "How many stars would you like to see?" << std::endl;
	std::cin >> numStars;

	for (int i = 0; i < numStars; i++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
}

void Rectangle()
{
	char Star = '*';
	int width ;
	int height;

	std::cout << "How big rectangle would you like to see?" << std::endl;
	std::cout << "Enter desired height" << std::endl;
	std::cin >> height;
	std::cout << "Enter desired width" << std::endl;
	std::cin>> width;
	
	for (int i = 0; i < height; i++) // naming order in loops [i, j, k, l]
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << Star;
		}
		std::cout << std::endl;
	}
}

void HollowRect()
{
	char Star = '*';
	char HollowStar = ' ';
	int width;
	int height;

	std::cout << "How big rectangle would you like to see?" << std::endl;
	std::cout << "Enter desired height" << std::endl;
	std::cin >> height;
	std::cout << "Enter desired width" << std::endl;
	std::cin >> width;
	
	for (int i = 0; i <= height; i++)
	{
		for (int j = 0; j <= width; j++)
		{
			if (i == 0 || j == 0 || i == height || j == width ) // or--||
			{
				std::cout << Star;
			}
			else
			{
				std::cout << HollowStar;
			}
		}
		std::cout << std::endl;
	}
}

void Triangle()
{
	int maxRows;
	char Star = '*';

	std::cout << "Enter desired triangle height" << std::endl;
	std::cin >> maxRows;

	for (int i = 0; i < maxRows; i++)
	{
		std::cout << Star;
		for (int j = 0; j < i; j++)
		{
			std::cout << Star;
		}
		std::cout << std::endl;
	}
}

void Diamond()
{
	int maxRows;
	char Star = '*';

	std::cout << "Enter desired diamond width" << std::endl;
	std::cin >> maxRows;
	

	for (int i = 0; i < maxRows; i++)
	{
		std::cout << Star;
		for (int j = 0; j < i; j++)
		{
			std::cout << Star;
		}
		std::cout << std::endl;
	}

	for (int k = (maxRows-2); k >= 0; k--)
	{
		std::cout << Star;
		for (int l = k; l > 0; l--)
		{
			std::cout << Star;
		}
		std::cout << std::endl;
	}

	//while (numStars < maxRows)
	//{
	//	std::cout << Star;
	//	for (int i = 0; i < numStars; i++)
	//	{
	//		std::cout << Star;
	//	}
	//	numStars++;
	//	std::cout << std::endl;

	//	if (numStars == maxRows)
	//	{
	//		while (numStars > 0)
	//		{
	//			std::cout << Star;
	//			for (int i = numStars; i > 1; i--)
	//			{
	//				std::cout << Star;
	//			}
	//			numStars--;
	//			std::cout << std::endl;
	//		}
	//		break;
	//	}
	//}






}