#include <iostream>
#include <time.h>
#include <string>
#include<locale>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
 
 
struct contacts {
    string name;
    int number;
 
};
 
void main() {
    ifstream inf("in.txt");
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int n = 4;
    int size = 5;
 
    contacts* phonebook = new contacts[size];
 
    for (int i = 0; i < n; i++)
    {
        inf >> phonebook[i].name >> phonebook[i].number;
 
    }
 
    cout << "Ваши контакты: " << endl;
 
    for (int i = 0; i < n; i++)
    {
        cout << phonebook[i].name <<" " << phonebook[i].number << endl;
    }
    cout << endl;
    cout << "Для поиска абонента нажмите 1 " << endl;
    cout << "Для добавления нового абонента нажмите 2 " << endl;
    cout << "Для удаления абонента нажмите 3" << endl;
    cout << "Редактирование абонента нажмите 4" << endl;
    cout << "Вывести все контакты на экран нажмите 5" << endl;
    cout << "Для выхода нажмите 0" << endl;
    cout << endl;
    int choise=-5;
    while (choise !=0 )
    {
        cin >> choise;
        switch (choise)
        {
        case 1:
        {   
            cout << endl;
            cout << "Для поиска абонента по имени нажмите 1" << endl;
            cout << "Для поиска абонента по номеру нажмите 2" << endl;
            int search;
            cin >> search;
            switch (search)
            {
            case 1:
            {   
                cout << endl;
                cout << "Введите имя" << endl;
                bool flag = false;
                string namesearch;
                cin >> namesearch;
                for (int i = 0; i < n; i++)
                {
                    if (namesearch == phonebook[i].name) { cout << phonebook[i].name << " " << phonebook[i].number << endl; flag = true; }
 
                }
                if (flag == false) cout << "Такого имени нет" << endl;
                break;
            }
            case 2:
            {   
                cout << endl;
                cout << "Введите номер" << endl;
                bool flag1 = false;
                int numbersearch;
                cin >> numbersearch;
                for (int i = 0; i < n; i++)
                {
                    if (numbersearch == phonebook[i].number) { cout << phonebook[i].name << " " << phonebook[i].number << endl; flag1 = true; }
 
                }
                if (flag1 == false) cout << "Такого номера нет" << endl;
                break;
            }
            default: cout << "Неправильный номер " << endl;
            }
            break;
        }
 
        case 2:    
                {
            n++;
            if (n < size) 
            {
                cout << endl;
                cout << "Введите имя и номер нового контакта" << endl;
                
                    cin >> phonebook[n].name >> phonebook[n].number;
                
                cout << "Контакт добавлен" << endl;
                
            }
 
            if (n == size)
            {
                size = size * 2;
                contacts *temp;
 
                temp = new contacts[n - 1];
 
                for (int i = 0; i < n - 1; i++) 
                {
 
                    temp[i] = phonebook[i];
                }
 
                delete[] phonebook;
                phonebook = new contacts[size];
 
                for (int i = 0; i < n - 1; i++) 
                {
 
                    phonebook[i] = temp[i];
                }
                
                cout  << endl;
                cout << "Введите имя и номер нового контакта" << endl;
 
                cin >> phonebook[n-1 ].name >> phonebook[n-1 ].number;
 
                cout << "Контакт добавлен" << endl;
                delete[] temp;
            }
            break;
 
                }
 
        case 3: {
 
            bool flag2 = false;
            int numb;
            string namedelete;
            cout << "Введите имя контакта, который хотите удалить" << endl;
            cin >> namedelete;
 
            for (int i = 0; i < n; i++) 
            {
                if (phonebook[i].name == namedelete) { n--; numb = i; flag2 = true; }
 
            }
if(flag2==true)
{
            contacts *temp;
 
            temp = new contacts[n];
 
            for (int i = 0; i < numb; i++)
            {
                temp[i] = phonebook[i];
            }
            
            for (int i = numb + 1; i < n + 1; i++) 
            {
                temp[i - 1] = phonebook[i];
            }
 
            for (int i = 0; i < n; i++)
            {
                phonebook[i] = temp[i];
            }
 
            
delete[] temp;
 
}
                else
                {
                    cout << "Имя не найдено" << endl; 
                }
                break;
}
 
        
        case 4: {
 
            cout << "Введите имя контакта, который нужно редактировать" << endl;
            string nameredakt;
            cin >> nameredakt;
            
            bool flag2 = false;
            int num;
            
            for (int i = 0; i < n; i++) 
            {
 
                if (nameredakt == phonebook[i].name) { flag2 = true; num = i; }
 
            }
 
            if (flag2 == true) {
                int choiseredakt;
                cout << endl;
                cout << "Для редактирования имени нажмите 1" << endl;
                cout << "Для редактирования номера нажмите 2" << endl;
                cin >> choiseredakt;
                if (choiseredakt == 1) 
                {
                    cout << endl;
                    cout << "Введите новое имя" << endl;
                    cin >> phonebook[num].name;
                    cout << "Имя изменено" << endl;
 
                }
                if (choiseredakt == 2) 
                {
                    cout << endl;
                    cout << "Введите новый номер" << endl;
                    cin >> phonebook[num].number;
                    cout << "Номер изменен" << endl;
                }
                else if(choiseredakt!=1&&choiseredakt!=2) cout << "Неправильный номер" << endl;
 
            }
 
            if (flag2 == false) cout << "Имя не найдено" << endl;
 
            
 
            break;
        }
 
        case 5: 
        {
            cout << endl;
            cout << "Ваши контакты:" << endl;
            cout << endl;
            
            for (int i = 0; i < n; i++) 
            {
 
                cout << phonebook[i].name << " " << phonebook[i].number << endl;
            }
 
            break;
        }
 
            default: cout << "Неправильно введен номер " << endl;
        }
 
        }
    delete[] phonebook;
}
