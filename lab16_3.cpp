#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int a){
	vector<int> out(a);
	for(int i=0; i<a; i++){
		out[i]=rand()%10;
	}
	return out;
}

void showVector(vector<int> b){
	cout<<"[ ";
	for(int i=0; i<b.size(); i++){
		cout<<b[i]<<" ";
	}
	cout<<"]";
}

int dotProduct(vector<int> c,vector<int> d){
	int sum;
	for(int i=0; i<c.size(); i++){
		sum+=c[i]*d[i];
	}
	return sum;
}