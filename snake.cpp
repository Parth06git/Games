#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

const int width = 50,height=25;

int x=10,y=20;

void board(){
	
	for(int i=0;i<height;i++){
		cout<<"\t\t\t#";
		for(int j=0;j<width-2;j++){
			if(i==0||i==height-1){
				cout<<"#";
			}
			else if(i==y&&j==x){
				cout<<"0";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"#"<<endl;
	}
}



int main(){
	
	while(true){
		board();
		x++;
		system("cls");
		//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
	}
	
	
	return 0;
}









