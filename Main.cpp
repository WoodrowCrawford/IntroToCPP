#include <iostream>


void FizzBuzz(int num)
{
	for (int i = 0; i <= num; i++)
	{
		if (i % 3 == false && i % 5 == false)
		{
			std::cout << i << ": FizzBuzz" << std::endl;
		}
		else if (i % 5 == false)
		{
			std::cout << i << ": Buzz" << std::endl;
		}
		else if (i % 3 == false)
		{
			std::cout << i << ": Fizz" << std::endl;
		}
	}
}

//Game where player guesses a number
void GuessGamePlayer()
{
	int playerNum = 5;
	int num[7] = {1, 2, 3, 4, 5, 6, 7};
	int min = num[0];
	int mid = num[3];
	int max = num[6];
	int correctNum = num[5];
	

	//Gets the player number until they guess the correct one
	while (playerNum != correctNum)
	{
		std::cout << "Please type a number: ";
		//Gets the player input
		std::cin >> playerNum;

		//If the player is out of range
		if (playerNum > min)
		{
			std::cout << "Out of range man";
			
		}
	    //If the the player is below the mid range
		else if (playerNum >= min && playerNum <= mid && playerNum < max)
		{
			std::cout << "Go higher bro";
			min = num[4];
			mid = num[6];
			max = num[6];
		}

	}

}
//Game where computer guesses a number
void GuessGameComputer()
{
	int min = 0;
	int mid = 0;
	int max = 0;
	int cpuNum = 0;
	bool cpuWins = false;

	std::cout << "Welcome to the guessing game! Please select the minimum, middle, and max values."
		<< " I will try to guess the right number" << std::endl;
	std::cout << "Min value: "; 
	std::cin >> min;

	std::cout << "Mid value: ";
	std::cin >> mid;

	std::cout << "Max value: ";
	std::cin >> max;

	while (cpuWins == false)
	{
		cpuNum = cpuNum + mid;
		
		std::cout << "Ummm... is it " << cpuNum << "?";
		system("pause");
		std::cout << "1. "; 
		std::cin >> "";
	}
}
	

int main()
{
	//This is the same as "Console.Write();"
	
	GuessGameComputer();

	

	


	system("pause");
	return 1;
}