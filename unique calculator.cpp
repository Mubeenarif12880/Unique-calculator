#include<iostream>
using namespace std;
int main()
{
// Muhammad Mubeen Arif BSCS section (D) roll no 52
	int num1 , num2;
	char x;
	while(true)
	{
		cout<<"Enter your first number"<<endl;
		cin>>num1;
		cout<<"Enter your second number"<<endl;
		cin>>num2;
		
		cout<<"press + for addition"<<endl;
		cout<<"press - for subtraction"<<endl;
		cout<<"press * for multiplication"<<endl;
		cout<<"press / for division"<<endl;
		cout<<"press % for reminder"<<endl;
		
		cin>>x;
		if(x=='+')
		cout<<"the sum ="<<num1+num2<<endl;
		else if(x=='-')
		cout<<"the subtraction ="<<num1-num2<<endl;
		else if(x=='*')
		cout<<"the multiplication ="<<num1*num2<<endl;
		else if(x=='/')
		cout<<"the division ="<<num1/num2<<endl;
		else if(x=='%')
		cout<<"the reminder ="<<num1%num2<<endl;
		
		else
		cout<<"Invalid operation"<<endl;
	}
	
	return 0;
	
}
