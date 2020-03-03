#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char * &x,int y){
	x=new char[y];
	for(int i=0; i<y; i++){
		x[i]='A'+i;
	}

}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}

