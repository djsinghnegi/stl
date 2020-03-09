#include<iostream>
using namespace std;

template<class T> // or template<typename T>

int search(T arr[], int n, T k){
	for(int i = 0;i<n;i++){
		if(arr[i]==k){
			return i;
		}
	}
	return -1;
}

int main(){
	// int a[] = {1,2,30,29,154,16,7,80,69};
	// int n = sizeof(a)/sizeof(int);
	// int key;
	// cout<<"enter the key : ";
	// cin>>key;
	// cout<<search(a,n,key)<<endl;

	// float a[] = {1.6,2.3,29.1,16.7,8.0,6.9};
	// int n = sizeof(a)/sizeof(float);
	// float key;
	// cout<<"enter the key : ";
	// cin>>key;
	// cout<<search(a,n,key)<<endl;

	char a[] = {'d','h','a','n','a','n','j','a','y','n','e','g','i'};
	int n = sizeof(a)/sizeof(char);
	char key;
	cout<<"enter the key : ";
	cin>>key;
	cout<<search(a,n,key)<<endl;


}