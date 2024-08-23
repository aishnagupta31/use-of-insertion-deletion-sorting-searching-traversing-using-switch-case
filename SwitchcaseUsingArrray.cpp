#include<iostream>
using namespace std;
void search(int a[], int n){
	int l=0,r,Search,i,m;
	r=n-1;
	cout<<"Enter a number that you want to search: ";
	cin>>Search;
	while(l<=r){
		m=(l+r)/2;
		if(a[m]==Search){
			cout<<"Number is found at position "<<m+1;
			break;
		}
		else if(a[m]>Search){
			r=m-1;
		}
		else if(a[m]<Search){
			l=m+1;
		}
	}
	if(l>r){
		cout<<"Number is not found";
	}
}
void sort(int a[],int n){
	int i,j,temp;
	for(i=n;i>0;i--){
		for(j=0;j<i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Result:\n";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void traverse(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
    }
}
void insert(int a[],int n){
	int position,c,item;
	cout<<"Enter the location where you wish to insert the element: "<<endl;
	cin>>position;
	cout<<"Enter the item you want to insert: "<<endl;
	cin>>item;
	for(c=n; c>=position; c--){
		a[c] = a[c-1];
	}
	a[position]=item;
	n++;
	cout<<"Resultant array: "<<endl;
	for(c=0;c<n;c++){
		cout<<a[c]<<" ";
	}
}
void del(int a[], int n){
	int position,c;
	cout<<"Enter the location where you wish to delete the element: "<<endl;
	cin>>position;
	
	if(position >= n+1){
		cout<<"Deletion not possible";
	}
	else{
		for(c= position-1; c<n-1; c++){
			a[c] = a[c+1];
		}
	}
	cout<<"Resultant array: "<<endl;
	for(c=0;c<n-1;c++){
		cout<<a[c]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int z;
	cout<<"Enter the operation to perform on an array"<<endl;
	cout<<"Enter 1 to search"<<endl;
	cout<<"Enter 2 to delete"<<endl;
	cout<<"Enter 3 to sort"<<endl;
	cout<<"Enter 4 to traverse"<<endl;
	cout<<"Enter 5 to insert"<<endl;
	cin>>z;
	switch(z){
		case 1: search(a,n);
		break;
		case 2: del(a,n);
		break;
		case 3: sort(a,n);
		break;
		case 4: traverse(a,n);
		break;
		case 5: insert(a,n);
		break;
	}
	return 0;
}
