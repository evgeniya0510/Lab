#include <stdio.h>
#define TURN_SIZE 3
int turn[3];
int k = 0;
int i = 0,a = 0;
// Описание функции push
void push(int value)
{
	if (k != TURN_SIZE)
	{
		turn[k] = value;
		k++;
	}
	else 
	{
		error(&a);
	}
}

// Описание функции pop
int pop(void)
{
	if (k != 0);
	{
		int temp = turn[k-1];
		turn[k-1] = 0;
		return temp;
	}

	else 
	{
		error(&a);
	}
}
int error(int *x)
{
	*x=*x+1; 
}

void print_turn(void)
{
	for (i = 0; i < TURN_SIZE; i++)
	{
		printf("%d ", turn[i]);
	}
}
 void sdvig (void)
 {
	for(i = 0;i < 4;i++)
	{
		turn[i] = turn[i+1];
	}
 }
 int main()
{
	for (i = 0; i < 4; i++ )
	{
		push(3);
		if (a == 1)
		{
			printf("Oshibka");
			a=0;
		}
		else
		{
			print_turn();
		}
	}
	

	for (i = 0; i < 4; i++ )
	{
		pop();
		sdvig ();
		if (a == 1)
		{
			printf("Oshibka");
			a=0;
		}
		else
		{
			print_turn();
		}
	}
return 0;
}
