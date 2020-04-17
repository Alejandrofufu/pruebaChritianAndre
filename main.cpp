#include <iostream>

/*
Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande hecho del producto de dos números de 2 dígitos es 9009 = 91 × 99.
Encuentra el palíndromo más grande hecho del producto de dos números de 3 dígitos.
*/
bool primo(int num){
    for(int i=2;i<num;i++){
        if(!(num%i))
            return false;
    }
    return true;
}
int mayor(int num){
	if(num<5){
		num++;
	}
	else{
		num--;
	}
}

int main(){
	
	int a = 10, b = 5;
	a=a+b;	
    std::cout<<primo(91);
    std::cout<<true<<endl;
    std::cout<<"justo chupapingas gaaa\n";
    std::cout<<"justo clon 2.0\n";
//cambio de un commit
	std::cout<<a<<endl;
	a++;
	--a;
	std<<b+a<<endl;
	
	    
    return 0;
}
