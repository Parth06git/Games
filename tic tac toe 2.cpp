#include<bits/stdc++.h>

using namespace std;

string space[5][5] = {{"01","02","03","04","05"},{"06","07","08","09","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"}};
int row;
int column;
bool h = false;
char token='X';
string n1,n2;


//Making board
void f1(){

cout<<"\t\t     |     |     |     |     "<<endl;
cout<<"\t\t "<<space[0][0]<<"  |  "<<space[0][1]<<" |  "<<space[0][2]<<" |  "<<space[0][3]<<" |  "<<space[0][4]<<endl;
cout<<"\t\t_____|_____|_____|_____|____"<<endl;
cout<<"\t\t     |     |     |     |     "<<endl;
cout<<"\t\t "<<space[1][0]<<"  |  "<<space[1][1]<<" |  "<<space[1][2]<<" |  "<<space[1][3]<<" |  "<<space[1][4]<<endl;
cout<<"\t\t_____|_____|_____|_____|____"<<endl;
cout<<"\t\t     |     |     |     |     "<<endl;
cout<<"\t\t "<<space[2][0]<<"  |  "<<space[2][1]<<" |  "<<space[2][2]<<" |  "<<space[2][3]<<" |  "<<space[2][4]<<endl;
cout<<"\t\t_____|_____|_____|_____|____"<<endl;
cout<<"\t\t     |     |     |     |     "<<endl;
cout<<"\t\t "<<space[3][0]<<"  |  "<<space[3][1]<<" |  "<<space[3][2]<<" |  "<<space[3][3]<<" |  "<<space[3][4]<<endl;
cout<<"\t\t_____|_____|_____|_____|____"<<endl;
cout<<"\t\t     |     |     |     |     "<<endl;
cout<<"\t\t "<<space[4][0]<<"  |  "<<space[4][1]<<" |  "<<space[4][2]<<" |  "<<space[4][3]<<" |  "<<space[4][4]<<endl;
cout<<"\t\t     |     |     |     |     "<<endl;
	
}

//taking input and making move
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
		row=0;
		column=3;
	}
	if(digit==5){
		row=0;
		column=4;
	}
	if(digit==6){
		row=1;
		column=0;
	}
	if(digit==7){
		row=1;
		column=1;
	}
	if(digit==8){
		row=1;
		column=2;
	}
	if(digit==9){
		row=1;
		column=3;
	}
	if(digit==10){
		row=1;
		column=4;
	}
	if(digit==11){
		row=2;
		column=0;
	}
	if(digit==12){
		row=2;
		column=1;
	}
	if(digit==13){
		row=2;
		column=2;
	}
	if(digit==14){
		row=2;
		column=3;
	}
	if(digit==15){
		row=2;
		column=4;
	}
	if(digit==16){
		row=3;
		column=0;
	}
	if(digit==17){
		row=3;
		column=1;
	}
	if(digit==18){
		row=3;
		column=2;
	}
	if(digit==19){
		row=3;
		column=3;
	}
	if(digit==20){
		row=3;
		column=4;
	}
	if(digit==21){
		row=4;
		column=0;
	}
	if(digit==22){
		row=4;
		column=1;
	}
	if(digit==23){
		row=4;
		column=2;
	}
	if(digit==24){
		row=4;
		column=3;
	}
	if(digit==25){
		row=4;
		column=4;
	}
	else if(digit<1 || digit>25){
		cout<<"Invalid !!"<<endl;
	}
	 
	if(token=='X' && space[row][column] !=" X" && space[row][column] !=" O"){
		space[row][column]=" X";
		token='O';
	}
	
	else if(token=='O' && space[row][column] !=" X" && space[row][column] !=" O"){
		space[row][column]=" O";
		token='X';
	}
	
	else{
		cout<<"There is no empty space"<<endl;
		f2();
	}	
}


//Check for win 
bool f3(){
	
	bool t=false;
	
	for(int i=0;i<5;i++){
		if(space[i][0]==space[i][1] && space[i][0]==space[i][2] && space[i][0]==space[i][3] && space[i][0]==space[i][4] ){
			return true;	
		}
		else if(space[0][0]==space[1][1] && space[1][1]==space[2][2] && space[2][2]==space[3][3] && space[3][3]==space[4][4] ){
			return true;
		}
		if(space[0][i]==space[1][i] && space[0][i]==space[2][i] && space[0][i]==space[3][i] && space[0][i]==space[4][0] ){
			return true;
		}
		else if(space[0][4]==space[1][3] && space[1][3]==space[2][2] && space[2][2]==space[3][1] && space[3][1]==space[4][0]){
			return true;
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(space[i][j]!=" X" && space[i][j]!=" O"){
				return false;
			}
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(space[i][j]==" X" || space[i][j]==" O"){
				t=true;
			}
			else{
				t=false;
			}
		}
	}
	
	if(t){
		h=true;
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
	}
	
	if(f3()){
		f1();
	}
	
		
	if(token=='O' && h==false)
		cout<<n1<<" wins !! "<<endl;
	}
	else if(token=='X' && h==false){
		cout<<n2<<" wins !! "<<endl;
	}
	else{
		cout<<"The game is draw"<<endl;
	}
}
