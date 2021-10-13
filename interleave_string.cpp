#include<bits/stdc++.h>
using namespace std;
 bool interleave(string a,string b,string c){
    int l1=a.length();
    int l2=b.length();
    int l3=c.length();
        int f=0;
        int i=0,j=0,k=0;
    if((l1+l2)!=l3)
        return 0;
    else
        { 
        while(k<l3){
            if(i<l1 and a[i]==c[k])i++;
              else if(j<l2 and b[j]==c[k])j++;
                    else {
                      f=1;
                      break;
                       }
                k++;
                 }
        }
    if(i<l1 or j<l2) return 0;
    else 
        return 1;

 }
 int main(){
    string a,b,c;
    cin>>a>>b>>c;
    cout<<interleave(a,b,c);
    return 0;
     }
