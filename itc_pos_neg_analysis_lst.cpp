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
    cout <<"Количество цифр: " <<count_pos(lst1) <<"Количество цифр: " <<count_neg(lst2) <<endl;
    cout <<"Максимальная цифра: " <<max_num(lst1) <<"Максимальная цифра: " <<max_num(lst2) <<endl;
    cout <<"Минимальная цифра: " <<min_num(lst1) <<"Минимальная цифра: " <<min_num(lst2) <<endl;
    cout <<"Сумма чисел: " <<sum(lst1) <<"Сумма чисел: " <<sum(lst2) <<endl;
    cout <<"Среднее значение: " <<middle(lst1) <<"Среднее значение: " <<middle(lst2) <<endl;
    cout <<"Количество нулей: " <<zero_count(lst1);
}
