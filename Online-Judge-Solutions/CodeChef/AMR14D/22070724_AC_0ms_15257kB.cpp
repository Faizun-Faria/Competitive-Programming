#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testCase;
	cin>>testCase;
	int n;
	int s;
	for(int i=0; i<testCase; i++){
		cin>>n;
		set <int> st;
		for(int j=0; j<n;j++){
			cin>>s;
			st.insert(s);
		}
		if(n==st.size()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}
