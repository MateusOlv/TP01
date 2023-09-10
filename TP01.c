#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese, brazil");
	int abc, cba, xyz, zyx, a, b, c, x, y, z, troca;
	
	printf("Digite um número de três algarismos:\n");
	scanf("%i", &abc);
		
	if (abc < 100 || abc > 999){
		printf("Número inválido!\nSomente números de três algarismos são aceitos!\n");
		exit;
	}
	else{
		c = (abc % 10); 
		b = ((abc / 10) % 10);
		a = (abc / 100);
		
		if(a < c){
			troca = a;
			a = c;
			c = troca;
		}
		
		if(a - c < 2){
			printf("Programa finalizado!!\n");
			exit;
		}
		else{
			troca = c;
			c = a;
			a = troca;
			c = c * 100;
			b = b * 10;
	
			cba = c + b + a;
			xyz = abc + cba; 
	
			z = (xyz % 10) * 100;
			y = ((xyz / 10) % 10) * 10;
			x = (xyz / 100);
	
			zyx = z + y + x;
			printf("Resultado: %d", xyz + zyx);		
		}
	}
	return 0;
}
