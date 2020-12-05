class Solution {
public:
    bool match(char a, char b){
        if((a=='}' && b=='{')||(a==']' && b=='[')||(a==')' && b=='('))
            return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
  if(s[i]=='}' || s[i]==']'||s[i]==')'){
    if(st.empty())
        return false;
     if(!match(s[i],st.top()))
        return false;
        st.pop();
  }
        else
        st.push(s[i]);
        }
        if(!st.empty())
        return false;
           
        return true;
    }
};