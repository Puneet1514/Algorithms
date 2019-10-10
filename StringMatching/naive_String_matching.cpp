#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();

	while(t--)
	{
		string s,m;
		getline(cin,s);
		getline(cin,m);
		int ls = s.length();
		int lm = m.length();

		for(int shift = 0; shift <= ls - lm; shift++)
		{
			int i;
			for(i = 0; i < lm; i++)
			{
				if(!(m[i] == s[shift + i]))
				{
					break;
				}
			}
			if(i == lm)
			{
				cout<< "AFTER : " << shift << " SHIFT STRING m IS FOUND" << endl;
			}
		}
		cout << endl;
	}
}
