
#include <iostream>

using namespace std;

void nicePrint(int a, int b); 

int main() 
{
	int a, b;
	cout << "Enter the number of hours: "; 
	cin >> a; 

	cout << "Enter the number of minutes: "; 
	cin >> b; 

	
	nicePrint(a, b);
	
	return 0; 
} 

void nicePrint(int a, int b)
{
	cout << "Time: " << a << ":" << b;
}
