#include <iostream>

using namespace std;
struct list{
	int x;
	list *next;
};

class linked{
	private:
		list *head;
		int top;
	public:
		linked();
		void add(int val);
		void show();
		void pop();
};

linked::linked(){
	head = NULL;
	top=-1;
}

void linked::add(int val){
	if(top == -1){
	top=top+1;
	list *bantu = new list;
	bantu->x = val;
	bantu->next = head;
	head = bantu;
	cout<<"data ditambahkan"<<endl;
}

else{
	top=top+1;
	list *baru = new list;
	list *tail = new list;
    baru->x = val;
    baru->next  = NULL;
    tail = head;
    int x=0;
    
while(tail->next != NULL){
    	tail =tail->next;
    	x++;
}
	tail->next = baru;
	cout<<"data ditambahkan"<<endl;
	}
}

void linked::pop(){
	if(top==-1){
		cout<<"data kosong"<<endl;
	}
	
else{
		top=top-1;
		cout<<"data dihapus"<<endl;
	}
}

void linked::show(){
	list *bantu = new list;
	bantu = head;
	for(int x=0; x<=top;x++){
	cout<<bantu->x<<"=>";
	bantu=bantu->next;
	}
}

int main(){
	linked test;
	test.add(1);
	test.add(3);
	test.add(5);
	test.add(7);
	test.pop();
    test.show();
	return(1);
}