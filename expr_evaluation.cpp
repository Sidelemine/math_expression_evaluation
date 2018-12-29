//i suppose i haave a correct mathematical expression with no spaces between characters
int evaluate(char* expr,int n)
{
    int result=0;
    if (n==0) return 0;//to stop at the end of the string
    end if;
    while(*expr=='(')expr++; //we move on until we get the first operand
          char* a=expr;              
          int i,j,k;
          i=j=k=0;
          i=get_length(a);// a simple methode that can know how many digit are in the first operand
          int na=to_integer(a,i);//anothor simple methode that convert 
                                //an array of digits into a decimal number
          char* op1=a+i; //a pointer to the first operator
          char* b=op1+1; // we should now get the second operand the same idea fas in a 
          j=get_length(b);
          int nb=to_integer(b,j);// the second operand
          char* cpar=b+j;// a pointer to the first closed parenthesis
          char* op2=b+j;// but we verify first if it is the second operator
          if (*op2==('+'||'-'||'*'||'/')){
          char* c=op2+1;
          k=get_length(c);
          int nc=to_integer(c,k); //the third operand
if(*op2==('*'||'/')){ //chaeck for priority between op1 and op2
int diff1 =b-a;// we need for the length of remainig part of the array
   result=calc(na,*op1,evaluate(b,n-diff+1);
                     } //in this case we start the evalution with op2
                                //calc is a methode thar can do a mathematical operation
else{                //when we dont have any priority issues
  int diff2=c-a;// we need for the length of remainig part of the array
 int temp =calc(na,*op1,nb); //we evalute the first two numbers
   result=calc(temp,*op2,evaluate(c,diff2+1); //then we move on 
    }
end if;
    cpar=c+k;                                     }end if;

  
  while((*cpar==')')&(*(cpar+1)==')')) cpar++; //in case we have many of them succesivly
  
 int nn=cpar-expr;//the length of the first part of the array that has been treated
  result=calc(result,*(cpar+1),evaluate(cpar+2,n-nn+1);
  end if;
  return result;


  int get_length(char* num){
    int length=0

    while(*num=='0'||*num=='1'||*num=='2'||*num=='3'||*num=='4'||*num=='5'||*num=='6'||*num=='7'||*num=='8'||*num=='9')
    num++;
    length++;
  }
  return length;}
  int to_integer)(char* a, int l)
  {
    int num=0;
    for (int i=l; i>0;i+--)
      num=num + (int)a[i]*power(10,i-1);
    return num;
  }
int calc(int a,char op,int b)
{
  switch(op){
    case '+':
    return a+b;
    break;
    case '-':
    return a-b;
    break;
    case '*':
    return a*b;
    break;
    case '/':
    return a/b;
    break;
  }

}
