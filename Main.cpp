#include<iostream>
#include<windows.h>
#include<cstdio>

using namespace std;

#define n 4

class books{
	
public:
	string title;
	string author;
	int isbn;
	bool status;
	
	
	
	
};



int main(){
	

	books b1[n];


	b1[0].title="abc";
	b1[0].author="pqr";
	b1[0].isbn=123;
	b1[0].status=1;

	b1[1].title="xyz";
	b1[1].author="dfg";
	b1[1].isbn=456;
	b1[1].status=1;

	
	b1[2].title="richard";
	b1[2].author="Rich Dads";
	b1[2].isbn=789;
    b1[2].status=0;
	
	b1[3].title="zuhair";
	b1[3].author="Riches";
	b1[3].isbn=910;
    b1[3].status=0;
	
	int ch=-1,num,index,flag=0;
	
	while(ch != 0){
	
		cout<<"Press 1 to View all available books\nPress 2 to Search a Book\n";
		cout<<"Press 3 to Return a Book\nPress 0 to Exit\n";
		cin>>ch;
		system("cls");
		if (ch == 1){
			for(int i=0;i<n;i++){
				if(b1[i].status == 1){
				cout<<"Title = "<<b1[i].title<<endl;
				cout<<"Author = "<<b1[i].author<<endl;
				cout<<"ISBN = "<<b1[i].isbn<<endl;
				cout<<endl<<endl;
			   }
			}
			cout<<"Press 1 to Continue = ";
			cin>>num;
			system("cls");
		}else if(ch == 2){
			
			int ch2=-1;
			int no=0;
			string t=" ",a=" ";
				
			while(ch2 != 0){
				
				no=0;
				t=" ";
				a=" ";
				flag=0;
				
				cout<<"Press 1 to Search by Title\nPress 2 to Search by Author\nPress 3 to Search by ISBN\n";
				cout<<"Press 0 to Go Back\n";
				cin>>ch2;
				
				if(ch2 == 1){
					cout<<"Enter Title Name = ";
					cin>>t;	
				}else if(ch2 == 2){
					cout<<"Enter Author Name = ";
					cin>>a;
				}else if(ch2 == 3){
					cout<<"Enter ISBN = ";
					cin>>no;
				}else if(ch2 == 0){
					system("cls");
					break;
				}else{
					cout<<"Invalid Option!\n"<<endl;
				}
				
				cout<<endl<<endl;
					for(int i=0;i<n;i++){
						if(t == b1[i].title || a == b1[i].author || no == b1[i].isbn){
							flag=1;
							index=i;
							break;
						}
					}
					
					if(flag == 1){
						cout<<"Book Found!"<<endl<<endl;
						cout<<"Title = "<<b1[index].title<<endl;
				        cout<<"Author = "<<b1[index].author<<endl;
						cout<<"ISBN = "<<b1[index].isbn<<endl;
						cout<<endl<<endl;
					}else{
						cout<<"Book Not Found!\n\n";
					}
				cout<<"Press 1 to Continue = ";
				cin>>num;
				system("cls");
		    }
			
		}else if(ch == 3){
			string ti;
			int flag2=0,days,total=0;
			cout<<"Enter Book title = ";
			cin>>ti;
			cout<<"Enter Number of Extra days you Borrowed! (Enter 0 if you haev returned in time) = ";
			cin>>days;
			for(int i=0;i<n;i++){
				if(ti == b1[i].title){
					flag2=1;
				}	
			}
			
			if(flag2 == 1){
				total=days*10;
				cout<<"You have a Fine of "<<total<<" Rs"<<endl<<endl;
				cout<<"Returned!"<<endl<<endl;
			}else{
				cout<<"Book Not Found!\n";
			}
			cout<<"Press 1 to Continue = ";
			cin>>num;
			system("cls");
		}else if(ch == 0){
			break;
		}else{
			cout<<"Invalid Option!\n";
		}
		
	
   }
	
}
