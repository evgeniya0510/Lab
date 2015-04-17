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
	if (k != 0);
	{
		int temp = turn[k-1];
		turn[k-1] = 0;
		return temp;
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

 void sdvig (void)
 {
	for(i = 0;i < TURN_SIZE;i++)
	{
		turn[i] = turn[i+1];

	}
 }
 int main()
{
	push(2);
	print_turn();
	push(2);
	print_turn();
	push(2);
	print_turn();
	push(2);
	

	pop();
	sdvig();
	print_turn();
	pop();
	sdvig();
	print_turn();
	pop();
	sdvig();
	print_turn();
return 0;
}
