/* Read the Prefix expression in reverse order (from right to left)
If the symbol is an operand, then push it onto the Stack
If the symbol is an operator, then pop two operands from the Stack
Create a string by concatenating the two operands and the operator between them.
string = (operand1 + operator + operand2)
And push the resultant string back to Stack 
Repeat the above steps until end of Prefix expression. */  




void pretoin(string s)
{
  stack<string> stk;
  for(int i=strlen(s)-1;i>=0;i--)
  {
    if(isOperator(s[i])
    {
      string op1=stk.pop();
      string op2=stk.pop();
      string temp="("+op1+s[i]+op2+")";
      stk.push(temp);
    }
    else
    {
      stk.push(string(1,s[i]));
    }
  }
  return stk.top();
}
