class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size(),openbrackets=0,balance=0,unlocked=0;
        if(n%2){return false;}
        for(int i=0;i<n;i++){
            if(locked[i]=='0'){
                unlocked++;

            }
            else if(s[i]=='('){
                openbrackets++;
            }
            else if(s[i]==')'){
                if(unlocked>0){
                    unlocked--;
                }
                else if(openbrackets>0){
                    openbrackets--;
                }
                else{
                    return false;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(locked[i]=='0'){
                unlocked++;
                balance--;
            }
            else if(s[i]=='('){
                balance++;
                openbrackets--;
            }
            else if(s[i]==')'){
                balance--;
            }
            if(balance>0){
                return false;
            }
            if(openbrackets==0 && balance==0){
                break;
            }
        }
        if(openbrackets>0){
            return false;
        }
        return true;
    }
};