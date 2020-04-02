 #include <bits/stdc++.h>
#include <math.h>
#include <windows.h>

using namespace std;
int tossFunc()
{
	cout<<"Ready to toss!..."<<endl;
	srand(time(0));
	return rand()%2;	
}
struct resStruct{
	int dpth;
	int value;
	int move;
};

resStruct minimax(int n,int depth,bool player,int alpha,int beta)
{  int i;
	resStruct a,b;
	b.value=0;b.dpth=0;b.move=0;
	if(n==1)
	{
		if(player)
		{
			a.value = -10;
			a.dpth = depth;
			a.move = 0;
			return a;
		}
		else
		{
			a.value = 10;
			a.dpth = depth;
			a.move =0;
			return a;
		}
	}

	if(player)
	{  int mx=-999;
		int m=999;
		for(i=3;i>=1;i--)
		{  if(n-i>=1)
			{
				b= minimax(n-i,depth+1,false,alpha,beta);
				if(b.value>=mx && b.value!=0)
				{  if(b.value==mx)
					{ if(b.dpth<m)
						{
							a.value=b.value;
							a.dpth=b.dpth;
							a.move = i;
						}
					}
					else
					{
						mx=b.value;
						a.value=b.value;
						a.dpth=b.dpth;
						a.move = i;
					}
				}
				alpha=max(alpha,b.value);
				if(beta<alpha)
					break;
			}
		}
		return a;
	}
	else
	{
		int m =999;
		int mx=999;
		for(i=3;i>=1;i--)
		{ if(n-i>=1)
			{
				b= minimax(n-i,depth+1,true,alpha,beta);
				if(b.value<=mx && b.value!=0)
				{  if(b.value==mx)
					{ if(b.dpth<m)
						{
							a.value=b.value;
							a.dpth=b.dpth;
							a.move = i;
						}
					}
					else
					{
						mx=b.value;
						a.value=b.value;
						a.dpth=b.dpth;
						a.move = i;
					}

				}
				beta=min(beta,b.value);

				if(beta < alpha )
					break;

			}
		}

		return a;
	}
}


void humanVShuman(int n)
{   

	int p_1_move,p_2_move;
	int toss = tossFunc();

	if(toss==0)
		cout<<"Player 1 won toss"<<endl;
	else
		cout<<"Player 2 won toss"<<endl;


	while(1){

		if(n==1 || n==0)
		{ if(n==0)
			{
				if(toss==1)
					cout<<"Winner: Player 2 "<<endl;
				else
					cout<<"Winner: Player 1 "<<endl;
			}
			if(n==1){
				if(toss==0)
					cout<<"Winner: Player 2 "<<endl;
				else
					cout<<"Winner: Player 1 "<<endl;
			}
			break;
		}
labelOne: if(toss==0)
		  cout<<"Chance: Player 1"<<endl;
		else
			cout<<"Chance: Player 2 "<<endl;

		cin >> p_1_move;
		if(p_1_move < 4 && p_2_move >= 1)
			n=n - p_1_move;
		else
		{ cout<<"Invalid move"<<endl;
			goto labelOne;
		}
		cout<<"Sticks left : :  "<<n<<endl;
		;

		if(n==1 || n==0)
		{ if(n==0)
			{
				if(toss==0)
					cout<<"Winner: Player 2 "<<endl;
				else
					cout<<"Winner: Player 1 "<<endl;
			}
			if(n==1){
				if(toss==1)
					cout<<"Winner: Player 2 "<<endl;
				else
					cout<<"Winner: Player 1 "<<endl;
			}
			break;
		}

labelTwo: if(toss==1)
		  cout<<"Player 1 Chance"<<endl;
		else
			cout<<"Player 2 Chance"<<endl;

		cin>>p_2_Move;
		if(p_1_move < 4 && p_2_move >= 1)
			n = n - p_2_Move;
		else
		{ cout<<"Wrong move"<<endl;
			goto labelTwo;
		}

		cout<<"No of Sticks Left :  "<<n<<endl;
	}
	cout<<"Game over"<<endl;
}



void humanVSai(int n)
{

	int p_1_move, p_2_move, ai, toss = tossFunc();

	if(toss==0)
		cout<<"Player won toss"<<endl;
	else
		cout<<"AI won toss"<<endl;

	cout<<"Game Started"<<endl;

	while(1)
	{
		if(n==1 || n==0)
		{ 
			if(n==0)
			{
				cout << "Winner : " << endl;
				if(toss==1)
					cout<<"AI"<<endl;
				else
					cout<<"Human" <<endl;
			}
			if(n==1){
				cout << "Winner : " << endl;
				if(toss==0)
					cout<<"AI"<<endl;
				else
					cout<<"HUMAN"<<endl;
			}
			break;
		}
		if(toss==0)
		{
			up:cout<<"Chance: Player " << endl;
  			cin >> p_1_move;
  			if(p_1_move < 4 && p_1_move >= 1)
	  			n = n - p_1_move;
  			else
  			{
			       	cout<<"Wrong move"<<endl;
	  			goto up;
  			}
		}
		else
		{
			resStruct res;
			cout << "Chance: AI " << endl;
			res = minimax(n,0,true,INT_MIN,INT_MAX);
			cout<<"AI move : " << res.move<<endl;
			n = n - res.move;
		}

		cout<<"No of Sticks Left :  " << n << endl;

		if(n==1 || n==0)
		{ 
			if(n==0)
			{
				cout << "Winner : " << endl;
				if(toss==0)
					cout<<"AI" << endl;
				else
					cout<<"Player"<<endl;
			}
			if(n==1){
				cout << "Winner : " << endl;
				if(toss==1)
					cout<<"AI" << endl;
				else
					cout<<"Player"<<endl;
			}
			break;
		}


		if(toss==1)
		{
			up:cout<<"Chance: Player "<<endl;
  			cin>>p_2_move;

  			if(p_2_move < 4 && p_2_ move >= 1){
	  			n=n - p_2_move;
			}
  			else{ 	
				cout<<"Wrong move"<<endl;
	  			goto up;
  			}
		}
		else
		{
			resStruct res;
			cout<<"Chance: AI"<<endl;
			res = minimax(n, 0, false, INT_MIN, INT_MAX);
			cout<<"AI move : " << res.move << endl;
			n = n - res.move;
		}

		cout<<"No of Sticks Left" << n << endl;
	}

	cout<<"Game Over"<<endl;
}


void aiVSai(int n)
{

	int ai, toss = tossFunc();

	if(toss==0)
		cout<<"AI 1 won toss" << endl;
	else
		cout<<"AI 2 won toss" << endl;

	while(true){

		if(n==1 || n==0)
		{ 
			if(n==0)
			{
				cout << " Winner : " << endl;
				if(toss==1)
					cout<<"AI 2 "<<endl;
				else
					cout<<"AI 1 "<<endl;
			}
			if(n==1){
				if(toss==0)
					cout<<"AI 2 "<<endl;
				else
					cout<<"AI 1 "<<endl;
			}
			break;
		}
		if(toss==0)
		{
			cout<<"Chance: AI 1 "<<endl;
			resStruct res;
			res = minimax(n, 0, true, INT_MIN, INT_MAX);
			cout<<"AI 1 selects : "<<res.move<<endl;
			n=n-res.move;
			cout<<"No of Sticks left :  "<<n<<endl;
		}
		else
		{
			resStruct res;
			cout<<"Chance : AI 2 "<<endl;
			res = minimax(n, 0, true, INT_MIN, INT_MAX);
			cout<<"AI 2 selects : " << res.move<<endl;
			n=n-res.move;
			cout<<"No of Sticks left :  " << n << endl;
		}

		if(n==1 || n==0)
		{
		       	if(n==0)
			{
				cout << "Winner" << endl;
				if(toss==0)
					cout<<"CPU 2 " << endl;
				else
					cout<<"CPU 1 " << endl;
			}
			if(n==1){
				if(toss == 1)
					cout<<"AI 2 "<<endl;
				else
					cout<<"AI 1 "<<endl;
			}
			break;
		}


		if(toss==1)
		{
			resStruct res;
			cout<<"Chance: AI 1 "<<endl;
			res = minimax(n, 0, false, INT_MIN, INT_MAX);
			cout<<"AI 1 selects : "<<res.move<<endl;
			n=n-res.move;
			cout<<"No of Sticks left :  " << n << endl;
		}
		else
		{
			resStruct res;
			cout<<"Chance: AI 1 "<<endl;
			res = minimax(n, 0, false, INT_MIN, INT_MAX);
			cout<<"AI 2 selects : "<< res.move << endl;
			n=n - res.move;
			cout<<"No of Sticks left :  "<< n << endl;
		}
	}
	cout<<"Game Over"<<endl;
}


int main()
{ 
	int choice,n,play=1;
	cout<<"GAME\n"<<endl;
	while(play){

		cout<<"Enter number of Sticks"<<endl;
		cin>>n;
		cout<<"Enter your choice :"<<endl;
		cout<<"1. HUMAN  VS HUMAN"<<endl;
		cout<<"2. HUMAN VS AI"<<endl;
		cout<<"3. AI vs AI"<<endl;
		cin>>choice;

		switch(choice){
			case 1:
				humanVShuman(n);
				break;

			case 2:
				humanVSai(n);
				break;

			case 3:
				aiVSai(n);
				break;

		}
		cout<<"\nEnter 1 to play again and 0 to exit\n";
		cin>>play;
	}
	return 0;
}
