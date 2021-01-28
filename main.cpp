#include <iostream>
using namespace std;

int recursiveFibonacci(int n){
  if (n<=1)
  return n;
  return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
}
int iterativeFibonacci(int n){
  int a= 0, b= 1, c= 0;
  for (int i= 1; i<n; i++){
    c= a+b;
    a= b;
    b=c;
  }
  return c;
}

int main(){
  int n;
  cout<<"Enter a positive integer: ";
  cin>> n;
  cout<<recursiveFibonacci(n);
  cout<<"\n";
  cout<<iterativeFibonacci(n);
  return 0;
}