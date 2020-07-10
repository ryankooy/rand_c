#include <stdio.h>

void func1(int dynArray[])
{
	printf("\nfunc1:\ndynArray = %p\n&dynArray[0] = %p\ndynArray[0] = %d\n",
		dynArray, &dynArray[0], dynArray[0]);
}

void func2(int* intPtr)
{
	printf("\nfunc2:\nintPtr = %p\n&intPtr[0] = %p\nintPtr[0] = %d\n",
		intPtr, &intPtr[0], intPtr[0]);
}

void func3(int intVal)
{
	printf("\nfunc3:\nintVal = %d\n&intValue = %p\n",
		intVal, &intVal);
}

int main()
{
	int mainArray[3] = { 1, 2, 3 };
	int mainInt = 10;
	
	if (mainArray == &mainArray[0])
		printf("\nmainArray == &mainArray[0]");
	else
		printf("\nmainArray != &mainArray[0]");
	
	printf("\nmainArray = %p\n&mainArray[0] = %p\nmainArray[0] = %d\n",
		mainArray, &mainArray, mainArray[0]);
	
	func1(mainArray);
	func2(mainArray);
	
	printf("\nmainInt = %d\n&mainInt = %p\n", mainInt, &mainInt);
	
	func3(mainInt);
	
	return 0;
}