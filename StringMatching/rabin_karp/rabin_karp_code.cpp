#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string st, st1;
	int t, l, l1, q = 11;
	long p, p1;



	cin >> t;
	cin.ignore();

	while(t-- > 0)
	{
		int sum = 0;
		getline(cin, st);
		getline(cin , st1);
		l = st.length();
		l1 = st1.length();
		long h = 0;

		for(int i = 0; i < l1; i++)
		{
			h = (h + (((long)st1[i] - 48) * (long)(pow(10, l1 - 1 - i))) % q) % q;
		}

		long h1 = 0;

		for(int i = 0; i < l1; i++)
		{
			h1 = (h1 + (((long)st[i]-48) * (long)(pow(10, l1 - 1 - i)) % q)) % q;
		}


		if( h1 % q== h % q )
		{
			++sum;
		}

		for(int i = 1; i <= l - l1; i++ )
		{
			h1 =( (h1 - (((long)st[i - 1]-48) * (long)pow(10, l1 - 1)  ))* 10 + ((long)st[i + l1 - 1] -48)% q ) % q;

			if( h1 < 0 )
			{
				if( h1 + q == h )
				{
					sum++;
				}
			}	
			else
			{
				if(h1 % q == h % q)
				{
					++sum;
				}
			}
		}

		cout << (sum) << endl;
	}
}
