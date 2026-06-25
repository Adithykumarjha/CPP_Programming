#include<iostream>
#include<list>

using namespace std;

int main(){
	list<int>lst;
	int i;
	
	for(i=0;i<10;i++){
		lst.push_back(i);
	}
	
	cout<<"Size of the list is:"<<lst.size()<<endl;
	
	cout<<"Contains: ";
	list<int>::iterator p = lst.begin();
	while(p!=lst.end()){
		cout<<*p<<" ";
		p++;
	}
	
	cout<<"\n\n";
	
	// change the contents of the list
	
	p=lst.begin();
	while(p!=lst.end()){
		*p = *p+100;
		p++;
	}
	
	cout<<"Contents Modified : ";
	
	p=lst.begin();
	while(p!=lst.end()){
		cout<<*p<<" ";
		p++;
	}
	return 0;
}
