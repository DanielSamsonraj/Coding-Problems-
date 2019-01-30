//https://codingninjas.in/app/classroom/me/576/content/9697/offering/73081/problem/2973// Question Link
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t){
    string a;
    int sum=0;
    cin>>a;
    for(int i=0;a[i]!='\0';i++){
      sum=sum+a[i]-48;
    }
    cout<<sum<<endl;
    t--;
  }
}
