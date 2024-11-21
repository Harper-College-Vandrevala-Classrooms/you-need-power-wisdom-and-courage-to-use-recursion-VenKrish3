/*
 * TriangleNumberCalculator.cpp
 *
 *  Created on: Nov 11, 2024
 *      Author: Turbo
 */

int value(int x)
{
	if(x <= 1)
	{
		return 1;
	}

	return x + value(x-1);
}
int add(int x,int y)
{
	return value(x) + value(y);
}
int subtract(int x,int y)
{
	return value(x) - value(y);
}
