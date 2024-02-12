#include <iostream>
#include <fstream>

using namespace std;

char mazeReader()
{
	ifstream fp;
	int ROWS = 20;
	int COLUMNS = 20;

	int size = 40;
	char maze[ROWS][COLUMNS];

	fp.open("maze_info.txt");


	for(int i = 0; i < size; i++){

		fp >> maze[i][i];

		for(int t = 0; t < size; t++)
			fp >> maze [t][t];
	

	}

//	for(int j = 0; j < size; j++)
//	{
//		cout << maze[j][j];

//	}

	return maze;

}

//has bugs
