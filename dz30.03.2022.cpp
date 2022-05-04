задание номер 1
  
  #include <iostream>
#include <string>
 
int main() {
    std::string str("(123 gs sdg ");
    
    std::cout << str << std::endl;
    
    int n = 0;
    for (auto c : str) {
        if (c == '(') ++n;
        else if (c == ')') --n;
        if (n < 0) break;
    }
    std::cout << (n ? "fail" : "true") << std::endl;;
}


задание номер 3
  
  
  #include <iostream>
#include <string>
using namespace std;
 
 
void main()
{
    setlocale(LC_ALL, "rus");
    int a = 0;
    cout << "Введите предложение: ";
    string st;
    getline(cin,st);
    
    for(int i=1;i<st.size();i++)
    {
        if (st[i-1] != ' ' && (st[i] == ' ' || st[i+1] == '\0')) 
          a++;
    }
 
    cout << "Количество слов" << a<<endl;
}


задание номер 5
  
  
  #include <iostream>
using namespace std;
 
int main()
{ 
        int a=0; 
        int b=0;
        char a1[]="aeiouy";
        char str[100];
        cout<<"Enter string: ";
        cin>>str;
        for(i=0; i<(strlen(str)); i++)
                for(j=0; j<strlen(a1); j++)
                        if(str[i]==a1[j])
                                a++;
        cout<<endl<<"Vowels - "<<a<<endl;
        return 0;
}


задание номер 6
  
  #include<iostream>
#include<string>
using namespace std;
int main()
{
    string c,b,a;
    int i;
    while(cin>>c)
    {
        b=b+c;
    }
    for(i=b-1; i>=0; i--)
    {
        a=a+b[i];        
    }
    if(b==a)cout<<"yes";
    else cout<<"no";
    return 0;
}
