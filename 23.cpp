#include <iostream>
using namespace std;
int main () {
int n;
cout << "Enter a natural number, n: ";
cin >> n;
while (n>0) {
cout << n << ", ";
--n;
}
return 0;
}
