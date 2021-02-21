#include <iostream>
#include <string.h>
#include<bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int ans,ans1,ans2;
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int k=str.find("CMP");

    if (k==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
	// your code goes here
	return 0;
}
