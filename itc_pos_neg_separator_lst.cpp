#include "middle_list.h"

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    int len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] < 0){
            lst1[len] = lst[i];
            len++;
        }
    }
    len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] == 0){
            lst2[len] = lst[i];
            len++;
        }
    }
    len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] > 0){
            lst3[len] = lst[i];
            len++;
        }
    }
}