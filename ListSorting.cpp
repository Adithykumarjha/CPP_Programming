// Sorting the list

#include<iostream>
#include<list>
using namespace std;

int main(){
	
	list<int>lst;
	int i;
	
	for(int i=9;i>=0;i--){
		lst.push_back(i);
	}
	
	cout<<"List before sorting:\n";
	list<int>::iterator p;
	p=lst.begin();
	
	while(p!=lst.end()){
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n\n";
	
	lst.sort();
	
	cout<<"List after sorting:\n";
	p=lst.begin();
	while(p!=lst.end()){
		cout<<*p<<" ";
		p++;
	}
	
	return 0;
}
