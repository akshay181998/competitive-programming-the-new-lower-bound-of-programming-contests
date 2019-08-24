#include <bits/stdc++.h>

using namespace std;

int main() {
    double h,u,d,f,tmp,cnt;
    while(cin>>h,h){
        cin>>u>>d>>f;
        double tmp2 = (f/100.0)*u;
        if(h==0){
            break;
        }else{
            tmp = 0 ;
            cnt = 0;
            while(tmp<=h && tmp >=0){
                cnt++;
                tmp += u;
                if(tmp>h)
                    break;
                tmp -= d;
                if(tmp<0)
                    break;
                u -= tmp2;
                if(u<0)
                    u=0;
            }
            if(tmp<0){
                cout<<"failure on day "<<cnt<<endl;
            }else{
                cout<<"success on day "<<cnt<<endl;
            }
        }
    }
}
