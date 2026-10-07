#include <iostream>

using namespace std;

int main()
{
    int broj;
    cout << "Unesi broj od 100 do -100" << endl;
    cin >> broj;

    if(broj%2==0)
    {
        cout << "Broj je paran";
    }
    else cout << "Broj je neparan";

    int av=abs(broj);
    cout << "Apsolutna vrijednost =" << av << endl;

    int kb=broj*broj;
    cout << "Kvadrat je: " << kb << endl;

    return 0;
}
