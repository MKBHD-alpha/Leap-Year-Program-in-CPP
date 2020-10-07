//.....................................Without Nested If..............................................

#include <iostream>
#include<stdio>
#include<stdlib>
using namespace std;
int x;
int main()
{	a:
	int year{};
	cout<<"Enter The Year"<<endl;
	cin>>year;


	if((year%4==0 && year%100!=0) ||(year%400==0)){
		cout<<"The Entered Year is a Leap Year"<<endl;
	}
	else{
		cout<<"The Entered Year is Not a Leap Year"<<endl;
	}
	cout<<"do you want to continue or not";
	cout<<"1 for yes, 2 for no ";
	cin>>x;
	switch(x)
	{ case 1:goto a
		break;
	 case 2:exit()
			
	}
	
	
	
	
	
	return 0;
}




//.....................................................With Nested IF........................................................................

#include<iostream>
using namespace std;

int main()
{
	int year{};
	cout<<"Enter the Year:--";
	cin>>year;

	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				cout<<"The Entered Year is a Leap Year"<<endl;
			}
			else{
				cout<<"The Entered Year is Not a Leap Year"<<endl;
			}
		}
		else{
			cout<<"The Entered Year is a Leap Year"<<endl;
		}
		
	}
	else{
		cout<<"The Entered Year is Not a Leap Year"<<endl;
	}


	return 0;
}		
