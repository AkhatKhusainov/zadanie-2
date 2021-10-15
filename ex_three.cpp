#include<iostream>
using namespace std;
void frend_numbers() {
	int i;
	int a;
	int sum = 0;
	int sumsum = 0;
	int t;
	for (a = 1;a < 10000;a++) {
		for (i = 1; i < a; i++) {
			if (a % i==0) {
				sum += i;
			}
		} 
		//cout<< " a "<< a ;
		//cout << " sum "<< sum << endl;
		//sum сумма делителей числа а, т.е мы должны проверить ее на потенциально дружественное число
		for (t = 1; t < sum; t++) {
			if (sum % t == 0) {
				sumsum += t;
			}

		}
		if (sumsum == a && sum!=a) cout<<" " << a << ", " << sum << " " << endl;
		sumsum = 0;
		sum = 0;
		
	}

}
int main() {
	frend_numbers();

}
