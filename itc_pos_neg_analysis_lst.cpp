#include "middle_list.h"

int count_pos(vector <int> list1){
    int count = 0;
    for (int i = 0; i < list1.size(); i++){
        if (list1[i] >= 0)
            count++;
    }
    return count;
}
int max_num(vector <int> list1){
    int max = -1000000;
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
    int min = 1000000;
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
    if (lst.size() > 0){
        setlocale(LC_ALL,"Russian");
        vector <int> lst1(count_pos(lst));
        vector <int> lst2(count_neg(lst));
        int len = 0;
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] >= 0){
                lst1[len] = lst[i];
                len++;
            }
        }
        len = 0;
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] < 0){
                lst2[len] = lst[i];
                len++;
            }
        }
        cout <<"Count of numbers: " <<count_pos(lst) << "," << '\t' << '\t' <<" Count of numbers: " <<count_neg(lst) <<endl;
        cout <<"Max: " <<max_num(lst1) << "," << '\t' << '\t' <<" Max: " <<max_num(lst2) <<endl;
        cout <<"Min: " <<min_num(lst1) << "," << '\t' << '\t' <<" Min: " <<min_num(lst2) <<endl;
        cout <<"Sum: " <<sum(lst1) << "," << '\t' << '\t' <<" Sum: " <<sum(lst2) <<endl;
        cout <<"Mid: " <<middle(lst1) << "," << '\t' << '\t' <<" Mid: " <<middle(lst2) <<endl;
        cout <<"Zeros: " <<zero_count(lst1) <<endl;
    }
}
