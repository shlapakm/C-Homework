#include <iostream>
#include <string>
int Fibbonachi(int n);
int main()
{
	using namespace std;
	int n;
	cin >> n;
	cout << Fibbonachi(n) << endl;
}
int Fibbonachi(int n)
{
	if ((n == 1) || (n == 2)) return 1;
	return Fibbonachi(n - 1) + Fibbonachi(n - 2);
}