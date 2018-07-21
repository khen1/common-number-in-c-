#include<iostream>

using namespace std;

int main(){
	int box[3][3];
	int i,j=0,tmp=0,store[9];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		cout<<"array "<<i<<" ";
		cin>>box[i][j];
	   }
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			tmp=i+j;
			store[tmp]=box[i][j];
		}
	}
		for(int ii=0;ii<tmp;ii++){
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
					if(store[ii]==box[i][j])
					cout<<store[ii]<<" "<<ii<<" "<<endl;
					}
				}
		}
	return 0;
}

