#include "middle_list.h"

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    if (lst.size() > 0){
        setlocale(LC_ALL, "Russian");
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
}
