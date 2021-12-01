#include <iostream>

int main()
{
/*====================TASK===============================
//1. Rewrite this switch statement as an if/else statement and, if you can, use enumerated values to replace the magic numbers:

	int num = 1;

	switch (num)
	{
	case 0:
		std::cout << "0" << std::endl;
		break;
	case 1:
		std::cout << "1" << std::endl;
		break;
	case 2:
		std::cout << "2" << std::endl;
	}
	system("pause");

=========================================================*/

	int num = 1;

	if (num == 0)
	{
		std::cout << "0" << std::endl;
	}
	else if (num == 1)
	{
		std::cout << "1" << std::endl;
	}
	else if (num == 2)
	{
		std::cout << "2" << std::endl;
	}
	else
	{
		std::cout << "num has other value" << std::endl;
	}
	system("pause");

}