#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst){
    if (lst.size() > 0){
        setlocale(LC_ALL, "Russian");
        vector <int> lst1;
        vector <int> lst2;
        int len = 0;
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] / 2 == 1){
                lst2[len] = lst[i];
                len++;
            }
        }
        len = 0;
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] / 2 == 0){
                lst1[len] = lst[i];
                len++;
            }
        }
        cout <<"Analise:" <<endl;
        cout <<"Count 1: " <<lst1.size() <<", " <<"Count 2: " <<lst2.size() <<", " <<endl;
        cout <<"Max: " <<max_num(lst1) <<", " <<"Max: " <<max_num(lst2) <<", " <<endl;
        cout <<"Min: " <<min_num(lst1) <<", " <<"Min: " <<min_num(lst2) <<", " <<endl;
        cout <<"Count: " <<sum(lst1) <<", " <<"Count: " <<sum(lst2) <<", " <<endl;
    }
}
