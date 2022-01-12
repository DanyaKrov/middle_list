#include "middle_list.h"

int count_pos(vector <int> list1){
    int count = 0;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] > 0)
            count++;
    }
    return count;
}
int max_num(vector <int> list1){
    int max = -100000000;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] > max)
            max = list1[i];
    }
    return max;
}
int middle(vector <int> list1){
    return sum(list1) / list1.size();
}
int min_num(vector <int> list1){
    int min = 10000000000;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] < min)
            min = list1[i];
    }
    return min;
}
int count_neg(vector <int> list1){
    int count = 0;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] < 0)
            count++;
    }
    return count;
}
int zero_count(vector <int> list1){
    int count = 0;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] == 0)
            count++;
    }
    return count;
}
long sum(vector <int> list1){
    long summ = 0;
    for (int i = 0; i < list1.size(); i++){
        summ += list1[i];
    }
    return summ;
}
void itc_pos_neg_analysis_lst(const vector <int> &lst)
{
    vector <int> lst1(count_pos(lst));
    vector <int> lst2(count_neg(lst));
    int len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] < 0){
            lst2[len] = lst[i];
            len++;
        }
    }
    len = 0;
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] >= 0){
            lst1[len] = lst[i];
            len++;
        }
    }
    cout <<"Количество цифр: " <<count_pos(lst) <<"Количество цифр: " <<count_neg(lst) <<endl;
    cout <<"Максимальная цифра: " <<max_num(lst1) <<"Максимальная цифра: " <<max_num(lst2) <<endl;
    cout <<"Минимальная цифра: " <<min_num(lst1) <<"Минимальная цифра: " <<min_num(lst2) <<endl;
    cout <<"Сумма чисел: " <<sum(lst1) <<"Сумма чисел: " <<sum(lst2) <<endl;
    cout <<"Среднее значение: " <<middle(lst1) <<"Среднее значение: " <<middle(lst2) <<endl;
    cout <<"Количество нулей: " <<zero_count(lst1);
}
