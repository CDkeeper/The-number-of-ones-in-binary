#include<iostream>
using namespace std;
int n;
int lowbit(int x){
    return x&-x;
}
int main(){
    scanf("%d",&n);
    while(n--){
        int tmp;
        scanf("%d",&tmp);
        int ans=0;
        while(tmp){
            tmp-=lowbit(tmp);
            ans++;
        }
        printf("%d ",ans);
    }
    return 0;
}
