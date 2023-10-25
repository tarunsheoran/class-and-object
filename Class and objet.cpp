#include<iostream>
using namespace std;

class A{
	public:
		int a,b,c;
		
		void show(){
			cout<<"Enter hte number you want to print"<<endl;
			cout<<"Enter for a:- ";
			cin>>a;
			cout<<"Enter for b:-";
			cin>>b;
			cout<<"Enter for c:-";
			cin>>c;
			
			
		}
		
};

int main(){
	A obj;
	obj.show();
	
	return 0;
}
