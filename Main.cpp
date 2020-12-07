#include <iostream>


void FizzBuzz(int num)
{
	for (int i = 0; i <= num; i++)



	if (num % 3 == false && num % 5 == false)
	{
		std::cout << num << "FizzBuzz" << std::endl;
	}
	else if (num % 5 == false)
	{
		std::cout << num << "Buzz" << std::endl;
	}
	else if (num % 3 == false)
	{
		std::cout << num << "Fizz" << std::endl;
	}
}

int main(int num)
{
	int num = 0;
	std::cout << "type a number" << std::endl;
	std::cin >> num;
	FizzBuzz(num);

	system("pause");
	return 1;
}