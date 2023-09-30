#include <iostream>
using namespace std;
#include <string>
#include <fstream>

int main(){
    setlocale(LC_ALL, ".UTF8");
    string str;

    ifstream file("mytextfile.txt");
    if(file.is_open()){
        int letter_count, num_count, space_count, char_counter;
        while (getline(file, str)) 
        {         

            for (int i = 0; i < str.size(); i++)
            {
                if(isalpha(str[i]))
                    letter_count++;
                else if(isdigit(str[i]))
                    num_count++;
                else if(str[i]==' ')
                    space_count++;
                else
                    char_counter++;
            }
            
        }
    file.close();

    cout<<"There are "<<endl<<letter_count<<" letters"<<endl<<num_count<<" numbers,"<<endl<<char_counter<<" punctuation marks"<<endl<<space_count<<" spaces and"<<endl<<str.size()<<" symbols at all!";
    
}
    else{
        cout<<"shomething went wrong with file opening";
        return 1;
    } 
}