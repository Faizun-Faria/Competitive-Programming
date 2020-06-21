# Bitwise AND, OR, XOR

### AND
```
1&1=1, 1&0=0, 0&1=0, 0&0=0
 a = 0010001
 b = 1010101
a&b= 0010001
```
* If only one bit is 0 then then the AND of the bits will be 0

### OR
```
1|1=1, 1|0=1, 0|1=1, 0|0=0
 a = 0010001
 b = 1010101
a|b= 0010001
```
* If only one bit is 1 then then the AND of the bits will be 1
### XOR
```
1^1=0, 1^0=1, 0^1=1, 0^0=1
 a = 0010001
 b = 1010101
a^b= 1000100
```   
```   
    a = 0001
    b = 1011
    c = 0110
a^b^c = 1110
```
* If number of 1 is odd then XOR value will be 1
* If number of 1 is even then XOR value will be 0
### Right Shift(Floor Division)
* Right shifting any number 1 digit means diving the number with 2 (floor)
```
int a = 5;
int b = a>>1; //2
```
### Left Shift
* 1<<n
* Left shifting any number 1 digit means multiplying the number with 2
* Left shifting ,any number, x k digit(s) means multiplying the number with x X 2^(k) {x into two to the power k}

``` 
* Multiplying by 2
int a = 7;
int b = a<<1; //14
* Power of 2
int a = 3;
int b = 1<<a; //8
```
### Checking if a bit is 1 or 0
```
* If we want to know whether the kth bit is 0 or 1, we will right shift the number k times which is e.g. x. Now if (x&1)=1 then the kth bit is 1. 
a = 10100010
x = a>>3 = 10100
x&1 = 0
```
### Check Bit
```
int checkbit(int mask, int k){
  return (mask>>k)&1;
}
```
### Flip Bit
```
int flipbit(int mask, int k){
  return mask^(1<<k);
}
```
### Set Bit
```
* Making a bit 1
```
```
int setbit(int mask, int k){
  return mask|(1<<k);
}
```
### Reset Bit
```
* Making a bit 0
```
```
int resetbit(int mask, int k){
  if(checkbit(mask,k)){
    mask = flipbit(mask,k);
  }
  return mask;
}
```
### All possible subset (0/1 knapsack)
```
int n = 22; //max 22
for(int mask=0; mask(1<<n); mask++){
    int tot_price=0, tot_weight=0;
    for(int k=0; k<n; k++){
        if(checkbit(mask,k)){
            tot_price+=p[k];
            tot_weight+=w[k];
        }
    }
    if(tot_weight<=Capacity) ans=max(ans,tot_price)
}
```
```
bitmask
0 base
```
```
* If N = 3 ( 0...2^N-1) (0....7) ---> 2^N(8) possibilities 
000 --> {}
001 --> {0}
010 --> {1}
011 --> {0,1}
100 --> {2}
101 --> {2,0}
110 --> {2,1}
111 --> {2,1,0}
```
### Prefix XOR
```
for (i=1:n){
    prefix[i] = prefix[i-1]^arr[i];
}
* keep 0 in the first index of the array
ans = prefix[R]^prefix[L-1];
```
```
int arr [] = {a1,a2,a3,a4,a5,a6}
Assuming L = 3 --> (a3) and R = 6 ---> (a6)
ans = prefix[a2]^prefix[a6] = (a1^a2)^(a1^a2^a3^a4^a5^a6) = (a1^a1)^(a2^a2)^(a3^a4^a5^a6) = 0^0^(a3^a4^a5^a6) = (a3^a4^a5^a6)
```
### Sum of XOR of all possible pairs
```
for(int i=1; i<=n; i++){
    for(int j=i+1; j<=n; j++){
        ans+= a[i]^a[j];
    }
}
```
```
Binary sequence = 1 0 1 0 1
ans = 1+0+1+0+1+0+1+.... = 6
* No. of zero(s) X No of one(s) 
```
```
Given Sequence = a1,a2,a3,a4,....aN

