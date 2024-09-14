/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the positive integer";
	cin>>a;
	if(a%2==0)
	cout<<"even number";
	if(a%2!=0)
	cout<<"odd number";
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the positive integer";
	cin>>a;
	if(a%2==0){
		cout<<"even number";
	}
	else{
	   cout<<"odd number";
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the positive integer:";
	cin>>a;
	if(a%2==0){
		cout<<"even number\n";
		cout<<"wow";
	}
	else{
		cout<<"odd number\n";
	    cout<<"thanks";
	}
	   
}
*/
 
// PROGRAM TO CALCULATE WHETHER THE USER MAKE PROFIT OR LOSS
/*

#include<iostream>
using namespace std;
int main(){
	int cp , sp , loss , profit;
	cout<<"enter cost price:";
	cin>>cp;
	cout<<"enter selling price:";
	cin>>sp;
	if(cp>sp){
		loss=cp-sp;
		cout<<"loss of 1";
		cout<<loss;
	}
	else if(sp>cp){
		profit=sp-cp;
		cout<<"profit of ";
		cout<<profit;
	}
	else{
		cout<<"no loss or profit";
	}
}

*/

/*
#include<iostream>
using namespace std;
int main(){
	int cp , sp , loss , profit;
	cout<<"enter cost price:";
	cin>>cp;
	cout<<"enter selling price:";
	cin>>sp;
	if(cp>sp){
		loss=cp-sp;
		cout<<"loss of "<<loss;
	}
	else if(sp>cp){
		profit=sp-cp;
		cout<<"profit of "<<profit;
	}
	else{
		cout<<"no loss or profit";
	}
}

*/

/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the number:";
	cin>>a;
	if(a>99&&a<1000){
		cout<<"It is three digit number";
    }
	else{
		cout<<"It is not a three digit number";
	}
}

*/
/*

// PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 5 AND 3	
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a positive inetger:";
	cin>>a;
	if(a%5==0 && a%3==0){
		cout<<"The number is divisible by 5 and 3";
	}
	else{
		cout<<"The number is not divisible by 5 and 3";
	}
}
*/
	
// PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 5 OR 3
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a positive inetger:";
	cin>>a;
	if(a%5==0 || a%3==0){
		cout<<"The number is divisible by 5 or 3";
	}
	else{
		cout<<"The number is not divisible by 5 and 3";
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int a , b , c;
	cout<<"ENTER THREE SIDES OF TRIANGLE:";
	cin>>a>>b>>c;
	if( (a+b>c) && (b+c>a) && (c+a>b) ){
		cout<<"They can be the sides of a triangle";
	}
	else{
		cout<<"They can't be the sides of a triangle";
	}
}

*/
	
// PROGRAM TO CHECK FROM THREE NUMBERS A ,B AND C WHICH IS GREATEST USING NESTED LOOP
/*
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three positive inetgers:";
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
		cout<<"A is bigger";
		} 
		else{
			cout<<"C is greatest";
		}
	}
	else{
		if(b>c){
			cout<<"b is greatest";
		}
		else{
			cout<<"c is greatest";
		}
	}
}

*/

// PROGRRAM TO FIND YOUNGEST OF THREE
/*
#include<iostream>
using namespace std;
int main(){
	int ram,shyam,ajay;
	cout<<"enter the age of ram:";
	cin>>ram;
	cout<<"enter the age of shyam:";
	cin>>shyam;
	cout<<"enter the age of ajay:";
	cin>>ajay;
	if(ram<shyam){
		if(ram<ajay){
		cout<<"ram is youngest";
		}
		else{
			cout<<"ajay is youngest";
		}
	}
	else{
		if(shyam<ajay){
		  cout<<"shyam is youngest";	
		}
		else{
			cout<<"ajay is youngest";
		}
	}
}
	
*/	

// PROGRAM TO FIND IN WHICH QUADRANT THE VALUES OF X AND Y LIES
/*
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter the value of x:";
	cin>>x;
	cout<<"enter the value of y:";
	cin>>y;
	if(x==0 && y==0){
		cout<<"they lie at origin";
	}
	else if(x>=0 && y>=0){
		cout<<"they lie in the first quadrant";
	}
	else if(x<=0 && y>=0){
		cout<<"they lie in the second quadrant";
	}
	else if(x>=0 && y<=0){
		cout<<"they lie in the fourth quadrant";
	}
	else{
		cout<<"they lie in the third quadrant";
	}
}
	
*/

// TERNARY OPERATOR
// PROGRAM TO CHECK WHETHER A NUMBER IS ODD OR EVEN USING TERNARY OPERATOR
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	(n%2==0) ? cout<<"even number":cout<<"odd number";
}
*/

// SWITCH CASE
/*
#include<iostream>
using namespace std;
int main(){
	int a ,b;
	char op;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"enter the operation:";
	cin>>op;
	switch(op){
		case'+':
			cout<<"sum of two numbers is "<<a+b;
			break;
		case'-':
		    cout<<"difference of two numbers is "<<a-b;
		    break;
		case'*':
		    cout<<"multiplication of two numbers is "<<a-b;
		    break;
		case'/':
		    cout<<"division of two numbers is "<<a/b;
			break;
		default:
		    cout<<"invalid operator";
			
	}
	
}
	
*/

























