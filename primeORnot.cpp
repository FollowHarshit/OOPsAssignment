/* Check Prime Number By Harshit Jaiswal
(TIT vs National Institute of Science & Technology Coding Competition: 1st position holder )*/
#include <bits/stdc++.h>
using namespace std;

int primeORnot(int n)
{
	if(n == 1)
		return 0;

	for(int i=2; i <= n/2; i++)
	{
		if(n % i == 0){
		  return 1;
		  break;
		}
	}
	return 0;
} 

int main() 
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	if(!primeORnot(n))
		cout<<n<<" is a prime number.";
	else cout<<n<<" is not a prime number.";
	
	return 0;
}
