#include  <iostream>

using namespace  std;

main() {
	
	float tC, result;
	
	cout << "Informe a temperatura em Celsius: ";
	cin >> tC;
	
	result = (tC*1.8+32);
	
	cout << "Essa e a temperatura convertida em Fahrenheit: " << result << "";
}
