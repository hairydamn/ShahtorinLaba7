#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	const int N = 5;
	cout << "Двумерный массив " << N << " на " << N << " элементов:" << endl;
	int mas[N][N];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			mas[i][j] = rand() % 20 + 1;
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\n";

	int kol = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (mas[i][j] % 2 != 0) {
				kol++;
			}
		}
	}
	cout << "Количество нечётных элементов в массиве: " << kol;
	return 0;
}
