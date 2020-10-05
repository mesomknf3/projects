#include <iostream>
using namespace std;

int main() {
	int num;
	int d,q,di,n,p;
	
	cout<<"Enter amount: ";
	cin>>num;
	
	d=num/100;
	num=num-d*100;
	q=num/25;
	num=num-q*25;
	di=num/10;
	num=num-di*10;
	n=num/5;
	num=num-n*5;
	p=num;
	
	cout<<"Dollar: "<<d<<endl;
	cout<<"Quarter: "<<q<<endl;
	cout<<"Dime: "<<di<<endl;
	cout<<"Nickle: "<<n<<endl;
	cout<<"Penny: "<<p<<endl;
	return 0;
}
