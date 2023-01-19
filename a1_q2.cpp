#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>90){
        cout<<"excellent"<<endl;
  }
 else if(n>80 && n<=90){
    cout<<"good"<<endl;
  }
  else if (n>70 && n<=80){
    cout<<"fair"<<endl;
 }
 else if(n>60 && n<=70){
    cout<<"meets expectations"<<endl;
 }
  else{
    cout<<"below par"<<endl;
 }
 return 0;

}
