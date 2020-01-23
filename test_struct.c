#include <stdio.h>

struct Produit{
	float prix;
	float cout;
	float tva;
};


int main (){
	struct Produit iphone;
	printf("Quel est le prix de votre produit ?\n");
	scanf("%d",&iphone.prix);
	
	
}