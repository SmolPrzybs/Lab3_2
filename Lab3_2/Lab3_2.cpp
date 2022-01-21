#include <iostream>
#include <string>
using namespace std;


int main()
{
    //zadanie2
    //int liczby[100];
    //char znaki[100];
    //cin >> liczby;
    //cin >> znaki;
    //kod nie jest poprawny

    //zadanie3
    char tabz3[] = "wiosna";
    int i;
    string s1{ tabz3 };
    for (i = 0; i < s1.length(); i++){
    }
        cout << "Wyraz Wiosna ma " << i << " liter";
        cout << endl;
          cout << endl;

    //zadanie4
    string str1 = "Test1";  //inicjalizacja
    string str2 = "Test2";
    string str3;
    str3 = str1;            //kopiowanie
    cout <<  str3 << endl;  //wyświetlanie skopiowanego
    str3 = str1 + str2;
    cout << str3 << endl;  //wyświetlanie złączonego
    cout << "liter " << str3.size(); //wyświetlanie długości
    cout << endl;
    cout << endl;


    //zadanie5
    char tablica1[100];
    cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
    cin.getline(tablica1, 100); 
    char tablica2[100];
    cout << "Podaj numer domu: ";
    cin.getline(tablica2, 100);
    char tablica3[100];
    cout << "Na ile oceniasz swoje umiejetności programowania w skali [2 - 5]: ";
    cin.getline(tablica3, 100);
    char tablica4[100];
    cout << "Twoj staz programistyczny: ";
    cin.getline(tablica4, 100);
    cout << "Adres: " << tablica1 << " " << tablica2 << endl;
    cout << "Ocena: " << tablica3 << endl;
    cout << "Staz " << tablica4 << " dni" << endl;
        cout << endl;
        cout << endl;


    //zadanie6
    string tekst;
    cout << "Wprowadz tekst: ";
    getline(cin, tekst);
    string spolgloski = "bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ";
    int  liczniksp = 0;
    for (int i = 0; i < tekst.length(); i++) {

        for (int j = 0; j < spolgloski.length(); j++) {
            if (tekst[i] == spolgloski[j]) liczniksp++;
        }
    }
    cout << "Spolgloski: " << liczniksp << " ||   samogloski: "<< tekst.length()- liczniksp << endl;
}

