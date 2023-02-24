#include  <iostream>

using namespace  std;

main(){
	
	string letra;
	
	cout << "Informe uma letra:";
	cin >> letra;
	
	if( letra =="a" or letra=="e" or letra=="i" or letra=="o" or letra=="u"){

		cout <<"E uma vogal";
	}else {
		cout <<"É uma consoante";
	}
}
