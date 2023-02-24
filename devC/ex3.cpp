#include  <iostream>

using namespace  std;

main(){
	
	float p1,p2,faltas,result;
	
	cout << "Informe suas faltas: ";
	cin >> faltas;
	
	if(faltas <= 25){
		cout << "informe a primeira nota: ";
		cin >> p1;
	
		cout << "informe a segunda nota: ";
		cin >> p2;
		
		result = (p1+p2) / 2;
		
		if(result >=6){
			cout << "Voce passou com a nota: " << result << " Parabéns";
		}else {
			cout << "Nao foi dessa vez";
		}
	}else {
		cout << "Nao foi dessa vez";
	}
}
