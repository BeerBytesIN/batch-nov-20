//method-1
map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 
void findAll() {
    //code here
   for(int i=1;i<=1000000;i++){
       int val=i;
       bool flag=true;
       while(val>0){
           int digit=val%10;
           if(digit!=1 && digit!=2 && digit!=3){
               flag=false;
               break;
           }
           val/=10;
       }
       if(flag)
       mp[i]=1;
   }
}

//method-2
map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 
void findAll() {
    //code here
vector<int> dp;
dp.push_back(1);
dp.push_back(2);
dp.push_back(3);
mp[1]=1;
mp[2]=1;
mp[3]=1;
int idx=0;
int num=1,num2;
while(num<=1000000){
    num2=dp[idx++];
    if(num2*10+1<=1000000){
    dp.push_back(num2*10+1);
    mp[num2*10+1]=1;
    }
    if(num2*10+2<=1000000){
    dp.push_back(num2*10+2);
    mp[num2*10+2]=1;
    }
    if(num2*10+3<=1000000){
    dp.push_back(num2*10+3);
    mp[num2*10+3]=1;
    }
    num=num2*10+3;
}
}
