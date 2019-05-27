
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int>Array;
	Array = { 1,2,40 };
	Array.push_back(10);
	Array.push_back(20);
	for (int i = 0; i < Array.size(); i++)
	{
		cout << Array[i] << endl;

	}
	int sum = 0;
	for (int i = 0; i < Array.size(); i++)
	{
		 sum += Array[i];
	}
	cout<< "sum of elements=" << sum << endl;

	int result = 0;
	int* p = &Array[1];
	char c = 0;
	for (int i = 0; i < Array.size(); i++, p++)
	{
		for (int b = 0; b < 8; b++)
		{
			c = *p;
			result += c - ((c >> 1) << 1);
			c = c >> 1;
		}
	}
	cout << "Cntrlsum of elements=" << result << endl;
	system("pause");
	return 0;
}
