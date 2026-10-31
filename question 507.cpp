class Solution {
public:
    bool checkPerfectNumber(int num) {
        int div=0;
        if (num==1||num==0){return false;}
        for (int i=2;i*i<=num;i++){
            if (num%i==0){
                div=div+i+(num/i);
            }
        }
        div=div+1;
        if (div==num){
            return true;}
        else{return false;}
    }
};