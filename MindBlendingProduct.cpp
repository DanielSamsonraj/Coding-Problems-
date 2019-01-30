//https://www.codingninjas.in/app/classroom/me/607/content/9503/offering/70996/problem/3012// Coding Ninjas Repubic of Coders Question 1.
#include<bits/stdc++.h>
using namespace std;
int main() {
  int test;
  cin>>test;
  while(test){
    long int number,i,j;
    cin>>number;
    long int a[number];
    for( i=0;i<number;i++) {
      cin>>a[i];
    }
    for( i=0;i<number;i++) {
      long int product=1;
      for(j=0;j<number;j++) {
		if(j!=i) {
          product=product*a[j];
		}
      }
      cout<<product<<" ";
    }
    test--;
    cout<<endl;
  }
}
