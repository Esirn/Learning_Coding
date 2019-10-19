#include<iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include <string.h>
using namespace std;
#define ROWS_NUMBER_1	1
#define COLUMN_NUMBER_1	8
#define ROWS_NUMBER_2	8
#define COLUMN_NUMBER_2	8

int a[ROWS_NUMBER_1][COLUMN_NUMBER_1];
int b[ROWS_NUMBER_2][COLUMN_NUMBER_2];
int c[ROWS_NUMBER_1][COLUMN_NUMBER_2];

void txt2rom(string fileName, int* A, int rows_number, int column_number){
	ifstream ifile(fileName);
	string line;
	int *p=A;
//	for(int i=0;ifile.good() && i<rows_number;i++){
//		getline(ifile,line);
		stringstream buffer;
		buffer << ifile.rdbuf();
		line=string(buffer.str());
		
		istringstream iss(line);
		for(int j=0;j<rows_number*column_number;j++,p++){
			iss >> *p;
		}
//	}
}

int main(){
	txt2rom("data-a.txt", &a[0][0], ROWS_NUMBER_1, COLUMN_NUMBER_1);
	txt2rom("data-b.txt", &b[0][0], ROWS_NUMBER_2, COLUMN_NUMBER_2);
	
	for(int i=0;i<ROWS_NUMBER_1;i++){//Êä³öa¡¢b 
		cout<<"a-line"<<i+1<<":\t"; 
		for(int j=0;j<COLUMN_NUMBER_1;j++){
			cout<<a[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<ROWS_NUMBER_2;i++){
		cout<<"b-line"<<i+1<<":\t"; 
		for(int j=0;j<COLUMN_NUMBER_2;j++){
			cout<<b[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<ROWS_NUMBER_1;i++){//ÔËËãc 
		for(int j=0;j<COLUMN_NUMBER_2;j++){
			c[i][j]=(a[i][0]*b[0][j]);
			cout<<"c("<<i+1<<","<<j+1<<")="<<c[i][j];
			for(int k=1;k<COLUMN_NUMBER_1;k++){
				c[i][j]+=(a[i][k]*b[k][j]);
				if(!((a[i][k]*b[k][j])<0)){
					cout<<"+";
				}
				cout<<a[i][k]*b[k][j];
			}
			cout<<"="<<c[i][j]<<endl;
		}
	}
	cout<<endl;
	
	for(int i=0;i<ROWS_NUMBER_1;i++){//Êä³öc 
		cout<<"c-line"<<i+1<<":\t"; 
		for(int j=0;j<COLUMN_NUMBER_2;j++){
			cout<<c[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;	
}
