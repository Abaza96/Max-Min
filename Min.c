//Libs
#include <stdio.h>

//Function Implementation

int Min (int X , int Y , int Z , int A)
{
	if(X < Y && X < Z && X < A)
	{
		return X;
	}
	
	else if(Y < X && Y < Z && Y < A)
	{
		return Y;
	}
	
	else if(Z < X && Z < Y && Z < A)
	{
		return Z;
	}
	
	else if(A < X && A < Y && A < Z)
	{
		return A;
	}
	
	else
	{
		return 0;
	}
}