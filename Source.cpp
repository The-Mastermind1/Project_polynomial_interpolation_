#include"Header.h"

int main() {
	long double a;
	std::cout << "give a and b for the interval:[a,b]\n";
	
	std::cin >> a;

	long double b;
	std::cin >> b;
	std::cout << "give the h for b-a=h:\n";
	long double h ;
	std::cin >> h;
	std::vector<long double>dimerish;
	for (long double i = a; i <= b; i += h) {
		dimerish.push_back(i);
	}
	assert(dimerish.size() > 0);
	std::cout << "give the elements for vector f:\n";
	std::vector<long double>f(dimerish.size());
	for (size_t i = 0; i < dimerish.size(); i++) {
		std::cin >> f[i];
	}
	
	std::vector<std::vector<long double>>matrix(dimerish.size());
	for (size_t  i = 0; i < dimerish.size(); i++) {
	 	for (size_t j = 0; j < dimerish.size(); j++) {
		  matrix[i].push_back(funcöi(dimerish, dimerish[i], j));

		}
	}
	printmatrix(matrix, f);

	gauss(matrix, f);
	


}
