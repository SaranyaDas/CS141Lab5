//Library
#include <iostream>
using namespace std;
//Checking whether given number is prime
int main() {
int n, i;
bool isPrime = true;
cout <<"To check whether a number is prime or not."<< endl;
//Asking for input
cout << "Enter a number: ";
cin >> n;
//Displaying result
for(i = 2; i <= n / 2; ++i) {
if (n % i == 0) {
isPrime = false;
break;
}
}
if (isPrime)
cout << n << " is a prime number.";
else
cout << n << " is not a prime number.";
return 0;
}
