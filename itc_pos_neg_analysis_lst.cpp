#include "mid+dle_list.h"

int count_pos(vector <int> list1){
    int count = 0;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] > 0)
            count++;
    }
    return count;
}
int count_neg(vector <int> list1){
    int count = 0;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] < 0)
            count++;
    }
    return count;
}
void itc_pos_neg_analysis_lst(const vector <int> &lst)
{
    cout <<"Положительные:" <<count_pos(lst) <<"Отрицательные:" <<count_neg(lst) <<endl;
    cout <<"Количество чисел: " <<count_pos(lst) <<"Количество чисел: " <<count_neg(lst) <<endl;
    cout <<"Максимальная цифра: " <<count_pos(lst) <<"Максимальная цифра: " <<count_neg(lst) <<endl;
}
