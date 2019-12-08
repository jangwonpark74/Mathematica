#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	cout << "Hello World!" <<endl;
	int a[] = {1, 3, 1, 4, 1, 5};
	std::set<int> set_of_ints(a, a+6);

	cout << "element of array" <<endl;
	for(const int& d: a) {
		cout << d << endl;
	}
	cout << "size of array=" << size(a) <<endl;

	cout << "elements of set" << endl;
	for(const int& d: set_of_ints) {
		cout << d << endl;
	}
	cout << "size of set=" <<set_of_ints.size() <<endl;

	std::sort(a, a+6);
	cout << "element of array" <<endl;
	for(const int& d: a) {
		cout << d << endl;
	}

	std::cout << "size of unqiue elements ="
						<< std::unique(a, a+6) -a  << endl;


}
