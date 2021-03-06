#include <iostream>
#include <string>
using namespace std;
#include "header/Mahjong.h"

int main() {
    int number;	// 翻数を表す変数
    number = setNumber_func();	// 翻数を設定する関数

    string result;	// 満貫、跳満等の結果を表す変数
    result = setResult_func(number);	// 満貫、跳満等の結果を設定する関数

    int like;	// 好きな雀士を表す変数
    like = setLike_func();	// 好きな雀士を設定する関数

    // 新たな翻数と結果を表示するインスタンスを設定する
    Mahjong act (number, result);

    // ファイルに翻数と結果を出力する関数
    fileOut_func(act, like);

    // 翻数と結果、ボイスを表示する
    cout << "翻数は" << act.getNumber() << endl;
    cout << "結果は" << act.getResult() << endl;

    getVoice_func(like);	// 雀士のインスタンスを作成し、ボイスを表示する関数

    return 0;
}