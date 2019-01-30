#include <iostream>

using namespace std;

int main(){
	int Ar[ ] = { 6 , 3 , 8 , 10 , 4 , 6 , 7} ;
	int *Ptr = Ar , I ;
	cout<<++*Ptr++ << '@' ;
//	cout<<endl<<"----test----"<<*Ptr<<"----test----"<<endl;
	I = Ar[3] - Ar[2] ;
	cout<<++*(Ptr+I)<<'@'<<"\n" ;
//	cout<<endl<<"----test----"<<*Ptr<<"----test----"<<endl;
	cout<<++I + *Ptr++ << '@' ;
//	cout<<endl<<"----test----"<<*Ptr<<"----test----"<<endl;
	cout<< *Ptr++ <<'@'<<"\n";
//	cout<<endl<<"----test----"<<*Ptr<<"----test----"<<endl;
	for( ; I >=0 ; I -=2)
	cout<<Ar[I] << '@' ;
	
	return 0;
}	
