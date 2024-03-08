#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan banyak element pada Array: ";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray dapat mempunyai maksimal 20 element\n";
		}
	}

	cout << endl;
	cout << "===============" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke" << (i + 1) << "; ";
		cin >> a[i];
	}
}
void bubblesort() {
	int pass = 1;
	do
	{
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}

		pass = pass + 1;
	} while (pass <= n - 1);

}



