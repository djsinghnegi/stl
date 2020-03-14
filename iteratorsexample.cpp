#include<iostream>
#include<list>
using namespace std;

template<class forwardIterator, class T>

forwardIterator search( forwardIterator start, forwardIterator end, T key){
	while(start!=end){
		if(*start == key)
			return start;
		else
			start++;
	}

	return end;
}

int main()
{
	list<int> l;
	l.push_back(1);
	l.push_back(5);
	l.push_back(4);
	l.push_back(3);
	l.push_back(8);
	l.push_back(0);
	int key;
	cout<<"enter search key : ";
	cin>>key;

	auto it = search(l.begin(), l.end(), key);
	if(it==l.end()){
		cout<<"not found"<<endl;
	}
	else
		cout<<*it<<endl;

	return 0;
}

