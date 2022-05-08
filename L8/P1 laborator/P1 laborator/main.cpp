#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <queue>

void ReadFromFile(std::string s) {
    FILE* file = fopen("p1.txt", "rb");
    if (file == nullptr) {
        printf("Fisierul este gol!");
        exit(1);
    }
    char buffer[4096];
    while (!feof(file)) {
        auto read = fread(buffer, 1, sizeof(buffer), file);
        s.append(buffer, read);
    }
    fclose(file);
}

void SplitThePhrase(std::string s, std::map<std::string, int>& lista_de_cuvinte) {
    int count = 0;
    int start = 0;
    while (count < s.size()) {
        if (s[count] == ' ') {
            auto aux = s.substr(start, count-start);
            lista_de_cuvinte[aux]++;
            start = count + 1;
            count++;
        }
        if (s[count] == ',') {
            auto aux = s.substr(start, count - start);
            lista_de_cuvinte[aux]++;
            start = count + 1;
            count++;
        }
        if (s[count] == '?') {
            auto aux = s.substr(start, count - start);
            lista_de_cuvinte[aux]++;
            start = count + 1;
            count++;
        }
        if (s[count] == '!') {
            auto aux = s.substr(start, count - start);
            lista_de_cuvinte[aux]++;
            start = count + 1;
            count++;
        }
        if (s[count] == '.') {
            auto aux = s.substr(start, count - start);
            lista_de_cuvinte[aux]++;
            start = count + 1;
            count++;
        }
        count++;
    }
}

bool Compare(std::pair<std::string,int>&stg, std::pair<std::string,int>&dr) {
    if (stg.second != dr.second) {
        return stg.second < dr.second;
    } else {
        return stg.first.compare(dr.first) > 0;
    }
}


int main() {
    std::string s;
    ReadFromFile(s);

    std::map<std::string, int> lista_de_cuvinte;
    SplitThePhrase(s, lista_de_cuvinte);

    std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, decltype(&Compare)> coada(Compare);

   std::map<std::string, int>::iterator i = lista_de_cuvinte.begin();
    while (i != lista_de_cuvinte.end()) {
       std::pair<std::string, int> pereche;
        pereche.first = i->first;
       pereche.second = i->second;
        coada.push(pereche);
       i++;
    }
    while (!coada.empty()) {
        std::cout << coada.top().first << "=>" << coada.top().second << "\n";
        coada.pop();
    }

    return 0;
}