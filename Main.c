//Libs
#include <stdio.h>

//Function Prototypes
int Max (int , int , int , int);		//Function named 'Max' with 4 'int' Arguments
int Min (int , int , int , int);		//Function named 'Min' with 4 'int' Arguments

//Main Function
void main(void)
{
	int Num1 , Num2 , Num3 , Num4 , Maximum , Minimum;	//Integer Variables
	
	//Asking for the 1st Number
	printf("\nEnter The 1st Number : ");
	scanf("%d" , &Num1);
	
	//Asking for the 2nd Number
	printf("\nEnter The 2nd Number : ");
	scanf("%d" , &Num2);	
	
	//Asking for the 3rd Number
	printf("\nEnter The 3rd Number : ");
	scanf("%d" , &Num3);	

	//Asking for the 4th Number
	printf("\nEnter The 4th Number : ");
	scanf("%d" , &Num4);
	
	//Calling Max Function
	Maximum = Max(Num1 , Num2 , Num3 , Num4);

	//Calling Min Function
	Minimum = Min(Num1 , Num2 , Num3 , Num4);

	//Possibilites
	if(Maximum == 0 && Minimum == 0)
	{
		printf("\nThe Numbers are all Equal\n");
		printf("\nTerminated\n");
	}
	
	else
	{
		printf("\nMaximum = %d\tMinimum = %d\n" , Maximum , Minimum);
		printf("\nTerminated\n");
	}
	
}