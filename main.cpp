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
    std::cout<<primo(91);
    std::cout<<true<<endl;
    std::cout<<"justo chupapingas gaaa\n";
    
    return 0;
}
