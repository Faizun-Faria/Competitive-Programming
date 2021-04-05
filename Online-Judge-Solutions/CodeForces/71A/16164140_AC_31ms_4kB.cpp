#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t;
		cin>> t;
		int l= 0;
		int k =0;
		for (int x=1; x<=t; x++){
		    string s;
		    cin>> s;	
	    	l= s.length();
        if (l>10){
		        k =l-2;
	    	    cout<< s[0]<<k<<s[l-1] ;	
		    }else{
            cout<<s;
        }
        cout<< endl;
    }
		return 0;
}