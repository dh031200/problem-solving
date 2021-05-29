//
// Created by DH on 2021-04-30.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int result = 0;
    vector<vector<string>> clothes{{"yellowhat",      "a"},
                                   {"bluesunglasses", "a"},
                                   {"green_turban",   "e"
                                                      ""
                                                      ""},
                                   {"green_turban",   "e"},
                                   {"green_turban",   "b"},
                                   {"green_turban",   "b"},
                                   {"green_turban",   "b"},
                                   {"green_turban",   "c"},
                                   {"green_turban",   "c"}};
//    vector<vector<string>> clothes{{"yellowhat",      "a"},
//                                   {"bluesunglasses", "a"},
//                                   {"green_turban",   "b"}};
    vector<string> idx;
    for (int i = 0; i < clothes.size(); ++i) {
        bool contain = false;
        for (int j = 0; j < idx.size(); ++j) {
            if (idx[j] == clothes[i][1]) {
                contain = true;
                break;
            }
        }
        if (!contain)
            idx.push_back(clothes[i][1]);
    }
    vector<int> count(idx.size());
    for (int i = 0; i < clothes.size(); ++i) {
        for (int j = 0; j < idx.size(); ++j) {
            if (clothes[i][1] == idx[j])
                count[j] += 1;
        }
    }
    if(count.size() == 1) {
        cout << count[0] << '\n';
        return 0;
    }
    else {
        for (int j = 0; j < count.size() - 1; ++j) {
            for (int i = j; i < count.size(); ++i) {
                result += count[i];
                cout << "sumadd : " << count[i] << ' ';
            }
        }
        for (int i = 0; i < count.size() - 1; ++i) {
            int tmp = count[i];
            for (int k = i + 1; k < count.size(); ++k) {
                tmp *= count[k];
            }
            result += tmp;
            cout << "muladd : " << tmp << ' ';
        }
        cout << '\n';
    }
    cout << result << '\n';
}