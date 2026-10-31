class Solution {
public:
    int reverse(int x) {
        long long  c=0,s;
    while (x!=0){
            s=x%10;
            x=x/10;
            c=c*10+s;
            if (c>INT_MAX || c < INT_MIN) {return 0;}
            
        }            
        return (int)c;
    }
};