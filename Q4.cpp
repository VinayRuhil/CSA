//For any number n, program to list all the solutions of the equation x1 + x2 + x3 +...+ xn = C, where C is a constant (C<=10)

#include <iostream>
using namespace std;
void display(int b[],int n){
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
}
void combos(int b[],int k,int n,int s){
	if(k==0){
		b[k]=s;
		display(b,n);
		cout<<"\n";
		return ;
	}
	for(int i=0;i<=s;i++){
		b[k]=i;
		combos(b,k-1,n,s-i);
	}
}
int main(){
	int s,n;
	cout<<"Enter no. of variables : ";
	cin>>n;
	cout<<"Enter the constant value : ";
	cin>>s;
	if(s>=10){
		cout<<"CONSTANT VALUE SHOULD NOT BE GREATER THAN OR EQUAL TO 10";
		return 0;
	}
	int b[n];
	cout<<"\nAll Solutions : "<<endl;
	combos(b,n-1,n,s);
	return 0;
}


