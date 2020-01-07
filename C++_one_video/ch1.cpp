#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;


int main(int argc, char* argv[], char* envp[])
{
	cout << "Hello world" << endl;
	cout << "Min int : " << numeric_limits<int>::min() << endl;
	cout << "Max int : " << numeric_limits<int>::max() << endl;
	vector<int> v(2);
	v[0] = 1;
	v[1] = 2;
	v.push_back(8);
	
	return 0;
}
