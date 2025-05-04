class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num==0)return true;

        int odd=1;
        while(num>0){
            num-=odd;
            odd+=2;
        }

        return num==0;
        
    }
};