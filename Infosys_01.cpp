#include<iostream>
#include<vector>

using namespace std;

int func(int e,int n,vector<int>& arr){
	int excercise=0;
	int E=e;
	sort(arr.begin(),arr.end());
	while(E){
		if(n<0 && E!=e) return -1;
		if(E<2*arr[n-1]){
			E=E-2*arr[n-1];
			excercise=excercise+2;
			n--;
		}else if(E<arr[n-1]){
			E=E-arr[n-1];
			excercise++;
			n--;
		}else n--;
	}
}

int main(){
	int E=6;
	int n=2;
	vector<int>arr{1,2};
	cout<<"Tired :"<<func(E,n,arr)<<endl;
	return 0;
}