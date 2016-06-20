#include "SQL.h"

fstream& operator >> (fstream& fs, TYPE& type)
{
	int T;
	fs >> T;
	if (T == 1)
		type = INT;
	else if (T == 2)
		type = STRING;
	else if (T == 3)
		type = FLOAT;
	else
		cout << "wrong type !!!" << endl;

	return fs;
}