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
		printf ("Oshibka");
		a = 0;
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
		int d;
		if (d>)
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
	push(1);
	print_turn();
	push(2);
	print_turn();
	push(3);
	print_turn();
	push(4);
	print_turn();
	push(5);
	print_turn();
	push(5);
	print_turn();
	

	pop();
	
	print_turn();
	pop();

	print_turn();
	pop();
	
	print_turn();
	pop();
	
	print_turn();
	pop();
	
	print_turn();
	pop();
	
	print_turn();
return 0;
}
