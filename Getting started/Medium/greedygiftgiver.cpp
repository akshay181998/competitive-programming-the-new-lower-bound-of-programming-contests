 #include<bits/stdc++.h>
using namespace std ;

int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
   int n;
   string sep = "";
   while(cin>>n){
      unordered_map<string,int>mp;
      vector<string>v;
      string st1,st2;
      int tmp1,tmp2,tmp3;
      for(int i=0 ; i<n ; i++){
         cin>>st1;
         v.push_back(st1);
         mp.insert({st1,0});
      }
      for(int i=0 ; i<n ; i++){
         cin>>st1>>tmp1>>tmp2;
         for(int j=0 ; j<tmp2 ; j++){
            cin>>st2;
            cin.ignore();
            mp[st2] += (tmp1/tmp2);
            mp[st1] -= (tmp1/tmp2);
         }
      }
      cout<<sep;
      sep="\n";   
      for(int i=0 ; i<v.size() ; i++){
         cout<<v[i]<<" "<<mp[v[i]]<<endl;
      }
      v.clear();
      mp.clear();
   }
   return 0;
}
