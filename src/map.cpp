#include<iostream>
#include<string>
#include<fstream>
#include"colors.h"
#include"map.h"

using namespace std;

void create_map(string name_file){
    ifstream file;
    file.open(name_file);

    if(!file){
        cout << RED << "Error" << endl;
        return;
    }

    string line;

    // Цикл для зчитування всіх рядків у файлі
    while (getline(file, line)) {
        cout << line << endl;
    }
}
