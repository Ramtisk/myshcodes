
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1;
	cout << "Guess My Number Game\n\n" ;

	do
	{
		if(tries>=10)
		{
		break;
		}
		
		cout <<"Enter a guess between 1 and 100 : " ;
		scanf("%d", &guess);
		tries++;
		
		if (guess > num)
			printf("Too high!\n\n");
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}