#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
	Counter counterino;

	counterino.GetValue();
	counterino.SetMin(6);
	counterino.SetMax(9);
	counterino.GetValue();
	counterino.Count();
	counterino.Count();
	counterino.GetValue();
	counterino.Count();
	counterino.GetValue();
}