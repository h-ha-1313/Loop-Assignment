#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const long long Maxn = 1e7+5;
long long num;
long long sum, cnt;
long long list[Maxn];

int findDivisors(int num){
    if(num<1) return -1;

    for(int i=1; i<=num; i++){
        if(num % i == 0){
            cnt++;
            sum += i;
            list[cnt] = i;
        }
    }
    
    cout<<"List of divisors are: ";
    for(int i=1; i<=cnt; i++){
        cout<<list[i]<<" ";
    }

    cout<<"Sum: "<<sum<<endl;
    cout<<"Number of divisors: "<<cnt<<endl;
}

int main(){
    cin>>num;

    findDivisors(num);
}