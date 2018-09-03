//Library
#include <iostream>
using namespace std;
//Checking whether given number is prime
int main() {
int n, i;
cout <<"To check whether a number is prime or not."<< endl;
//Asking for input
cout << "Enter a number: ";
cin >> n;
//Displaying result
for(i = 2; i <= n/2; ++i) { 
if(n%i == 0) {
cout << n << " is not prime.";
}
else {
cout << n << " is prime.";
}
return 0;
}
