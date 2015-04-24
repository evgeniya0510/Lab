#include <stdio.h>
#define STACK_TURN 3
int turn[3];
int k = 0;
int i = 0,a = 0;
// Описание функции push
void push(int value)
{
	if (k != STACK_TURN)
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
	if (k == 0)
	{
		int temp = turn[k];
		turn[k] = 0;
		
		for(i = 0;i <= STACK_TURN;i++)
		{
			turn[i] = turn[i+1];
		}
		return temp;
	}
	else
	{
		if (turn[0] = 0) 
		{
			error(&a);
		}
	}
}

int error(int *x)
{
	*x=*x+1; 
	return *x;
}

void print_turn(void)
{
	for (i = 0; i < STACK_TURN; i++)
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
	for (i = 0; i <= STACK_TURN; i++ )
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
