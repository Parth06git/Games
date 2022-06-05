
//                                 TIC TAC TOE GAME CODE     

#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
bool tie=false;
char token='X';
string n1,n2;


void f1(){


	cout<<"    |    |    "<<endl;
	cout<<" "<<space[0][0]<<"  | "<<space[0][1]<<"  |  "<<space[0][2]<<endl;
	cout<<"____|____|____"<<endl;
	cout<<"    |    |    "<<endl;
	cout<<" "<<space[1][0]<<"  |  "<<space[1][1]<<" |  "<<space[1][2]<<endl;
	cout<<"____|____|____"<<endl;
	cout<<"    |    |    "<<endl;
	cout<<" "<<space[2][0]<<"  |  "<<space[2][1]<<" |  "<<space[2][2]<<endl;
	cout<<"    |    |    "<<endl;
	
	
}

void f2(){
	
	int digit;
	if(token=='X'){
		cout<<n1<<" please enter position";
		cin>>digit;
	}
	if(token=='O'){
		cout<<n2<<" please enter position";
		cin>>digit;
	}
	
	if(digit==1){
		row=0;
		column=0;
	}
	if(digit==2){
		row=0;
		column=1;
	}
	if(digit==3){
		row=0;
		column=2;
	}
	if(digit==4){
		row=1;
		column=0;
	}
	if(digit==5){
		row=1;
		column=1;
	}
	if(digit==6){
		row=1;
		column=2;
	}
	if(digit==7){
		row=2;
		column=0;
	}
	if(digit==8){
		row=2;
		column=1;
	}
	if(digit==9){
		row=2;
		column=2;
	}
	else if(digit<1 || digit>9){
		cout<<"Invalid !!"<<endl;
	}
	
	if(token=='X' && space[row][column] !='X' && space[row][column] !='O'){
		space[row][column]='X';
		token='O';
	}
	
	else if(token=='O' && space[row][column] !='X' && space[row][column] !='O'){
		space[row][column]='O';
		token='X';
	}
	
	else{
		cout<<"There is no empty space"<<endl;
		f2();
	}
	
		
}

bool f3(){
	
	bool t=false;
	
	for(int i=0;i<3;i++){
		if(space[i][0]==space[i][1] && space[i][0]==space[i][2] ){
			return true;	
		}
		else if(space[0][0]==space[1][1] && space[1][1]==space[2][2]  ){
			return true;
		}
		if(space[0][i]==space[1][i] && space[0][i]==space[2][i] ){
			return true;
		}
		else if(space[0][2]==space[1][1] && space[1][1]==space[2][0]){
			return true;
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(space[i][j]!='X' && space[i][j]!='O'){
				return false;
			}
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(space[i][j]=='X' || space[i][j]=='O'){
				t=true;
			}
			else{
				t=false;
			}
		}
	}
	
	if(t){
		tie=true;
		return true;
	}
	
	return false;
}

int main(){
	
	cout<<"Enter the name of 1st player: "<<endl;
	getline(cin,n1);
	cout<<"Enter the name of 2st player: "<<endl;
	getline(cin,n2);
	while(!f3()){
		f1();
		f2();
		f3();
		system("cls");
		//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
	}
	
	if(f3()){
		f1();
	}
	
	if(token=='O' && tie==false){
		cout<<n1<<" wins !! "<<endl;
	}
	else if(token=='X' && tie==false){
		cout<<n2<<" wins !! "<<endl;
	}
	else{
		cout<<"The game is draw"<<endl;
	}
	
}




