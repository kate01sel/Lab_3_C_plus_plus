#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string st;
	getline(cin, st);
	int length = st.length();
	int maxa = 0;
	int max1, a;
	for (int i = 0; i < length; i++) 
	{		
		max1 = 0;
		for (; st[i] == 'a'; i++)
		{
			max1++;
		}
		if (max1 > maxa)
		{
			maxa = max1;
			a = maxa;
		}			
	}
	cout << a;

	return 0;
}