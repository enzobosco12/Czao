#include  <iostream>

using namespace  std;

main(){
	float p1,p2;
	
	cout << "informe um numero: ";
	cin >> p1;
	
	cout << "informe outro numero: ";
	cin >> p2;
	
	if(p1>p2){
		cout << "Numero maior:" << p1 << "Numero menor:" <<p2;
	}else {
		cout << "Numero maior:" << p2 << "Numero menor:" <<p1;
	}
	
}
