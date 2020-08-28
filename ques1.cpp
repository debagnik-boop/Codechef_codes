#include <iostream>
using namespace std;

int profit(int s,int p,int v){
    s+=1;
    int people=p/s;
    int pro=people*v;
    return pro;
}
int main(){
    int t,n,s,p,v;
    cin >> t;
    while (t-- >0){
        int maxpro=0,res=0;
        cin >> n;
        while (n-- >0){
            cin >> s>>p>>v;
            res=profit(s,p,v);
            if (res> maxpro)
                maxpro=res;
        }
        cout << maxpro<<endl;
    }
}
