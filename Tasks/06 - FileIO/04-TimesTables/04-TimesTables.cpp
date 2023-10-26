#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream OutputStream;
	OutputStream.open("tables.txt");
	if (OutputStream.is_open() == false)
	{
		cout << "error could not open file" << endl;
		return -1;
	}
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			 OutputStream<< r * c << "\t";
		}
		OutputStream << endl;
	}
	OutputStream << endl;
	OutputStream.close();

	return 0;
}