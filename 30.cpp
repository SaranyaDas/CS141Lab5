#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter a number: ";
cin >> n;
int i = 1;
for (int i = 1; i <= 10; ++i) {
cout << n << " * " << i << " = " << i*n << endl;
}
return 0;
}

