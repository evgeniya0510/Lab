#include <stdio.h>
#define TURN_SIZE 5
int turn[5];
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
	if (k = 0)
	{
		int temp = turn[k];
		turn[k] = 0;
		
		for(i = 0;i < TURN_SIZE;i++)
		{
			turn[i] = turn[i+1];
		}
		return temp;
		
	}
	if (turn[0] = 0)
	{
		error(&a);
	}
	
}
int error(int *x)
{
	*x=*x+1; 
	return *x;
}

void print_turn(void)
{
	for (i = 0; i < TURN_SIZE; i++)
	{
		printf("%d ", turn[i]);
	}
}


int main()
{
	for (i = 0; i < 5; i++ )
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
	

for (i = 0; i < 5; i++ )
	{
		pop();
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
