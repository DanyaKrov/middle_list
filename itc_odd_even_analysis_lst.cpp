#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst){
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
    cout <<"Анализ списка:" <<endl;
    cout <<"Количество четных чисел: " <<lst1.size() <<", " <<"Количество нечетных чисел: " <<lst2.size() <<", " <<endl;
    cout <<"Максимальная четная цифра: " <<max_num(lst1) <<", " <<"Максимальная нечетная цифра: " <<max_num(lst2) <<", " <<endl;
    cout <<"Минимальная четная цифра: " <<min_num(lst1) <<", " <<"Минимальная нечетная цифра: " <<min_num(lst2) <<", " <<endl;
    cout <<"Сумма четных чисел: " <<sum(lst1) <<", " <<"Сумма нечетных чисел: " <<sum(lst2) <<", " <<endl;
}
