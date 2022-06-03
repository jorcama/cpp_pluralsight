#include "Collections.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

void doCollections()
{
	vector<int> nums;

	for (int i = 0; i < 10; i++)
	{
		nums.push_back(i);
	}
	
	for (auto item: nums)
	{
		cout << item << " ";
	}
	cout << "\nThe int vector has "<< nums.size() <<" elements\n";

	nums[2] = 33;
	nums[6] = -1;
	nums[9] = 3;

	for (unsigned int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << "\n";

	//for (vector<int>::iterator i = begin(nums); i != end(nums); i++)
	for (auto i = begin(nums); i != end(nums); i++)
	{
		cout << *i << " ";
	}
	cout << "\n";

	int threes = count(begin(nums), end(nums), 3);

	cout << threes << "\n";

	vector<string> words;
	cout << "Enter 3 words\n";
	for (int i = 0; i < 3; i++)
	{
		string word;
		cin >> word;
		words.push_back(word);
	}

	for (auto item: words)
	{
		cout << item << " ";
	}
	cout << "\n";

	sort(begin(words), end(words));

	for (auto item: words)
	{
		cout << item << " ";
	}
	cout << "\n";
}
