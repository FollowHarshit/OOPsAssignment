/* Call By Reference By Harshit Jaiswal
(TIT vs National Institute of Science & Technology Coding Competition: 1st position holder )*/
#include <bits/stdc++.h>
using namespace std;

int sum(int &a, int &b, int &s)
{
	s = a + b;
	return 0;
} 

int main() 
{
	int a = 5, b = 10, s = 0;
	sum(a, b, s);
	cout<<s;
	
	return 0;
}
