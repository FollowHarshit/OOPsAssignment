/* Structure to store six employee record By Harshit Jaiswal
(TIT vs National Institute of Science & Technology Coding Competition: 1st position holder )*/
#include <bits/stdc++.h>
using namespace std;

struct Employee{
	int eid;
	string name;
	int salary;
};

int main() 
{
	struct Employee emp[6];

	for(int i = 0; i<6; i++)
	{
		cout<<"\nEnter employee no. "<< i+1 <<" details: "<<endl;
		cout<<"Enter employee id: ";
		cin>>emp[i].eid;
		cout<<"Enter employee name: ";
		cin.ignore(), getline(cin, emp[i].name);
		cout<<"Enter employee salary: ";
		cin >> emp[i].salary;
	}

	cout<<"\nDetail of Employee whose salary > 20000: ";
    
    for(int i = 0; i<6; i++)
    {
	    if(emp[i].salary > 20000){
		    cout<<"\nEmployee ID: "<< emp[i].eid<<endl;
		    cout<<"Employee Name: "<< emp[i].name<<endl;
		    cout<<"Employee Salary: "<< emp[i].salary<<endl;
		}
    }
	
	return 0;
}
