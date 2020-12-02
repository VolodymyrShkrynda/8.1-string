#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int Count(const string str, const string cs)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = str.find_first_of(cs, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}




int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char cs[] = "+-=";
	cout << "String consist of " << Count(str, cs) << " '=' or '+' or '-'" << endl;
	return 0;
}