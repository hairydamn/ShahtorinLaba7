#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	const int N = 3;
	cout << "Двумерный массив " << N << " на " << N << " элементов:" << endl;
	int mas[N][N];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j) 
		{
			mas[i][j] = rand() % 3 + 1;
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
	int x = 1;
	for (int i = 0; i < N; ++i) 
	{
		for (int j = 0; j < N; ++j) 
		{
			x = mas[i][j] * x;
		}
	}
	if (x >= 100 && x <= 999)
	{
		cout << "Произведение всех элементов является трёхзначным числом - " << x;
	}
	else cout << "Произведение всех элементов НЕ является трёхзначным числом - " << x;
	return 0;
}