#include <fstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string line;
	ifstream readFile("read_file.txt");

	if (readFile.is_open())
	{
		while (getline(readFile, line))
		{
			cout << line << '\n';
		}
		readFile.close();
	}

	else cout << "Not able to open the file";

	return 0;
}
