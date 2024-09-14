                    // PATTERN PRINTING
   
   
/*        
#include<iostream>
using namespace std;
int main(){
	  int n;
	  cout<<"enter the value of n:";
	  cin>>n;
	  int m;
	  cout<<"enter the value of m:";
	  cin>>m;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=m;j++){
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
	  cout<<"enter number of rows:";
	  cin>>n;
	  int m;
	  cout<<"enter number of columns:";
	  cin>>m;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=m;j++){
	  		cout<<j;
	  		
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
	  cout<<"enter number of rows:";
	  cin>>n;
	  int m;
	  cout<<"enter number of columns:";
	  cin>>m;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=i;j++){
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
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  int m;
	  cout<<"enter number of columns:";
	  cin>>m;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=i;j++){
	  		cout<<j;
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
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=i;j++){
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
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  int m;
	  cout<<"enter number of columns:";
	  cin>>m;
	  for(int i=1;i<=n;i++){
	  	for(int j=1;j<=i;j++){
	  		cout<<j;
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
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  for(int i=1;i<=n;i++){
	  	for (int j=n;j>=i;j--){
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
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  int m;
	  cout<<"enter number of columns:";
	  cin>>m;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=i;j++){
	  		cout<<j;
	  		}
	  	cout<<endl;
	  }
}
*/

// number of triangle
/*
#include<iostream>
using namespace std;
int main(){
	  int n;
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=i;j++){
	  		cout<<j;
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
	  cout<<"enter number of rows:"; 
	  cin>>n;
	  
	  for(int i=1;i<=n;i++){
	  	int a=1;
	  	for (int j=1;j<=i;j++){
	  		cout<<a;
	  		a=a+2;
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
	  	for (int j=1;j<=n;j++){
	  		cout<<char(j+64)<<" ";
	  	}
	  	cout<<endl;
	  	break;
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
	  	for (int j=1;j<=i;j++){
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
	  cout<<"enter n:"; 
	  cin>>n;
	  for(int i=1;i<=n;i++){
	  	for (int j=1;j<=i;j++){
	  		if(i%2==0){
	  			cout<< char(j+64) <<" ";
	  			cout<<" ";
			  }
	  		else cout<<j<<"  ";
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
	  	for (int j=1;j<=n;j++){
	  		if(j==(n/2+1) || i==(n/2+1)){
	  			cout<<"*";
			  }
			else cout<<" ";
	    }
		cout<<endl;
	}
}

*/

/*
#include<iostream>
using namespace std;
int main(){
	  int r,c;
	  cout<<"enter rows:"; 
	  cin>>r;
	  cout<<"enter columns:";
	  cin>>c;
	  for(int i=1;i<=r;i++){
	  	for (int j=1;j<=c;j++){
	  		if(i==1 || i==r || j==1 || j==c){
	  		  cout<<"*";	
			  }
	  		else cout<<" ";
	   }
	   cout<<endl;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	  int r;
	  cout<<"enter r:"; 
	  cin>>r;
	  for(int i=1;i<=r;i++){
	  	for (int j=1;j<=r;j++){
	  		if(i==j || i+j==r+1){
	  		  cout<<"*";	
			  }
	  		else cout<<" ";
	   }
	   cout<<endl;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	  int r;
	  cout<<"enter r:"; 
	  cin>>r;
	  int a=1;
	  for(int i=1;i<=r;i++){
	  	
	  	for (int j=1;j<=i;j++){
	  		cout<<a;
	  		a++;
	   }
	   
	   cout<<endl;
	   
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	  int r;
	  cout<<"enter r:"; 
	  cin>>r;
	  int a=1;
	  for(int i=1;i<=r;i++){
	  	
	  	for (int j=1;j<=i;j++){
	  		cout<<a;
	  		a=a+2;
	   }
	   
	   cout<<endl;
	   
    }
}
*/
// 0 and 1 triangle
/*

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i + j) % 2 ==0){
				cout<<"1";
			}
			else cout<<"0";
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
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
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
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=n;k++){
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
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<< char(k + 64);
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
	int nst=1;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<" ";
		}
		for(int j=1;j<=nst;j++){
			cout<<("*");
		}
		nst=nst+2;
		cout<<"\n";
	}
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
    	for(int k=1;k<=n-i;k++){
    		cout<<" ";
		}
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
    	for(int k=1;k<=n-i;k++){
    		cout<<" ";
		}
        char ch = 'A'; // Starting character
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
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
		for(int h=1;h<=n-i;h++){
			cout<<" ";
	    }
		for(int j=1;j<=i;j++){
			cout<<j;
		}
	    for(int k=1;k<=i-1;k++){
	    	cout<<k;
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
		for(int h=1;h<=n-i;h++){
			cout<<" ";
	    }
		for(int j=1;j<=i;j++){
			cout<<char(j+64);
		}
	    for(int k=1;k<=i-1;k++){
	    	cout<<char(k+64);
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
	int nsp=n/2;
	int nst=1;
	int ml=n/2+1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nsp;j++){
			cout<<" ";
		}
		for(int k=1;k<=nst;k++){
			cout<<"*";
		} 
		if(i<ml){
			nsp--;
			nst+=2;
		}
		else{
			nsp++;
			nst-=2;
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
	int nst=n;
	int nsp=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nsp;j++){
			cout<<" ";
		}
		for(int k=1;k<=nst;k++){
			cout<<"*";
		}
		nsp++;
		nst--;
		cout<<"\n";
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
	int nst=n;
	int nsp=1;
	for(int i=1;i<=2*n+1;i++){
		cout<<"*";
	}
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nst;j++){
			cout<<"*";
		}
		for(int k=1;k<=nsp;k++){
			cout<<" ";
		}
		for(int l=1;l<=nst;l++){
			cout<<"*";
		}
		
		nst--;
		nsp+=2;
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
	int nst=n;
	int nsp=1;
	for(int i=1;i<=2*n+1;i++){
		cout<<char(i+64);
	}
	cout<<"\n";
	for(int i=1;i<=n;i++){
		int a=1;
		for(int j=1;j<=nst;j++){
			cout<<char(a+64);
			a++;
		}
		for(int k=1;k<=nsp;k++){
			cout<<" ";
			a++;
		}
		for(int l=1;l<=nst;l++){
			cout<<char(a+64);
			a++;
		}
		
		nst--;
		nsp+=2;
		cout<<endl;
	}
}
*/