#include <iostream>
using namespace std;
void ss(int x,int a[],int n);
int k=0;
int main() {
	int n,i,j,f=0,z=0;
	cin>>n;
	int a[n]={0};
	ss(n,a,n);
	for(i=0;i<k;i++){
		for(j=0;j<=k;j++){
			if(a[i]+a[j]==n)
				z++; } }
	for(i=0;i<k;i++){
		for(j=0;j<=k;j++){
			if(z%2==0){
				if(a[i]+a[j]==n && f<z/2){
					f++;
					cout<<a[i]<<" + "<<a[j]<<" = "<<n<<"\n"; } } 
			else{
				if(a[i]+a[j]==n && f<z/2+1){
					f++;
					cout<<a[i]<<" + "<<a[j]<<" = "<<n<<"\n"; } } } }		
	return 0; }
void ss(int x,int a[],int n){
	int i;
	if(x==1)
		return;
	else{
		int c=0;
		for(i=2;i<x;i++){
			if(x%i==0)
				c++; }
		if(c==0){
			a[k]=x;
			k++; }
		ss(x-1,a,n); }	}



