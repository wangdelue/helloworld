#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;
typedef struct{
	char id[15];
	char name[50];
	double price;
}Book;
typedef struct {
	Book *elem;
	int length;
}List;

int CreatList(List &L){
	L.elem =new Book[10000];
	if(!L.elem)		exit(0); 
	L.length =0;
	return 1;
}
	

	
	 
void TravesList (List L){
		for(int j=0;j<L.length-1;j++){
		for(int i=0;i<L.length-2-j;i++){
			if(L.elem[i].price<L.elem[i+1].price){
			 swap(L.elem[i],L.elem[i+1]);
					
			}			
		}		
	}

	for(int i=0;i<L.length-1;i++){
	
		cout<<L.elem[i].id<<" "<<L.elem[i].name<<" "<<setiosflags(ios::fixed)<<setprecision(2)
		<<L.elem[i].price;
		if(i==L.length-2)
			break;
		else
		 cout<<endl;
 	
	}
	
}
int main(){
	int i=0;
	List L;
	CreatList(L);
	while (1)  
			{		
				cin >> L.elem[i].id; 				  
				cin >> L.elem[i].name;
				cin >> L.elem[i].price;
				L.length++;
				
				if(strcmp(L.elem[i].id,"0")==0&&strcmp(L.elem[i].name,"0")==0&&fabs(L.elem[i].price-0)<1e-6)
					break;
					i++;
			}	
			
	TravesList(L);
	
	
}
