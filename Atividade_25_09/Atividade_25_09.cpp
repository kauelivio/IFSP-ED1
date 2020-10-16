#include <iostream>
using  namespace std;

struct No {
	int dado;
	struct No *prox;
};

struct Pilha {
	No *topo;
};

Pilha* init() {
	Pilha *p = new Pilha;
	p->topo = NULL;
	return p;
}

int isEmpty(Pilha *p) {
	return (p->topo == NULL);
}

void push(Pilha *p, int v) {
	No *no = new No;
	no->dado = v;
	no->prox = p->topo;
	p->topo = no;
}

int pop(Pilha *p) {
	int ret;
	No *no = p->topo;
	ret = no->dado;
	p->topo = no->prox;
	free(no);
	return ret;
}

void print(Pilha *p) {
	No *no;
	no = p->topo;
	while(no != NULL) {
		cout << no->dado << endl;
		no = no->prox;
	}
	cout << "------------------------" << endl;
}

int count(Pilha *p) {
	int qtde = 0;
	No *no;
	no = p->topo;
	while(no != NULL) {
        qtde++;   
		no = no->prox;
	}
	return qtde;
}

void freePilha(Pilha *p) {
	No *no = p->topo;
	while (no != NULL) {
		No *temp = no->prox;
		free(no);
		no = temp;
	}
	free(p);
}

int main(int argc, char** argv)
{
	Pilha *pilhaImpar;
	Pilha *pilhaPar;
	pilhaImpar=init();
	pilhaPar=init();
	No *no1 = new No;
	No *no2 = new No;
	
	int cont=0;
	int num;
	int ant;
	int cont2;
	
	cout<<"Digite 30 numeros inteiros"<<endl;
		
	while(cont<30){	
		ant=num;
		cout<<"Digite "<<(cont2=cont+1)<<"o numero: ";
		cin>>num;
		cout<<endl;
		if(cont>0){
			while(ant>=num)
			{
				cout<<"Digite um numero maior: ";
				cin>>num;
				cout<<endl;
			}			
		 }	
		 //push(pilhaInt,num);		 
		 if(num%2==0){
			 push(pilhaPar,num);
		 }
		 else{
			 push(pilhaImpar,num);
		 }	 
		
		cont++;
		
	}
	cout<<endl;
	
	cout << "Quantidade de nos - Impar: " << count(pilhaImpar) << endl;
	cout << "Quantidade de nos - Par: " << count(pilhaPar) << endl; 
				
	if(pilhaImpar->topo==NULL){
		
		while(pilhaPar->topo!=NULL)
		{
			cout<<pop(pilhaPar)<<endl;
		}
	}
	else if(pilhaPar->topo==NULL)
	{
		while(pilhaImpar->topo!=NULL)
		{
			cout<<pop(pilhaImpar)<<endl;
		}
	}
	else
	{				
	
		while(pilhaPar!=NULL || pilhaImpar!=NULL)
		{					
			no1=pilhaPar->topo;
			no2=pilhaImpar->topo;
				
			if(no1->dado > no2->dado){
							
				cout<<pop(pilhaPar)<<endl;
			}
			else
			{
				cout<<pop(pilhaImpar)<<endl;
			}
		}
	}		
			
	return 0;
}













