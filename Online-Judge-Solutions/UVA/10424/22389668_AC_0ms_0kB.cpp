#include <bits/stdc++.h>
using namespace std;
string s1;
string s2;
int len1;
int len2;
int sumInit1;
int sumInit2;

int sumI(int l, string s){
	int sum=0;
	for(int i=0; i<l;i++){
		if(s[i]>=97&&s[i]<=122) sum+=(s[i]-96);
		else if(s[i]>=65&&s[i]<=90) sum+=(s[i]-64);
	}
	return sum;
}
int sumF(int su){
	int summ=0;
	while(su!=0){
		summ+=su%10;
		su/=10;
	}
	return summ;
}

int main() {
	while(getline(cin,s1)){
		getline(cin,s2);
		len1=s1.length();
		len2=s2.length();
		sumInit1 = sumI(len1, s1);
		sumInit2 = sumI(len2, s2);
		while(sumInit1/10!=0){
			sumInit1= sumF(sumInit1);
		}
		while(sumInit2/10!=0){
			sumInit2= sumF(sumInit2);
		}
		double sumF1= sumInit1*1.0;
		double sumF2 = sumInit2*1.0;
		double ans=1;
		if (sumF1<sumF2) ans =(sumF1/sumF2)*100;
		else ans =(sumF2/sumF1)*100;
	
		printf("%.2lf %\n", ans);
		
	}
}