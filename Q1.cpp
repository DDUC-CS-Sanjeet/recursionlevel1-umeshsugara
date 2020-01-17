//projct 1
#include<iostream>
using namespace std;
int recursivegcd(int,int), recursivepower(int ,int ,int ),recursivefactorial(int ),recursivefibonacci(int,int,int); 
void iterativegcd(),iterativepower(),iterativefactorial(),iterativefibonacci();
int main()
{   
cout<<"              GCD by recursion ::\n";
	int num1,num2,temp;
	cout<<"give the value of two numbers to calculate their gcd : \n";
   	cin>>num1>>num2;
   	if(num1<=0||num2<=0)
   	  {
   	  	cout<<"gcd does not exist\n";
      }
    else
    {
   	temp=num1;
	num1=recursivegcd(num1,num2);
	cout<<"The gcd of "<<temp<<" and "<<num2<<" is : "<<num1<<endl;
    }
	
	
	
	
	
cout<<"              GCD by iteration ::\n";
	iterativegcd();
	
	
	
	
	
	
cout<<"\n\n\n         POWER by recursion ::\n";
	int result=1;
	cout<<"give the value of base number : \n";
   	cin>>num1;
   	cout<<"give the value of exponent number  : \n";
   	cin>>num2;
	result=recursivepower( num1, num2, result);
	cout<<"The result of "<<num1<<"^"<<num2<<" is : "<<result<<endl;
	
	
	
	
	
	
cout<<"              POWER by iteration ::\n";
	iterativepower();
	
	
	
	
	
	
cout<<"  \n\n\n            FACTORIAL by recursion ::\n";
	int num,fact;
	cout<<"give the value of  numbers to calculate it's factorial : \n";
   	cin>>num;
	fact=recursivefactorial(num);
	cout<<"The  factorial of "<<num<<" is : "<<fact<<endl;
	
	
	
	
	
	
cout<<"              FACTORIAL by iteration ::\n";
     iterativefactorial();








cout<<" \n\n\n             FIBONACCI SERIES by recursion ::\n";     
     int value,series,term1=0,term2=1,term3;
	cout<<"give the number of terms to be printed  : \n";
   	cin>>num;
   	value=num;
	cout<<"The fibonacci series of "<<value<<" terms is : ";
	if(num==1)
	   cout<<term1<<"\n";
	else if(num==2)
	    cout<<term1<<" "<<term2<<"\n";
    else
   {
	cout<<term1<<" "<<term2<<" ";
	recursivefibonacci(num,term1,term2);
   }
   
   
   
   
   
   
   
   
cout<<"\n              FIBONACCI SERIES by iteration ::\n";
iterativefibonacci();
	cout<<"\n_______________________________________PROGRAM ENDS HERE________________________________________\n";
	return 0;
	
}//THE PROGRAM ENDS HERE






int recursivegcd(int num1,int num2)
    { 
      int temp;
      if(num2==0)
	    return num1;
	  else
	    temp=num1;
	    num1=num2;
	    return recursivegcd(num2,temp%num2);	
	}


void iterativegcd()
{
   	int num1,num2,temp1,temp2;
   	cout<<"give the value of two numbers to calculate their gcd : \n";
   	cin>>num1>>num2;
   	if(num1<=0||num2<=0)
   	  {
   	  	cout<<"gcd does not exist\n";
      }
    else
	{
	
   	temp1=num1;
   	temp2=num2;
   	for (int temp=0;num2!=0;)
   	    {
   	      temp=num1;
		  num1=num2;
		  num2=temp%num2;	
	    }
	cout<<"The gcd of "<<temp1<<" and "<<temp2<<" is : "<<num1<<endl;
   }
}






int recursivepower( int num1,int num2,int result)
   {
    if (num2==0)
       return result;
    else
       {
	   result*=num1;
       return recursivepower(num1,num2-1,result);
   	   }
    }

void iterativepower()
    {
      	int num1,num2,result,temp;
	    cout<<"give the value of base number : \n";
     	cin>>num1;
   	    cout<<"give the value of exponent number : \n";
     	cin>>num2;
		if(num2==0)
		   cout<<"the result of "<<num1<<"^"<<num2<<" is : 1 \n";
		else
		   {temp=num2;
		   	for(result=1;num2!=0;num2--)
		   	    {
		   	    	result*=num1;
			    }
			cout<<"the result of "<<num1<<"^"<<temp<<" is : "<<result<<" \n";
		   }	
	}
	
	
	
	
	
	
int recursivefactorial( int num)
   {
    if(num>1)
       {
       return num*recursivefactorial(num-1);
       }
    else
        return 1;
    }
    


void iterativefactorial()
    {
    	int num,fact=1;
    	cout<<"give the number whose factorial is to be calculate \n";
    	cin>>num;
    	for(int temp=1;temp<=num;temp++ )
    	    {
    	       fact*=temp;	
			}
		cout<<"factorial of "<<num<<" is : "<<fact<<endl;
	}
	
	
	
	
	
	
	
	
int recursivefibonacci( int num,int term1,int term2)
   { 
     if(num>2)
       {
       	cout<<term1+term2<<" ";
	    return recursivefibonacci(num-1,term2,term1+term2 );
       	}
   }
   
   
   
   
void iterativefibonacci()
{
	
  int num,temp,series,term1=0,term2=1,term3;
	cout<<"give the number of terms to be printed  : \n";
   	cin>>num;
   	temp=num;
	cout<<"The fibonacci series of "<<temp<<" terms is : ";
	if(num==1)
	   cout<<term1<<endl;
	else if(num==2)
	    cout<<term1<<" "<<term2<<endl;
    else
	{
		for(series=1;series<=num;series++)
		   {
		    cout<<term1<<" ";
		   	term3=term1+term2;
		   	term1=term2;
		   	term2=term3;
		   }
	}	

}   
   

   


    


