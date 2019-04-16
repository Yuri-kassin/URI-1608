#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#include <vector>
#include<list>
#include<algorithm>

using namespace std;

int main(){
	int t,i,j,b,d,in,qi,k,pi,xi,bo,ni[100];
	vector<int>bolo;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>d;
		cin>>in;
		cin>>b;
		bolo.reserve(b);
		for(j=0;j<in;j++){
			cin>>ni[j];
		}
		for(j=0;j<b;j++){
			cin>>qi;
			bo=0;
			for(k=0;k<qi;k++){
				cin>>pi>>xi;
				bo+=ni[pi]*xi;
			}
			bolo.push_back(bo);
		}
		sort(bolo.begin(),bolo.end());
		cout<<d/bolo[0]<<endl;
		while(!bolo.empty())bolo.pop_back();
	}
   	system("pause");
	return 0;
}
