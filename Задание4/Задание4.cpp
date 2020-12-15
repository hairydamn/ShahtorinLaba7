#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	const int N = 10;
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

	int с;
	cout << "Введите число: ";
	cin >> с;
	cout << "\n";

	cout << "Все элементы, номера которых больше заданного вами числа (по строке и столбцу):" << endl;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (с < i && с < j) {
				cout << mas[i][j] << " ";
			}
		}
	}
	return 0;
}