## Mahjong
### 概要 【1/4更新】
***
コマンドライン上で翻数と好きなプロ雀士を入力することで、翻数に対応した満貫、跳満等の結果を出力し、選択したプロ雀士の所属とコメントを出力するプログラム
### クラス詳細 【1/4更新】
***
#### クラス
1. 翻数と結果を表すMahjong<br>
    1.1. 翻数を返すメンバ関数 getNumber() <br>
    1.2. 満貫、跳満等の結果を返すメンバ関数 getResult() <br>
    1.3. 翻数を設定するメンバ関数 setNumber(int number) <br>
    1.4. コンストラクタ(デフォルト引数に対応) Mahjong(int number = 99, string result = "四暗刻") <br>

2. 雀士を表すSparrow（抽象クラス）<br>
    1.1. 雀士の名前とボイスを表示するメンバ関数（純粋仮想関数） virtual void voice() <br>
    1.2. コンストラクタ Sparrow(string name) <br>
3. 麻雀格闘倶楽部を表すMFC（Sparrowクラスを継承）<br>
    1.1. 雀士の名前とボイスを表示するメンバ関数 void voice() <br>
    1.2. コンストラクタ MFC(string name) <br>
4. サクラナイツを表すSakura（Sparrowクラスを継承）<br>
    1.1. 雀士の名前とボイスを表示するメンバ関数 void voice() <br>
    1.2. コンストラクタ Sakura(string name) <br>
##### 補足：3.MFCと4.Sakuraは2.Sparrowクラスを継承（多態性）
### 追加・修正
***
#### 2020/12/23
1. 追加内容<br>
    1.1. 翻数を入力したら満貫、跳満等の結果を表示する機能を追加<br>
    1.2. MahjongExにて翻数に応じたメッセージを表示する機能を追加<br>
    1.3. 多態性によるボイス機能を追加<br>
    1.4. mainの機能を関数化<br>
   &emsp;&emsp;`setNumber_func()`, `setResult_func()`, `setLike_func()`, `getVoice_func()`<br>
***
#### 12/24
1. 追加内容<br>
    1.1. コンストラクタをデフォルト引数に対応(インスタンス生成の際、引数なしに対応)<br>
***
#### 12/25
1. 追加内容<br>
    1.1. 翻数と結果をファイル出力する機能を追加<br>
***
#### 2021/1/4
1. 追加内容<br>
    1.1. 実行ファイル名の変更(Main → Mahjong)<br>
    1.2. txtディレクトリをgit管理対象から削除<br>
    1.3. Readmeに概要、クラス詳細を追加<br>
***
#### 2021/1/21
1. 追加内容<br>
    1.1. Zennとの連携<br>
