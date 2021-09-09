#include <iostream>
using namespace std;
int somme(int x,int y) {
	int res = x + y;
	return res;
}
int soustraction(int x2, int y2) {
	int res2 = x2 - y2;
	return res2;
}
int multi(int x3, int y3) {
	int res3 = x3 * y3;
	return res3;
}
float div(float x4, float y4) {
	float res4 = x4 / y4;
	return res4;
}
void affichage(int ress,int ressou,int ressmu,float resdiv) {
	cout << "l'addition est :" << ress << endl;
	cout << "la soustraction est :" << ressou << endl;
	cout << "la multiplication fait: " << ressmu << endl;
	cout << "la division est: " << resdiv << endl;
}
void main() {
	int nb1;
	int nb2;
	int resultat;
	int resultat2;
	int resultat3;
	float resultat4;
	cout << "choisir nombre: ";
	cin >> nb1;
	cout << "choisir nombre: ";
	cin >> nb2;
	resultat = somme(nb1, nb2);
	resultat2 = soustraction(nb1, nb2);
	resultat3 = multi(nb1,nb2);
	resultat4 = div(float(nb1),float(nb2));
	affichage(resultat, resultat2, resultat3,resultat4);
}