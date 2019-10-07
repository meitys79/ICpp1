
#include <iostream>
using namespace std;
struct trojuhelnik
{
	int a;
	int b;
	int c;

};

bool lzeSestrojit(trojuhelnik t) {
	if ((t.a + t.b > t.c) && (t.a + t.c > t.b) && (t.b + t.c > t.a)) {
		return true;
	}
	return false;
}
bool lzeSestrojita(trojuhelnik ta) {
	if ((ta.a + ta.b > ta.c) && (ta.a + ta.c > ta.b) && (ta.b + ta.c > ta.a)) {
		return true;
	}
	return false;
}
bool lzeSestrojitb(trojuhelnik tb) {
	if ((tb.a + tb.b > tb.c) && (tb.a + tb.c > tb.b) && (tb.b + tb.c > tb.a)) {
		return true;
	}
	return false;
}
//priklad 1.
int main() {

	cout << "-------------Priklad 1----------- \n";
	int a, b, c;
	cout << "Zadej delku strany a(cm): " ;
	cin >> a;
	cout << "Zadej d>>lku strany b(cm): ";
	cin >> b;
	cout << "Zadej delku strany c(cm): ";
	cin >> c;

	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		cout << "Obvod trojuhelniku je: " << a + b + c<< " cm \n" ;

	}
	else
	{
		cout << "Trojuhelnik nelze sestrojit"  ;
	}

	cout << "-------------Priklad 2----------- \n";
	//priklad 2.
	trojuhelnik t;
	cout << "Zadej delku strany a(cm): " ;
	cin >> t.a;
	cout << "Zadej delku strany b(cm): " ;
	cin >> t.b;
	cout << "Zadej delku strany c(cm): ";
	cin >> t.c;
	if (lzeSestrojit(t))
	{
	cout << "Obvod trojuhelniku je: " << t.a + t.b + t.c<<" cm \n" ;
	}
	else
	{
		cout << "Trojuhelnik nelze sestrojit"  ;
		
	}
	



	cout << "-------------Priklad 3----------- \n";

	//priklad 3.
	trojuhelnik* ta = new trojuhelnik;
	cout << "Zadej delku strany a(cm):"  ;
	cin >> ta->a;
	cout << "Zadej delku strany b(cm): "  ;
	cin >> ta->b;
	cout << "Zadej delku strany c(cm): "  ;
	cin >> ta->c;
	if (lzeSestrojita(*ta))
	{
	cout << "Obvod trojuhelniku je: " << ta->a + ta->b + ta->c<<"cm\n" ;
	}
	else
	{
	cout << "Trojuhelnik nelze sestrojit"  ;
	}
	delete(ta);

	


	cout << "-------------Priklad 4----------- \n";

	//priklad 4.
	trojuhelnik* tb = new trojuhelnik;


	cout << "Zadej delku strany a(cm):"  ;
	cin >> tb->a;
	cout << "Zadej delku strany b(cm): "  ;
	cin >> tb->b;
	cout << "Zadej delku strany c(cm):"  ;
	cin >> tb->c;
	if (lzeSestrojitb(*tb))
	{
	cout << "Obvod trojuhelniku je: " << tb->a + tb->b + tb->c << "cm\n";
	}
	else
	{
	cout << "Trojuhelnik nelze sestrojit"  ;
	}
	delete(tb);



	cout << "-------------Priklad 5----------- \n";
	//priklad 5.
	int pocetTrojuh;
	cout << "zadejte pocet trojuhelniku: " << endl;
	cin >> pocetTrojuh;
	trojuhelnik* poleTrojuhel = new trojuhelnik[pocetTrojuh];

	for (int i = 0; i < pocetTrojuh; i++)
	{
		trojuhelnik* t = new trojuhelnik;
		cout << "Zadejte trojuhelnik na indexu " << i << endl;
		poleTrojuhel[i] = *t;
		cout << "zadej a: ";
		cin >> poleTrojuhel[i].a;
		cout << "zadej b: ";
		cin >> poleTrojuhel[i].b;
		cout << "zadej c: ";
		cin >> poleTrojuhel[i].c;
		cout << endl;
		delete t;

	}

	for (int i = 0; i < pocetTrojuh; i++)
	{

		cout << "Trojuhelnik " << i << " a: " << poleTrojuhel[i].a << ", b: " << poleTrojuhel[i].b << ", c: " << poleTrojuhel[i].c << endl;
		if (lzeSestrojit(poleTrojuhel[i]))
		{
			cout << "Obvod: " << poleTrojuhel[i].a + poleTrojuhel[i].b + poleTrojuhel[i].c << endl;
		}
		else
		{
			cout << "Trojuhelnik nelze sestrojit" << endl;
		}
	}

	delete[] poleTrojuhel;
	
	system("Pause");

	return 0;
}