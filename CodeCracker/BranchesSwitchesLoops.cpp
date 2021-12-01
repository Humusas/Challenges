#include <iostream>

int main()
{
/*======================================================TASK1==================================================================
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
	/*
	int num;
	std::cin>> num;

	if (num)
	{
		std::cout << num << std::endl;
	}
	else 
	{
		std::cout << "enter an integer" << std::endl;
	}
	system("pause");
	*/

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
	
===========================================================*/
	
	int age;
	int ageGroup=0;

	std::cout << "enter your age" << std::endl;
	std::cin >> age;

	if (0 < age && age <= 24)
	{
		ageGroup = 1;
		std::cout << ageGroup << std::endl;
	}
	else if (24 < age && age <= 55)
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
		std::cout << "age cannot be negative" << std::endl;
	}

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

//=====================TASK3===================
//3. Rewrite this for - loop as a while - loop:

	for (int i = 0; i < 10; i++)
	{
		//insert your own action here...
	}
}