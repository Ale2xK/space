#include <iostream>
using namespace std;

int main() {

	cout << "Enter the world`s population: ";
	long long wpop = 0;
	cin >> wpop;
	cout << "Enter the population of the US: ";
	long long uspop = 0;
	cin >> uspop;
	float proz = (uspop * 100) / wpop;
	cout << "The population of the US is " << proz << "% of the world population.";
	return 0;

}