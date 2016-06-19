// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct test
{
	void boob()
	{

	}

};

void func3()
{

}
void func2()
{

	func3();
}

#include <iostream>
using namespace std;

int main()
{
	test t;
	t.boob();
	int x;

//	cin >> x;
	func2();
    return 0;
}

