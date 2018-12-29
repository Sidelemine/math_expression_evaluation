//i suppose i haave a correct mathematical expression with no spaces between characters
int evaluate(char* expr,int n)
{
    int result=0;
    if (n==0) return 0;//to stop at the end of the string
    end if;
    if(*expr=='(')  //
                 result=evaluate(expr+1,n-1);//we move on until i get the first operand
    else {
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
          char* op2=b+j;// the second operator
          char* c=op2+1;
          k=get_length(c);
          int nc=to_integer(c,k); //the third operand
if(*op2==('*'||'/')){ //chaeck for priority between op1 and op2
int diff1 =b-a;// we need for the length of remainig part of the array
   result=calc(na,*op1,evaluate(b,n-diff+1);} //in this case we start the evalution with op2
                                //calc is a methode thar can do a mathematical operation
else{                //when we dont have any priority issues
  int diff2=c-a;// we need for the length of remainig part of the array
 int temp =calc(na,*op1,nb); //we evalute the first two numbers
   result=calc(temp,*op2,evaluate(c,diff2+1); //then we move on 
}
end if;
 }
end if;               
 char* par= c+k;// a pointer to the first closed parenthesis
 int cpt=0;
  while((*par==')')&(*(par+1)==')')) 
 {par++; //in case we have many of them succesivly
  cpt++;} // a counter to keep tracking our position in the array
 cpt=c+k+cpt;
 int nn=expr-cpt;//the length of the rest of the array that still need to be evaluated
  result=calc(result,*(par+1),evaluate(par+2,n-nn+1);

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
