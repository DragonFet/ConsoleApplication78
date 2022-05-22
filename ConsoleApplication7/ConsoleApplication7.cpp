#include <string>
#include <iostream>
#include <vector>
#include "Help.h"

using namespace std;


int main()
{
	Help help;
	vector<string>data;
	string solution = "11";
	while (solution != "end")
	{
		cin >> solution;
		if (solution=="ADD")
		{
			help.Add_New_Component(data);

		}
	}
	help.PrintVector(data);

	return 0;
}