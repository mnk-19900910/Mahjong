class Mahjong {
    protected:
        int number;	// 翻数を表すメンバ変数
        string result;	// 満貫、跳満等の結果を表すメンバ変数
    public:
        int getNumber();    // 翻数を返すメンバ関数
        string getResult();   // 満貫、跳満等の結果を返すメンバ関数
        void setNumber(int number);   // 翻数を設定するメンバ関数
        Mahjong(int number, string result); // コンストラクタ
};

string setResult_func(int number);// 満貫、跳満等の結果を設定するメンバ関数の実装

// 雀士を表すクラスの定義
class Sparrow {
    protected:
        string name;	// 雀士の名前を表すメンバ変数
    public:
        virtual void voice() = 0;   // 雀士の名前とボイスを表示するメンバ関数
        Sparrow(string name); // コンストラクタ
}

// 麻雀格闘倶楽部を表すクラスの定義
class MFC : public Sparrow {
    public:
        void voice();   // 雀士の名前とボイスを表示するメンバ関数
        MFC(string name); // コンストラクタ
}

// サクラナイツを表すクラスの定義
class Sakura : public Sparrow {
    public:
        void voice();   // 雀士の名前とボイスを表示するメンバ関数
        Sakura(string name); // コンストラクタ
}
