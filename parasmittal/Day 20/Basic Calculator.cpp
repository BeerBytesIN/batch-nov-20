class Solution {
public:
    long calculate(long val1,long val2,char c){
        if(c=='+'){
            return val1+val2;
        }
            return val1-val2;
    }
    bool IsOperator(char c){
        if(c=='+' || c=='-')
            return true;
        return false;
    }
    int calculate(string s) {
        int ans=0;
        stack<long> operand;
        stack<char> Operator;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')
                continue;
            if(s[i]=='(')
                Operator.push(s[i]);
          else  if(IsOperator(s[i])){   
                while(!Operator.empty() && Operator.top()!='('){
                    long val2=operand.top();
                    operand.pop();
                    long val1=operand.top();
                    operand.pop();
                    long val=calculate(val1,val2,Operator.top());
                    Operator.pop();
                    operand.push(val);
                }
                Operator.push(s[i]);
            }
            else if(s[i]==')'){
                while(!Operator.empty() && Operator.top()!='('){
                    long val2=operand.top();
                    operand.pop();
                    long val1=operand.top();
                    operand.pop();
                    long val=calculate(val1,val2,Operator.top());
                    Operator.pop();
                    operand.push(val);
                }
                if(Operator.top()=='(')
                    Operator.pop();
            }
            else{
                long  val=0;
     while(i<s.length() && s[i]!=' ' && s[i]!='(' && s[i]!=')' && !IsOperator(s[i])){
         val=val*10+(s[i]-'0');
         i++;
     
     }
                operand.push(val);
                if(i==s.length())
                    break;
                i--;
                
            }
        }
          while(!Operator.empty() && Operator.top()!='('){
                    int val2=operand.top();
                    operand.pop();
                    int val1=operand.top();
                    operand.pop();
                    operand.push(calculate(val1,val2,Operator.top()));
                    Operator.pop();
                }
        cout<<operand.top();
        long factor=1;
        while(!operand.empty()){
            ans=ans+operand.top()*factor;
            factor*=10;
            operand.pop();
        }
       
        return ans;
        
    }
};