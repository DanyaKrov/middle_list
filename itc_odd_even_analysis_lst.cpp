#include "middle_list.h"

long count1(const vector <int> &lst){
    long len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] / 2 == 1){
            len++;
        }
    }
    return len;
}
long count2(const vector <int> &lst){
    long len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] / 2 == 0){
            len++;
        }
    }
    return len;
}
void itc_odd_even_analysis_lst(const vector <int> &lst){
    if (lst.size() > 0){
        setlocale(LC_ALL, "Russian");
        vector <int> lst1;
        vector <int> lst2;
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] % 2 == 1){
                lst2.push_back(lst[i]);
            }
        }
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] % 2 == 0){
                lst1.push_back(lst[i]);
            }
        }
        cout <<"Analise:" <<endl;
        cout <<"Count 1: " <<lst1.size() << "," << '\t' << '\t' <<"Count 2: " <<lst2.size() <<", " <<endl;
        cout <<"Max: " <<max_num(lst1) << "," << '\t' << '\t' <<"Max: " <<max_num(lst2) <<", " <<endl;
        cout <<"Min: " <<min_num(lst1) << "," << '\t' << '\t' <<"Min: " <<min_num(lst2) <<", " <<endl;
        cout <<"Sum: " <<sum(lst1) << "," << '\t' << '\t' <<"Sum: " <<sum(lst2) <<", " <<endl;
    }
}
