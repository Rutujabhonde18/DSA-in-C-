#include <bits/stdc++.h>
using namespace std;

//globle vaariable
int score = 15;

void a(int& i)
{
	//local variable
	char ch = 'a';
	cout<<i<<endl;
	cout<<score<<" in a"<<endl;
	score++;
}

void b(int& i)
{
	cout<<i<<endl;
	cout<<score<<" in b"<<endl;
}

int main()
{
	int i = 5;
	a(i);
	b(i);
	cout<<score<<" in main"<<endl;
	
	return 0;
} 
