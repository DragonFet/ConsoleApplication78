#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Help
{

public:
	void SortyVector(vector<string>& data)
	{
		sort(begin(data), end(data));
	}
	void Add_New_Component(vector<string>& data)
	{
		string s;
		cin >> s;
		data.push_back(s);
		SortyVector(data);
	}
	void PrintVector(vector<string>data)
	{
		for (auto item:data)
		{
			cout << item << '\t';
		}
	}
	
};

