
//                                       CHESS

#include<bits/stdc++.h>
using namespace std;

char space[8][8]={
	{'r','k','b','q','k','b','k','r'},
	{'p','p','p','p','p','p','p','p'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'P','P','P','P','P','P','P','P'},
	{'R','K','B','Q','K','B','K','R'}
};

int token = 1;
int r1,r2,c1,c2;
string n1,n2;

void board(){
	cout<<"\t\t\t\t\t  0   1   2   3   4   5   6   7  "<<endl;
	cout<<"\t\t\t\t\t _______________________________ "<<endl;
	for(int i=0;i<8;i++){
		
		cout<<"\t\t\t\t\t|   |   |   |   |   |   |   |   |"<<endl;
		cout<<"\t\t\t\t      "<<i<<" | "<<space[i][0]<<" | "<<space[i][1]<<" | ";
		cout<<space[i][2]<<" | "<<space[i][3]<<" | "<<space[i][4]<<" | "<<space[i][5];
		cout<<" | "<<space[i][6]<<" | "<<space[i][7]<<" | "<<endl;
		cout<<"\t\t\t\t\t|___|___|___|___|___|___|___|___|"<<endl;
	}
	
}


void move(){
	
	if(token == 1){
		cout<<n1<<" please enter the start position "<<endl;
		cin>>r1;
		cin>>c1;
		cout<<n1<<" please enter the final position "<<endl;
		cin>>r2;
		cin>>c2;
	}
	
	if(token == 0){
		cout<<n2<<" please enter the start position "<<endl;
		cin>>r1;
		cin>>c1;
		cout<<n2<<" please enter the final position "<<endl;
		cin>>r2;
		cin>>c2;
	}
	
	int dr=abs(r1-r2);
	int dc=abs(c1-c2);
 	
 	
 	
	if(token=1 && space[r1][c1]=='P'){
		if(r1==1 && 0<dr<=2 && dc==0 || r1==6 && 0<dr<=2 && dc==0){
			if(space[r2][c2]==' ' ){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
		else if(dr==1 && dc==0){
			if(space[r2][c2]==' ' ){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
		else if('A'<=space[r1+1][c1+1]<='Z' && dr==dc && dr==1){
			if(space[r2][c2]==' ' ){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
	}
	else if(token=0 && space[r1][c1]=='p'){
		if(r1==1 && 0<dr<=2 && dc==0 || r1==6 && 0<dr<=2 && dc==0){
			if(space[r2][c2]==' ' ){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
		else if(dr==1 && dc==0){
			if(space[r2][c2]==' '){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
		else if('a'<=space[r1+1][c1+1]<='z' && dr==dc && dr==1){
			if(space[r2][c2]==' ' ){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
	}
	else{
		cout<<"Invalid move !!"<<endl;
		move();
	}
	
	
	
	if(token=1 && space[r1][c1]=='R'){
		if(dr==0 || dc==0){
			if(space[r2][c2]==' ' || 'a'<=space[r2][c2]<='z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
	}
	else if(token=0 && space[r1][c1]=='r'){
		if(dr==0 || dc==0){
			if(space[r2][c2]==' ' || 'A'<=space[r2][c2]<='Z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
	}
	else{
		cout<<"Invalid move !!"<<endl;
		move();
	}
	
	
	
	if(token=1 && space[r1][c1]=='K'){
		if(dr==2 && dc==1 || dr==1 && dc==2){
			if(space[r2][c2]==' ' || 'a'<=space[r2][c2]<='z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
	}
	else if(token=0 && space[r1][c1]=='k'){
		if(dr==2 && dc==1 || dr==1 && dc==2){
			if(space[r2][c2]==' ' || 'A'<=space[r2][c2]<='Z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
	}
	else{
		cout<<"Invalid move !!"<<endl;
		move();
	}
	
	
	
	if(token=1 && space[r1][c1]=='B'){
		if(dc==dr && dr!=0){
			if(space[r2][c2]==' ' || 'a'<=space[r2][c2]<='z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
	}
	else if(token=0 && space[r1][c1]=='b'){
		if(dc==dr && dr!=0){
			if(space[r2][c2]==' ' || 'A'<=space[r2][c2]<='Z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
	}
	else{
		cout<<"Invalid move !!"<<endl;
		token=1;
		move();
	}
	
	
	
	if(token=1 && space[r1][c1]=='Q'){
		if( dc==1 && dr==0 || dr==1 && dc==0 || dc==dr && dr!=0){
			if(space[r2][c2]==' ' || 'a'<=space[r2][c2]<='z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
	}
	else if(token=0 && space[r1][c1]=='q'){
		if( dc==1 && dr==0 || dr==1 && dc==0 || dc==dr && dr!=0){
			if(space[r2][c2]==' ' || 'A'<=space[r2][c2]<='Z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
	}
	else{
		cout<<"Invalid move !!"<<endl;
		move();
	}
	
	
	
	if(token=1 && space[r1][c1]=='K'){
		if(dr==1 || dc==1 || dr==dc && dr==1){
			if(space[r2][c2]==' ' || 'a'<=space[r2][c2]<='z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=0;
			}
		}
	}
	else if(token=0 && space[r1][c1]=='k'){
		if(dr==1 || dc==1 || dr==dc && dr==1){
			if(space[r2][c2]==' ' || 'A'<=space[r2][c2]<='Z'){
				space[r2][c2]=space[r1][c1];
				space[r1][c1]=' ';
				token=1;
			}
		}
	}
	else{
		cout<<"Invalid move !!"<<endl;
		move();
	}
	
}

int main(){

	cout<<"Name of first player:"<<endl;
	cin>>n1;
	cout<<"Name of second player:"<<endl;
	cin>>n2;
	
	board();
	move();
	board();
	
}
