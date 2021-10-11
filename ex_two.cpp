#include<iostream>
using namespace std;
void fff(int N) {
	int i;
	int a = 1;
	int b = 1;
	int couple;
	for (i = 2; i < N; i++) {
		a = a + b;
		b = a - b;
	}
	cout << a;



}
int main() {
	int N;
	cin >> N;
	fff(N);

}