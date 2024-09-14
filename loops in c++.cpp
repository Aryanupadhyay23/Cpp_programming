                            // LOOPS IN C++

// program to print hello world n times 
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of times you want to print hello world:";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"hello world"<<"\n";
	}
}
*/

//starting initializing from 3
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of times you want to print hello world:";
	cin>>n;
	for(int i=3;i<=n;i++){
		cout<<"hello world"<<"\n";
	}
}
*/
// PROGRAM TO PRINT COUNTING TILL N NUMBER
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of times:";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<"\n";
	}
}
*/

//PRINT EVEN NUMBERS FROM 1 TO N
/*
#include<iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"enter range:";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0) cout<<i<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"enter range:";
	cin>>n;
	for(int i=2;i<=n;i=i+2){
	   cout<<i<<endl;
    }
}
*/

//PROGRAM TO PRINT TABLE OF ANY NUMBER
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter number:";
	cin>>a;
	for(int i=1;i<=10;i++){
		cout<<i*a<<endl;
    }
}
*/


// PROGRAM TO CALCULATE TABLE OF 19
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	for(int i=19;i<=190;i=i+19){
		cout<<i<<endl;
    }
}
*/

// PROGRAM TO PRINT AP LIKE 1,3,5,7....
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the range:";
	cin>>n;
	for(int i=1;i<=n;i=i+2){
		cout<<i<<endl;
    }
}
*/

// PROGRAM TO CALCULATE GP LIKE 1,2,4,8,16....
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter number:";
	cin>>a;
	for(int i=1;i<=a;i=i*2){
		cout<<i<<endl;
    }
}
*/

// PROGRAM TO FIND FACTOR OF ANY NUMBER
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=1;i<n;i++){
		if(n%i==0){
		   cout<<i<<endl;	
		} 
    }
}
*/

// PROGRAM TO PRINT HIGHEST FACTOR OF ANY NUMBER
/*
#include<iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"enter number:";
	cin>>n;
	a=1;
	for(int i=1;i<n;i++){
		if(n%i==0){
		   a=i;
		} 
    }
    cout<<a;
}

*/

// PROGRAM TO CALCULATE THE HCF OF ANY NUMBER USING REVERSE LOOP
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=n/2;i>=1;i--){
		if(n%i==0){
		  cout<<i;
		  break;
		} 
    }
}

*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=n/2;i>=1;i--){
		if(n%i==0){
		  cout<<i<<endl;
		 
		} 
    }
}
*/

// PROGRAM TO PRINT WHETHER THE NUMBER IS COMPOSITE OR PRIME
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=n/2;i<=n/2;i--){
		if(n%i==0){
		  cout<<"composite number";
		  break;
	    }
		else{
		  cout<<"prime number";
		  break;
		}
			
	
    }
}

*/

// PROGRAM TO PRINT WHETHER THE NUMBER IS PRIME OR COMPOSITE
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	bool flag = true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
		  flag=false;
		  break;
		} 
    }
    if(n==1) cout<<"nor prime nor composite";
    else if (flag==true) cout<<"prime number";
    else cout<<"composite number";
}
*/


// PROGRAM TO PRINT NUMBERS FROM 1 TO 20 EXCEPT 3 AND 9
/*
#include<iostream>
using namespace std;
int main(){
	int n = 20;
	for(int i=1;i<=20 ;i++){
		if(i==3 || i==9){
	      continue;
		} 
		else cout<<i<<endl;
    }
}
*/

// PROGRAM TO PRINT ODD NUMBERS FROM 1 TO 100 USING CONTINUE
/*
#include<iostream>
using namespace std;
int main(){
	int n=100;
	for(int i=2;i<=n;i++){
		if(i%2==0){
		  continue;
	    }
		else{
			cout<<i<<endl;
		}
		
    }
}
*/

// PROGRAM TO PRINT NUMBERS 1 TO 100
/*
#include<iostream>
using namespace std;
int main(){
	int a = 1;
	while(a<=100){
		cout<<a<<endl;
		a++;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int a = 1;
	do{
		cout<<"hello";
	}
	while(a<=100);{
		cout<<a<<endl;
		a++;
	}
}
*/

// DO WHILE LOOP
/*
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    do {
        cout<<a<<"\n";
        a++;
    } while (a >= 10);
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    while (a == 1)
    	a=a-1;
	cout<<a<<endl;   
}

*/

/*
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    while(a==10){
    	cout<<a<<endl;
    	a=a+1;
	}
}
*/

/*
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while(i=10){
    	cout<<i<<endl;
    	i=i+1;
	}
}

*/

// PROGRAM TO PRINT NUMBER OF DIGITS IN A NUMBER
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter number:";
	cin>>a;
	int p=0;
	while(a>0){
		a=a/10;
		p=p+1;
	}
cout<<p;
}

*/


// PROGRAM TO PRINT SUM OF DIGITS ENTERED BY USER
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter number:";
	cin>>a;
	int sum=0;
	while(a!=0){
		int ld=a%10;
	    a/=10;
		sum+=ld;
	}
    cout<<"The sum of these numbers are:"<<sum;	
}

*/

// PROGRAM TO PRINT PRODUCT OF DIGITS GIVEN BY USER
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter number:";
	cin>>a;
	int product=1;
	while(a!=0){
		int ld=a%10;
	    a/=10;
		product*=ld;
	}
    cout<<"The product of these numbers are:"<<product;	
}
*/

// PROGRAM TO PRINT REVERSE OF A ENTERED NUMBER
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter number:";
	cin>>a;
	int reverse=0;
	while(a!=0){
		int remainder=a%10;
		reverse=reverse*10+remainder;
		a=a/10;
	}
	cout<<"Reverse of number is:"<<reverse;
}
*/

// WAP TO PRINT FACTORIAL OF A NUMBER
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number:";
    cin>>a;
    int product=1;
    for(int i=1;i<=a;i++){
    	product*=i;
	}
	cout<<"factorial of this number is:"<<product;
}
*/

// PROGRAM TO PRINT FACTORIAL OF FIRST 'N' NUMBERS
/*
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter number:";
	cin>>a;
	cout<<"enter how much digit till you want to print factorial:";
	cin>>b;
	int factorial=1;
	for(int i=1;i<=b;i++){
		
		factorial*=i;
		
	}	
	cout<<factorial;
}		
*/

// PROGRAM TO PRINT ASCII VALUES FROM A TO Z
/*
#include<iostream>
using namespace std;
int main(){
	 char c='A';
	while(c<='Z'){
		cout<<"ascii values of "<< c <<  " is " << int(c)<<"\t"<<endl;
		c++;
	}
}	
*/	
	




































