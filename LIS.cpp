#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int LIS(int arr[],int n){
	set<int> s;
	for(int i=0;i<n;i++){
		auto r=s.insert(arr[i]);
		set<int>::iterator it;
		if(r.second)
			it=r.first;
		if(++it!=s.end())
			s.erase(it);
	}
	// for(auto i=s.begin();i!=s.end();i++)
	// 	cout<<*i<<" ";
	// cout<<endl;
	return s.size();

}

int main()
{
	int arr[]={2,6,3,4,1,2,9,5,8};
	cout<<LIS(arr,9);
}