/* Reverse Array By Harshit Jaiswal
(TIT vs National Institute of Science & Technology Coding Competition: 1st position holder )*/
#include <bits/stdc++.h>
using namespace std;

int showA(int a[], int s)
{
	for (int i = 0; i < s; i++)
		cout << a[i] << " ";
	return 0;
} 

int main() 
{
	int a[] = {10, 55, 45, 23, 77, 89};
	int s = sizeof(a) / sizeof(a[0]); 

	showA(a, s);
	reverse(a, a+s);
	
	cout << "\nAfter reversing the given array: " <<endl;
	showA(a, s);
	
	return 0;
}
