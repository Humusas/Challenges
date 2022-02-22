#include <iostream>
using namespace std;

int main()
{
//======================================================TASK1==================================================================
//1. Rewrite this switch statement as an if/else statement and, if you can, use enumerated values to replace the magic numbers:
	/*
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
	*/
//=========================================================
	/*
	enum number
	{
		zero = 0,
		one = 1,
		two = 2
	};

	int num;
		
	std::cout << "enter a number from 0 to 2" << std::endl;
	std::cin >> num;
	std::cout << std::endl;
	is_en	
	if (is_enum <>)
	{
		std::cout << number{zero} << std::endl;
	}
	else if (num == number{one})
	{
		std::cout << number{one} << std::endl;
	}
	else if (num == number{two})
	{
		std::cout << number{two} << std::endl;
	}
	else
	{
		std::cout << "enter an integer from 0 to 2" << std::endl;
	}
	system("pause");
	*/

//=========================================================================================================

/*================================================TASK2====================================================
//2. Rewrite this if-statement as a switch statement and remove the magic numbers in place of enumerations:
	
	int age = 33;

	if (age == 24)
	{
		std::cout << "You are still very young!" << std::endl;
	}
	else if (age == 55)
	{
		std::cout << "You are getting on in life" << std::endl;
	}
	else
	{
		std::cout << "You are what you are..." << std::endl;
	}
	system("pause");
	
=========================================================================================================*/
	/*
	int age;
	int ageGroup=0;

	do
	{
		std::cout << "enter your age" << std::endl;
		std::cin >> age;

		if (0 < age && age <= 24)
		{
			ageGroup = 1;
			std::cout << ageGroup << std::endl;
		}
		else if (age > 24 && age <= 55)
		{
			ageGroup = 2;
			std::cout << ageGroup << std::endl;
		}
		else if (55 < age)
		{
			ageGroup = 3;
			std::cout << ageGroup << std::endl;
		}
		else
		{
			ageGroup = 0;
			std::cout << "age cannot be negative" << std::endl;
		}
	} while (ageGroup == 0);

	switch (ageGroup)
	{
	case 1:
		std::cout << "You are still very young!" << std::endl;
		system("pause");
		break;
	case 2:
		std::cout << "You are getting on in life" << std::endl;
		system("pause");
		break;
	case 3:
		std::cout << "You are what you are..." << std::endl;
		system("pause");
		break;
	default:
		std::cout << "Error" << std::endl;
		system("pause");
		break;

	system("pause");
	}
	*/
//=========================================================================================================

//=====================TASK3===================
//3. Rewrite this for - loop as a while - loop:
	/*
	std::cout << "first version" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		//insert your own action here...
		std::cout << i << std::endl;
	}
	system("pause");
	
//=============================================
	
	int i = 0;

	std::cout << "second version" << std::endl;
	while ( i < 10)
	{
		std::cout << i << std::endl;
		i++;
	}
	system("pause");
	*/
//==============================================

//==============TASK4===========================
//4. Rewrite this do-while as a for-loop:
	/*
	int i = 0;
	std::cout << "first version" << std::endl;
	do
	{
		//insert your own action here...
		std::cout << i << std::endl;
		++i;
	} while (i < 25);
	system("pause");
	
//===============================================
	
	std::cout << "second version" << std::endl;
	for (int i = 0; i < 25; i++)
	{
		std::cout << i << std::endl;
	}
	system("pause");
	*/
}