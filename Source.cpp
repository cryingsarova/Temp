#include"Stack.h"
#include<iostream>

int main()
{
	Stack <int, 10> stack;
	for (int i = 0; i < 11; i++)
	{
		try
		{
			stack.push(i);
		}
		catch (char * error)
		{
			std::cout << error << std::endl;
		}
	}
	
	for (int i = 0; i < 11; i++)
	{
		try
		{
			std::cout << stack.pop() << std::endl;
		}
		catch (char * error)
		{
			std::cout << error;
		}
	}

	system("pause");

}