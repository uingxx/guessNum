//The following program will act as a guessing game in which the user
//has eight tries to guess a randomly generated number. 
//The program will tell the user each time whether he guessed high or low:

#include <stdlib.h>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int number = rand() % 100; // rand() % 100  is 0 - 99//  rand() 30 + 1 ;
	int guess = -1;
	int trycount = 0;
	cout << "Guest a number from 1 to 100" << endl;
	while (guess != number &&  trycount < 8)
	{
		cout << "Enter a guess";
		cin >> guess;
		if (guess == number)
			break;
		if (guess < number)
			cout << "too low" << endl;
		else if (guess > number)
			cout << "too high" << endl;
		trycount++;
		cout << "Try again. Attempt " << trycount << endl;
	}

	if (trycount != 8)
		cout << "That's correct!";
	else
		cout << "Good try. The correct number was " << number;
}

	