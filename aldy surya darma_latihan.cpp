#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	 int w , x , y, z ;
 		cout << "Masukan jumlah baris ";
 		cin >> z;
 	for(w=z;w>=0;w--){
  		for(x=w;x>=0;x--){
   			cout<<" ";
  		}
  	for(y=1;y<=z-w;y++){
   		cout<<"*";
  	}
  	for(y=1;y<z-w;y++){
   		cout<<"*";
  	}
  	cout<<endl;
    }
 	getch();
 	return 0;
}
