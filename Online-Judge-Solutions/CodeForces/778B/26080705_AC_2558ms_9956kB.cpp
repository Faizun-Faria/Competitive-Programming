#include <bits/stdc++.h>
using namespace std;
const int N = 5e3 + 10;
map <string ,int> var_name;string v_name[N],op_type[N],value[N],L[N],R[N]; bool need_calc[N];


int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        string s1,s2,s3,s4,s5;
        cin>>s1>>s2>>s3;
        var_name[s1]=i;
        v_name[i]=s1;
        if(s3[0] =='0' || s3[0] == '1'){
            need_calc[i]=false;
            value[i] = s3;
        }else{
            need_calc[i]=true;
            cin>>s4>>s5;
            op_type[i]=s4;
            L[i]=s3;
            R[i]=s5;
        }
    }

    vector<int> v_max,v_min;
    for(int i = 0; i < m; i++){
        int total[2];
        char bit[n];
        memset(total,0,sizeof(total));
        for(int j = 0; j <= 1; j++){
            for(int k = 0; k < n; k++){
                if(need_calc[k]==false){
                    bit[k] = value[k][i];
                    if(bit[k] == '1') total[j]++;
                }else{
                    int n1 , n2;
                    if(L[k]=="?"){
                        n1 = j;
                    }else{
                        n1 = (int)bit[var_name[L[k]]]-(int)'0';
                    }
                    if(R[k]=="?"){
                        n2 = j;
                    }else{
                        n2 = (int)bit[var_name[R[k]]]-(int)'0';
                    }
                    if(op_type[k]=="XOR") n1 = n1^n2;
                    else if(op_type[k]=="OR") n1 = n1|n2;
                    else if(op_type[k]=="AND") n1 = n1&n2;
                    bit[k]='0'+n1;
                    if(bit[k] == '1')  total[j]++;
                }
            }
        }
        if(total[1]>total[0]){
            v_max.push_back(1);
            v_min.push_back(0);
        }else if(total[1]==total[0]){
            v_max.push_back(0);
            v_min.push_back(0);
        }else{
            v_max.push_back(0);
            v_min.push_back(1);
        }

    }
    for(int i=0; i<m; i++){cout<<v_min[i];} cout<<endl;
    for(int i=0; i<m; i++){cout<<v_max[i];} cout<<endl;
}
