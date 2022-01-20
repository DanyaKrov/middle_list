#include "middle_list.h"

long long itc_len(string str){
    int kol = 0;
    while (str[kol] != '\0'){
        kol += 1;
    } return kol;
}
int itc_find_str(string str1, char str2) {
    for (int i = 0; i < itc_len(str1); i++){
        if (str2 == str1[i])
        return i;
    }
    return -1;
}
string itc_rmstrchar(string str, string less){
    string ans = "";
    for (int i = 0; i < itc_len(str); i++){
        if (itc_find_str(less, str[i]) == -1)
            ans += str[i];
    }
    return ans;
}

string itc_rmstrspc(string str){
    string ans = "";
    for (int i = 0; i < itc_len(str); i++){
        if (str[i] != ' ')
            ans += str[i];
    }
    return ans;
}
string itc_join(vector <char> lst, string sep){
    string ans = "";
    for (int i = 0; i < lst.size(); i++){
        ans += lst[i];
        if (i != lst.size() - 1)
            ans += sep;
    }
    return ans;
}
vector <char> itc_strtlist(string str){
    vector <char> ans;
    for (int i = 0; i < itc_len(str); i++){
        ans.push_back(str[i]);
    }
    return ans;
}
