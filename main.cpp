#include <iostream>

using namespace std;

int main()
{
    int betul = 0;
    int salah = 0;

    while( true )
    {
        cout << endl;
        cout << "Betul = " << betul << " ";
        cout << "Salah = " << salah << endl << endl;

        string jawapan = "";

        cout << "Antara yang berikut siapa paling comel?" << endl;
        cout << "A - Cikgu Wan" << endl;
        cout << "B - Cikgu Comel" << endl;
        cout << "C - Cikgu Qayyum" << endl;
        cout << "D - Cikgu Sarah" << endl;
        cout << "E - Cikgu Aina" << endl;
        cout << "Jawapan: ";
        cin >> jawapan;

        for( auto& i : jawapan )
        {
            i = tolower( i );
        }

        if( jawapan == "a" )
        {
            cout << "Betul!" << endl;
            betul++;
        }
        else
        {
            cout << "Salah!" << endl;
            salah++;
        }
    }

    return 0;
}
