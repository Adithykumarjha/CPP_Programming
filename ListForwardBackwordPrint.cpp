#include<iostream>
#include<list>
using namespace std;

int main(){
	
	list<int>lst;
	int i;
	
	for(int i=0;i<10;i++){
		lst.push_back(i);
	}
	
	// List printed Forward
	
	cout<<"List printed Forward: \n";
	
	list<int>::iterator p = lst.begin();
	
	while(p!=lst.end()){
		cout<<*p<<" ";
		p++;
	}
	
	cout<<"\n\n";
	
	cout<<"List printed backward: \n";
	p=lst.end();
	while(p!=lst.begin()){
		p--;
		cout<<*p<<" ";
		
	}
	
	return 0;
	
	
}
