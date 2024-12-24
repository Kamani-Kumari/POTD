#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution{
   public:
     bool pangram(string s){
        int n = s.size();
        map<char,int> mp;
        for(auto x:s){
             mp[x]++;
        }
        for(auto y:mp){
             if(y.second!=1){
                   return false;
             }
        }
        return true;
     }
};
int main(){
     string str;
    cin>>str;
    Solution s;
    cout<<s.pangram(str);
    return 0;
}