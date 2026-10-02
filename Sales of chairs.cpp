#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double AmericanColonial,Modern,Frenchclassical;
	cout<<"Enter number of American colonial chairs sold:";
	cin>>AmericanColonial;
	cout<<"Enter number of Modern chairs sold:";
	cin>>Modern;
	cout<<"Enter number of French classical chairs sold:";
    cin>>Frenchclassical;
    
    double Americansales,Modernsales,Frenchclassicalsales,totalsale;
    
    Americansales=AmericanColonial*85.00;
    Modernsales=Modern*57.50;
    Frenchclassicalsales=Frenchclassical*127.75;
    
    totalsale=Americansales+Modernsales+Frenchclassicalsales;
    
    cout<<"Total sale of American colonial chairs"<<Americansales<<"\n"<<"Total sale of Modern chairs"<<Modernsales<<"\n";
    cout<<"Total sale of French classical chairs"<<Frenchclassicalsales<<"\n"<<"Total sale of all chairs is"<<totalsale;
    
    cout<<fixed<<setprecision(2);
    
    return 0;
    
}
