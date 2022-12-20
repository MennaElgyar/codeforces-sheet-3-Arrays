#include <iostream>
#include<iomanip>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long arr[N];
    for(int i =0; i<N ; i++){
        cin>>arr[i];
    }
    int X;
    cin>>X;
    bool target = false;
    for(int i=0;i<N;i++){
       if(arr[i]==X) {
           cout<<i<<endl;
           target = true;
           break;
       }
    }
    if(target==false) cout<<-1;
}
