#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 10);
		}
	}
}
void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	cout << "The Following is a 3x3 random matrix\n";
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			//cout << setw(3) << arr[i][x] << "	";
			printf("  %0*d  ", 2, arr[i][x]);
		}
		cout << endl;
	}
	cout << endl << endl;
}
int sumOfMatrix(int arr[3][3], int Rows, int Colos)
{
	int sum = 0;
	for (int i = 0; i < Rows; i++)//1 2 3
	{							  //4 5 6
								  //7 8 9
		for (int x = 0; x < Colos; x++)
		{
			sum += arr[i][x];
		}
	}
	return sum;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3];

	fill3X3MatrixWithRandomNumbers(arr1, 3, 3);
	printMatrix3X3(arr1, 3, 3);


	cout << "Sum of The Matrix = ";
	cout<< sumOfMatrix(arr1, 3, 3)<<endl<<endl;
	


	system("pause>0");

	return 0;
}



