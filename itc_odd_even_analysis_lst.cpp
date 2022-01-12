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
    cout <<"������ ������:" <<endl;
    cout <<"���������� ������ �����: " <<lst1.size() <<", " <<"���������� �������� �����: " <<lst2.size() <<", " <<endl;
    cout <<"������������ ������ �����: " <<max_num(lst1) <<", " <<"������������ �������� �����: " <<max_num(lst2) <<", " <<endl;
    cout <<"����������� ������ �����: " <<min_num(lst1) <<", " <<"����������� �������� �����: " <<min_num(lst2) <<", " <<endl;
    cout <<"����� ������ �����: " <<sum(lst1) <<", " <<"����� �������� �����: " <<sum(lst2) <<", " <<endl;
}
