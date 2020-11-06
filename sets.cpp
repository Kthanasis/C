#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main(){
	//set<int> this_set; //no double values, ordered
	//multiset<int> this_set;  //double values, ordered
	//unordered_set<int> this_set;  //no double values, unordered
	unordered_multiset<int> this_set;  //double values, unordered
	int temp;
	
	cout<<"Inserting...\n";
	while(temp>=0){
		cout<<"Enter number: ";
		cin>>temp;
		if(temp>=0)
			this_set.insert(temp);
	}
	
	cout<<"{  ";
	for(auto it = this_set.begin(); it!=this_set.end(); it++)
		cout<<*it<<"  ";
	cout<<"}\n";
	
	temp=0;
	cout<<"Removing...\n";
	while(temp>=0){
		cout<<"Enter number: ";
		cin>>temp;
		if(temp>=0)
			this_set.erase(temp);
	}
	cout<<"{  ";
	for(auto it = this_set.begin(); it!=this_set.end(); it++)
		cout<<*it<<"  ";
	cout<<"}\n";
	
	return 0;
}
