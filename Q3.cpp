//Program that generates all the permutations of a given set of digits, with or without repetition.

#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void perm(int A[], int n, int b){
	if(b==n-1)
	{	cout<<"{";
		for(int j=0; j<n; j++){
			cout<<A[j];
		}
		cout<<"}\n";
	}
	
	else {
		for(int i=b; i<n; i++){
			swap(A[b], A[i]);
			perm(A, n , b+1);
			swap(A[b], A[i]);
		}
	}
}

void perm_rep(int A[],int B[],int n,int b){
	if(b==n){
		cout<<"{";
		for(int j=0;j<n;j++){
			cout<<B[j];
		}
		cout<<"}\n";
	}
	else{
		for(int i=0;i<n;i++){
			B[b]=A[i];
			perm_rep(A,B,n,b+1);
		}
		
	}
}

int main(){
	
	static int n;
	int A[n], B[n], b=0 , ch;
	
	cout<<"Enter number  of elements : ";
	cin>>n;
	cout<<endl;
	
	
	cout<<"Enter the Array : \n";
	
	for(int i=0; i<n; i++){
	cin>>A[i];
	}
	do{
	
	cout<<endl;
	cout<<"1. Permutation without repetition."<<endl;
	cout<<"2. Permutation with repetition."<<endl;
	cout<<"3. Exit."<<endl<<endl;
	
	cout<<"Enter your choice : ";
	cin>>ch;
	
	switch(ch){
			
		case 1 : perm(A,n,b);
		break;
		
		case 2 : perm_rep(A,B,n,b);
		break;
		
		case 3 : {
			cout<<"Exiting the program";
			exit(100);
			break;
		};
		
		default : cout<<"Invalid input";
		
	}
}while(ch!=3);
	
	getch();
	return 0;
}


