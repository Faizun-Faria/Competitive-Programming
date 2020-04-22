### STRING

* index of the first character of a word
```
string s =  "Somewhere something incredible!";
int firstSome = s.find("some"); //it will be 0
int lastSome = s.rfind("some"); // it will be 10
```
* substring between two index
```
string st = s.substr(2,9); // it will be "mewhere"
```
* Minimum and maximum string between two substring
```
string mini = min(s.substr(0,9), s.substr(11,19));
string maxi = max(s.substr(0,9), s.substr(11,19)); 
```
* Upper to lower and vice versa (for whole string and for a character in the string)
```
string s = "FarIa";
transform(s.begin(), s.end(), s.begin(), ::tolower);    //faria
transform(s.begin(), s.end(), s.begin(), ::tolower);   //FARIA
s[2]= tolower(s[2]);
cout<<s; //FArIA
```

```
for(int i=0; i<s.length(); i++){
	if(s[i]>='a' && s[i]<='z'){
		s[i] =s[i]-32;
	}else if(s[i]>='A' && s[i]<='Z'){
		s[i] =s[i]+32;
	}

}
```
* Sorting characters of a string in lexicographic order
```
sort(s.begin(), s.end());  //AAFIr
```
* Comparing two string
```
string str1 = "Faizun";
string str2 = "Faria";
if(str1.compare(str2)<0){
    cout<<str1<<" comes first"<<endl;
}
```
* Length of string
```
int l = str1.length();
```
* character of string comparison
```
if (s[i]=='a')
```
* Reverse the order of characters in a string
```
s = reverse( s.begin() , s.end() );// bad will be dab
```

* comparing two string of integer
```
int a= "1289";
int b = "514";
if(a.length()<b.length()){
	swap(a,b);
}
while(b.length()<a.length()){
	b="0"+b;
}
```
* Check if a character is alphabet
```
bool isLetter(char c1){
	return ( ( (c1>='a') && (c1<='z') ) || ( (c1>='A') && (c1<='Z') ) );
}
```
