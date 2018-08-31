#include <iostream>
using namespace std;
int main() {
int n, i, count = 0;
cout << "Enter a number: ";
cin >> n;
if (n == 0) {
cout << n << " is not prime";
}
else {
for(i=2; i < n; i++)
if (n % i == 0) {
count++;
}
if (count > 1) {
cout << n << " is not prime.";
}
else {
cout << n << " is prime.";
}
}
return 0;
}

