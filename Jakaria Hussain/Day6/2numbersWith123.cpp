
// Link : https://practice.geeksforgeeks.org/problems/numbers-containing-1-2-and-32555/1#

map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only
bool is123(int x){
    
    while(x>0){
        int y = x%10;
        if(y!=1 && y!=2 && y!=3) return false;
        x/=10;
    }
    return true;
}
void findAll() {
    //code here
    
    for(int i=1;i<1000001;i++){
        
        if(is123(i)){
            mp[i]++;
        }
    }
}
