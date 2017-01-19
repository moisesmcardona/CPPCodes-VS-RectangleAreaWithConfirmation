#include <iostream>
using namespace std;

int main()
{
	double length , width;
	char again;
	cout << "Rectangle Area Calculator\n";
	do
	{

		do
		{
			cout << "Enter the width of the rectangle: ";
			cin >> width;
		} while (width <= 0.0);
		do
		{
			cout << "Enter the length of the rectangle: ";
			cin >> length;
		} while (length <= 0.0);
		cout << "The Rectangle Area is: " << width * length << endl;
		cout << "Do you want to calculate another rectangle area? [y]es or [n]o: ";
		cin >> again;
	} while (again == 'y');
	cout << "Thanks for using the Rectangle Area Calculator.\n";
	system("pause");
	return 0;
}