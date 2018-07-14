/* Step 1: Reverse the infix expression i.e A+B*C will become C*B+A. Note while reversing each ‘(‘ will become ‘)’ and each ‘)’ becomes ‘(‘. 
Step 2: Obtain the postfix expression of the modified expression i.e CB*A+. 
Step 3: Reverse the postfix expression. Hence in our example prefix is +A*BC.  */

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
string infixToPrefix(string infix)
{
    int l = infix.size();
 
    reverse(infix.begin(), infix.end());
 

    for (int i = 0; i < l; i++) {
 
        if (infix[i] == '(') {
            infix[i] = ')';
            i++;
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
            i++;
        }
    }
 
    string prefix = intopostfix(infix);

    reverse(prefix.begin(), prefix.end());
 
    return prefix;
}
 
