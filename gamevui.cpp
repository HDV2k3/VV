#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number, guess, nguesses=1;
	srand(time(0));
	number = rand()%100 + 1;
	do
	{
		printf("doan so giua 1 to 100\n");
		scanf("%d", &guess);
		if(guess>number)
		{
			printf("ban doan qua cao\n");
		}
		else if(guess<number)
		{
			printf("ban doan qua thap\n");
		}
		else
		{
			printf("ban da doan trung so\n");
			printf("so lan ban da du doan : %d\n", nguesses);
		}
		nguesses++;
	} while(guess!=number);
	return 0;
}

