#include "middle_list.h"


void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    setlocale(LC_ALL, "Russian");
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
}
