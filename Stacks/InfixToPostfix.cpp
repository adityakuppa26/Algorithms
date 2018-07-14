/* 1. Scan the infix expression from left to right.
2. If the scanned character is an operand, output it.
3. Else,
…..3.1 If the precedence of the scanned operator is greater than the precedence of the operator in the stack(or the stack is empty), push it.
…..3.2 Else, Pop the operator from the stack until the precedence of the scanned operator is less-equal to the precedence of the operator residing on the top of the stack. Push the scanned operator to the stack.
4. If the scanned character is an ‘(‘, push it to the stack.
5. If the scanned character is an ‘)’, pop and output from the stack until an ‘(‘ is encountered.
6. Repeat steps 2-6 until infix expression is scanned.
7. Pop and output from the stack until it is not empty. */

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
 
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}

void intopost(char* s)
{
  stack<char> stk;
  char* op;
  int k=0;
  for(int i=0;i<strlen(s)-1;i++)
  {
    if(isOperand(s[i]))
      op[k++]=s[i];
    
    else if(s[i]=='(')
      stk.push('(');
    
    else if(s[i]==')')
    {
      while(!stk.empty() && stk.top()!='(')
      {
        op[k++]=stk.top();
        stk.pop();
      }
      stk.pop();
    }
    
    else
    {
      while(!stk.empty() && prec(s[i])<=prec(stk.top()))
      {
        op[k++]=stk.top();
        stk.pop();
      }
      stk.push(s[i]);
    }
  }
  while(!stk.empty())
  {
    op[k++]=stk.top();
    stk.pop();
  }
  op[k]='\0';
  cout<<op<<endl;
  
}
