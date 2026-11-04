#include <iostream>
#include <iomanip>

using namespace std;

double const CIJENA_ULAZNICE=5;
double const PRAG_POPUSTA=5;
double const STOPA_POPUSTA=0.10;

bool ispravanUnos(int kolicina);
double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();


int main()
{

    for(int i=1;i<=3;i++)
    {
        int kolicina;
        cout << "Upiši broj ulaznica: " << endl;
        cin >> kolicina;

        if(kolicina<=0 || kolicina>30)
        {
            cout << "Upiši broj ulaznica od 1 do 30: " endl;
            cin >> kolicina;

        }
    }

    void evidentirajKupnju = void ispisiKupnju;


    void ispisiKupnju=double izracunajIznos;



    void ispisiSazetak();

    return 0;


    bool ispravanUnos(int kolicina)
    {
      if(kolicina<30 && kolicina>0)
      {
          return true;
      }
         else return false;
    }


    void ispisiKupnju(int redniBroj, double iznos);
    {
        int brojulaznica=0;
        double ukupniprihod=0
        double konacni iznos;

        if(kolicina<PRAG_POPUSTA) konacni iznos=kolicina*CIJENA_ULAZNICE;
        if(kolicina>PRAG_POPUSTA) konacni iznos=kolicina*(1-STOPA_POPUSTA);

        brojulaznica=brojulaznica+kolicina;
        ukupniprihod=ukupniprihod+CIJENA_ULAZNICE;
    }

    cout << fixed << setprecision(2);
    cout << konacni iznos << endl;
    cout << "Ukupno prodanih ulaznica: " << brojulaznica;
    cout << "Ukupni prihod: " << ukupni prihod;
















}
