#include <bits/stdc++.h>

using namespace std;

int main() {  
  

  int a[5]={5,10,15,20,26};
  

 int i=0,j=1;
 while(1){
    if(a[j]-a[i]<10){
        j++;


        

    }
    if(a[j]-a[i]>10){
        i++;
        

        

    }
        if(a[j]-a[i]==10){
        cout<<"yes";
        

        

    }


  
 }






  string s;
  int f=0;

 for(int i=0;i<5;i++){
    s+='0'+a[i];
    if(s.find(char(a[i]-10)!=string::npos)){
        f=1;
        break;
    }


 }





  return 0;
}