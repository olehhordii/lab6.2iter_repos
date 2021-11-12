// lab6.2_iter.cpp 

using namespace std;
#include <iostream>
#include <iomanip>
void CreateArray(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}
}
void PrintArray(int* a, const int size) {
	cout << " a[" << size << "] = " << "{";
	for (int i = 0; i < size; i++) {
		cout << setw(4) << a[i];
	}
	cout << " }" << endl;
}
int Count(int* a, const int size) {
	int coun = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 != 0) {
			coun++;
		}
	}
	return coun;
}

int main()
{  
	srand((unsigned)time(NULL));
    const int n=7;
    int a[n];
	int Low,High;
	cout << "Enter low value "; cin >> Low;
	cout << endl;
	cout << "Enter high value "; cin >> High;
	cout << "Array: ";
	CreateArray(a, n, Low, High);
	PrintArray(a, n);

	cout << "number of neparnuh elements = " << Count(a, n) << endl;
	return 0;
}
