//https://www.codechef.com/INAL2019/problems/IALG5// Question Link
#include<iostream>
using namespace std;
int main(){
	int n,k,r,i=1;
	cin>>n>>k>>r;
	while(k>=r*i){
		k=k-r*i;
		i++;
		n--;
	}
	cout<<n;
	return 0;
}
