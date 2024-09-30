/*

Output numbers from 1 to x. If the number is divisible by 3, replace it with “Fizz”. If it is divisible by 5, replace it with “Buzz”. If it is divisible by 3 and 5 replace it with “FizzBuzz”.

e.g.

fizzbuzz(16)
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16

*/

#include<bits/stdc++.h>
using namespace std;

void FizzBuzz(int n){
  for(int i = 1; i <= n; i++){
    if(i % 3 == 0 && i % 5 == 0) cout<<"FizzBuzz"<<endl;
    else if(i % 3 == 0) cout<<"Fizz"<<endl;
    else if(i % 5 == 0) cout<<"Buzz"<<endl;
    else cout<<i<<endl;
  }
}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  FizzBuzz(n);

  return 0;
}