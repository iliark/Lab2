#include <iostream>
using namespace std;
bool isInArea(double x, double y);
double f(double x);
int main()
{
	double x, y, result;
	int n;
	cout << "Enter task number: \n";
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Enter coordinates: \n";
		cin >> x >> y;
		result = isInArea(x, y);
		cout << result << endl;
		break;
	case 2:
		cout << "Enter x: \n";
		cin >> x;
		result = f(x);
		cout << result << endl;
		break;
	default:
		cout << "Wrong instruction";
		break;
	}
	system("PAUSE");
	return 0;
}