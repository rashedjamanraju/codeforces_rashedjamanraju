/*
https://codeforces.com/problemset/problem/379/A
________________________________________________________________

initial logic : It can be wrong
initial code  : It can be  right for some cases but not for all
________________________________________________________________

a = Number of fresh new candles;
b = Number of burned out candles which will pairly form new candle
res =total hour;
a=4, b=2
res=4
    if(a%b==0)
        res+=a/b => res=4+2
        a=a/b    => a=2
    if(a%b==0)
        res+=a/b => res=4+2+1
        a=a/b    => a=1
    print result


---------code----------
 int a,b; cin>>a>>b;  
 int res=a;           
 while(a%b==0){       
     res+=a/b;        
     a=a/b;           
 }                    
 cout<<res<<endl;     
-----------------------
The issue there is when burned out pair of candles or fresh candles number is odd in any moment then it exclude thoose remain burned out candles.
We also needs to count those excluded burned out candles

a=123, b=5
res=a => 123
calculating how many pairs of 5 burned out candles will form from 123 candle => 24  
extra remain burned out candles (which was not able to create pair of 5 burned out candle) => 3
How=>123-(24*5=120)=3 

________________________________________________________________

Final logic : It will always right
Final code  : It will always right for all cases
________________________________________________________________


a = Number of fresh new candles;
b = Number of burned out candles which will pairly form new candle
res =total hour;
a=123, b=5
res=123
    if(a>=b)
        res+=a/b         => res=123+24
        a=(a/b)+(a%b)    => a=24+3
    if(a>=b)
        res+=a/b         => res=123+24+5
        a=(a/b)+(a%b)    => a=5+2
    if(a>=b)
        res+=a/b         => res=123+24+5+1
        a=(a/b)+(a%b)    => a=1+2
    print result

---------code-----------
int a,b; cin>>a>>b;  
int res=a;           
while(a>=b){         
    res+=a/b;        
    a=(a/b)+(a%b);   
}                    
cout<<res<<endl;     
------------------------
   
*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a,b; cin>>a>>b;  
    int res=a;           
    while(a>=b){       
        res+=a/b;        
        a=(a/b)+(a%b);   
    }                    
    cout<<res<<endl; 
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t=0;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}