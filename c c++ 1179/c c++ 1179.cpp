#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class obiect_lista{
	public:
		char info;
		obiect_lista *urmator;
		obiect_lista *precedent;
		obiect_lista(){
			info = 0;
			urmator = NULL;
			precedent = NULL;
		}
		obiect_lista *redaurmator(){
			return urmator;
		}
		obiect_lista *redaprecedent(){
			return precedent;
		}
		void redainfo(char &c){
			c = info;
		}
		void modific(char c){
			info = c;
		}

		friend ostream &operator << (ostream &flux, obiect_lista o){
			flux << o.info << endl;
			return flux;
		}

		friend ostream &operator << (ostream &flux, obiect_lista *o){
			flux << o->info << endl;
			return flux;
		}
		friend istream &operator >> (istream &flux, obiect_lista &o){
			cout << "Introduceti informatia: " << endl;
			flux >> o.info;
			return flux;
		}
};

void main(){
	char *x = "c";
	obiect_lista lista;
	lista.modific(*x);
	system("pause");
	obiect_lista :: obiect_lista ::obiect_lista::obiect_lis
}
