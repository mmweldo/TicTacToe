#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

bool coordValid(char c, int i)
{
	if(c != 'a' || c != 'A' || c != 'b' || c!= 'B' || c!= 'c' || c != 'C')
		{
			cout << "Incorrect Letter!" << endl;
			return true;
		}
	else if(i != 2 || i != 2 || i != 3)
	{
		cout << "Incorrect Number!" << endl;
		return true;
	}
	else 
		return false;
}
bool coordCheck(char c, int i, bool coordinates[3][3])
{
	int let;
	switch (c)
	{
		case 'a':
		case 'A':
			let = 0;
			break;
		case 'b':
		case 'B':
			let = 1;
			break;
		case 'c':
		case 'C':
			let = 2;
			break;
		default:
			return true;
			break;
	}
	i--;
	switch(i)

	if(coordinates[let][i] == 1)
	{
		return true;
	}
	else
		return false;
}
void instruct()
{
	cout << "Welcome to Mitchell's Tic Tac Toe Console Game!" << endl
		 << "To play, all you need to do is " << endl << "\tType the coordinate "
		 << "of where you would like your next piece to be placed." << endl
		 << "\tThats it!" << endl << endl;
}

int choosePiece(char& piece)
{
	cout << "Please choose your piece!" << endl
		 << "Please type 'x' or 'o'." << endl
		 << "\t1.) x\n\t2.) o" << endl << endl << "You Choose:\t";
	cin  >> piece;
	cout << endl << "Printing Empty Board:" << endl << "\n\t    1  2  3\n\t";
	return piece;
}


int main()
{
	int cnt,cntT;
	char piece, board[3][3];

	instruct();
	choosePiece(piece);

	//Round One
	for(cnt=0;cnt<3;cnt++)
	{
		for(cntT=0;cntT<3;cntT++)
		{
			if(cntT == 0)
				{
					if(cnt == 0)
					{
						cout << "A  |";
					}
					else if(cnt == 1)
					{
						cout << "B  |";
					}
					else if(cnt == 2)
					{
						cout << "C  |";
					}
					else
						cout << "Error in cnt IF loop" << endl;
				}
			if (board[cnt][cntT]=='x'||board[cnt][cntT]=='o')
			{
				if(cntT < 2)
				{
					cout << board[cnt][cntT] << "  ";
				}
				else
					cout << board[cnt][cntT];
			}
			else
				if(cntT < 2)
				{
					cout << "_  ";	
				}
				else
					cout << "_";
				
		}
		cout << "|" << endl << "\t";
	}
	cout << endl 
		 << "Please input coordinates. (letter, number): ";
	char let;
	bool coord[3][3] = {0,0,0,0,0,0,0,0,0};
	int num;
	do{
		cin >> let;
		cin >> num;
	}
	//Contintues while the function return true values
	while(coordValid(let,num) && coordCheck(let, num, coord));


	cout << endl << "You input: " << let << num << endl;

	return 0;
}
