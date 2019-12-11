#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


class Gameboard
{
	char gameSpace[4][4];


public:
	Gameboard();
	void setGameSpace(int row, int col, char value);
	char getGameSpace(int row, int col);
	int fourInRow();
	void printInfo();
};

Gameboard::Gameboard()
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			gameSpace[i][j] = '-';
		}
	}
}
void Gameboard::setGameSpace(int row, int col, char value)
{
	gameSpace[row][col] = value;

}
int Gameboard::fourInRow()
{
	int flag = 0;
	int i = 0;
	do
	{
		int count = 0;
		for(int j=0; j<4; j++)
		{
			if(gameSpace[i][j]=='x')
			{
				count++;
			}
		}
		if(count==4)
		{
			flag = 1;
		}
		i++;
	}while(flag==0);


	return flag;
}
void Gameboard::printInfo()
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<gameSpace[i][j];
		}
		cout<<"\n";
	}
}
