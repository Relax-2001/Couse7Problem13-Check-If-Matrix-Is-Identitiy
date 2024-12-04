
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 1, Arr[i][j]);
		}
		cout << "\n";
	}
}

bool IsMatricesIdintitity(short Arr1[3][3], short Rows, short Cols)
{

	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{

			if (i == j && Arr1[i][j] != 1)
			{
				return false;
			}
			else if(i != j && Arr1[i][j] != 0)
			{
				return false;
			}

		}
	}

	return true;
}


int main()
{

	srand((unsigned)time(NULL));

	short Arr1[3][3] = { {1,0,0} , {0,1,0} , {0,0,1} };
	
	cout << "\nMatris :\n";
	PrintMatrix(Arr1, 3, 3);

	if (IsMatricesIdintitity(Arr1 , 3 , 3))
	{
		cout << "\nYes, array is idintity\n";
	}
	else
	{
		cout << "\nNo, array is not idintity\n";

	}
	
	return 0;
}