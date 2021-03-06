// 翻数と結果を表すMahjongクラスの定義
class Mahjong {
    protected:
        int number;	// 翻数を表すメンバ変数
        string result;	// 満貫、跳満等の結果を表すメンバ変数
    public:
        int getNumber();    // 翻数を返すメンバ関数
        string getResult();   // 満貫、跳満等の結果を返すメンバ関数
        void setNumber(int number);   // 翻数を設定するメンバ関数
        Mahjong(int number = 99, string result = "四暗刻"); // コンストラクタ(デフォルト引数に対応)
};

// 翻数を設定する関数のプロトタイプ宣言
int setNumber_func();

// 満貫、跳満等の結果を設定する関数のプロトタイプ宣言
string setResult_func(int number);

// 好きな雀士を設定する関数のプロトタイプ宣言
int setLike_func();

// ファイルに翻数と結果を出力する関数のプロトタイプ宣言
void fileOut_func(Mahjong act, int like) ;

// 雀士のインスタンスを作成し、ボイスを表示する関数のプロトタイプ宣言
void getVoice_func(int like);

// 雀士を表すSparrowクラスの定義
class Sparrow {
    protected:
        string name;	// 雀士の名前を表すメンバ変数
    public:
        virtual void voice() = 0;   // 雀士の名前とボイスを表示するメンバ関数
        Sparrow(string name); // コンストラクタ
};

// 麻雀格闘倶楽部を表すMFCクラスの定義
class MFC : public Sparrow {
    public:
        void voice();   // 雀士の名前とボイスを表示するメンバ関数
        MFC(string name); // コンストラクタ
};

// サクラナイツを表すSakuraクラスの定義
class Sakura : public Sparrow {
    public:
        void voice();   // 雀士の名前とボイスを表示するメンバ関数
        Sakura(string name); // コンストラクタ
};

// Sparrowクラスのポインタを引数とした関数のプロトタイプ宣言
void sparrowVoice(Sparrow *p);
