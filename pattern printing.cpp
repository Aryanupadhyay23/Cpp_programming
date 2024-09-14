                   // PATTERN PRINTING


// RECTANGLE
/*
#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    int n;
    cout << "Enter number of columns: ";
    cin >> n;
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;  // Move the newline inside the outer loop
    }
     
    return 0;
}
*/

// SQUARE
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		cout<<"*";
		}
	cout<<endl;
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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		cout<<i;
		}
	cout<<endl;
	}
}
*/

/* alphabet printing

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		cout<<(char)(j+64)<<" ";
		}
	cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"*****"<<endl;
	}
}
*/

// program to print * by using input from user square
/*
#include<iostream>
using namespace std;
int main(){
	int r , c ;
	cout<<"enter the value of rows and columns:";
	cin>>r;
	cin>>c;
	for(int i=1;i<=r;i++){
		cout<<endl;
		for(int j=1;j<=c;j++){
			cout<<"*"<<" ";
		}
	}
}
*/

/*
#include<iostream>
using namespace std;
	
	int main(){
		int n;
	    cout<<"enter the value of n:";
	    cin>>n;
		for(int i=1;i<=n;i++){
			cout<<endl;
			for(int j=1;j<=n;j++){
				cout<<"*";
			}
		}
}
*/

/*
#include<iostream>
using namespace std;
	
	int main(){
		int n;
	    cout<<"enter the value of n:";
	    cin>>n;
		for(int i=1;i<=n;i++){
			cout<<endl;
			for(int j=1;j<=n;j++){
				cout<<j;
			}
		}
}

*/

/*
#include<iostream>
using namespace std;
	
	int main(){
		int n;
	    cout<<"enter the value of n:";
	    cin>>n;
		for(int i=1;i<=n;i++){
			cout<<endl;
			for(int j=1;j<=n;j++){
				cout<<i;
			}
		}
}

*/

// PROGRAM TO PRINT ALPHABET
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			cout<<char(j+64)<<" ";
		}
	cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<char(i+64)<<" ";
		}
		cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n ;
	cout<<"enter value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<char(j+64)<<" ";
		}
	cout<<endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0){
				cout<<char(j+64);
			}
			else cout<<j;
		}
	cout<<endl;
    }
}
*/
/*
  // reverse triangle
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter value of n:";
	cin>>n;
	for (int i=n;i>=0;i--){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
	cout<<endl;
    }
}
*/
// reverse triangle
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter value of n:";
	cin>>n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<"*";
		}
	cout<<endl;
    }
}
*/

           // FLOYD TRIANGLE
//   floyd triangle
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	int a=1;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=i;j++){
			cout<<a;
			a++;
		}
		cout<<endl;
	}
}
*/

/*
floyds triangle
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter the valueof n:";
	cin>>n;
	int a =1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<a++<<" ";
		}
		cout<<endl;
	}
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<"1";
			}
			else cout<<"0";
		}
		cout<<endl;
	}
}
*/

     //PROGRAM TO PRINT STAR PLUS
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	int mid=n/2+1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==mid || j==mid){
			  cout<<"*";
			}
			else cout<<" ";
		}
	cout<<endl;
	}
}
*/










