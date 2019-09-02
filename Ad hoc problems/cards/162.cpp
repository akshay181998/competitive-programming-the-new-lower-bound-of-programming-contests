#include<bits/stdc++.h>
using namespace std ;

int main()
{
   vector<string>dealer,nondealer;
   string st1;
   int i=0;
   while(cin>>st1,st1!="#"){
      if(i%2==0){
         nondealer.push_back(st1);
      }else{
         dealer.push_back(st1);
      }
      i++;
   }
   for(int i=0 ; i<dealer.size() ; i++){
      cout<<dealer[i]<<" ";
   }
   return 0 ;
}