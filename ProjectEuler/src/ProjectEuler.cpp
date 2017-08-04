//============================================================================
// Name        : ProjectEuler.cpp
// Author      : William
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define TARGET_NUM 1000

int main() {

	for (int i = 0; i < TARGET_NUM; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}
