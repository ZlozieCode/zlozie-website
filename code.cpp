
// two sum

bool check(vector<int>v, int x){

int n=v.size();
map<int,int>m;
for(int i=0;i++;i<n){
 m[v[i]]++;
}

for(auto y:m){
if(y==x)return 1;
break;
}

return 0;	
}
