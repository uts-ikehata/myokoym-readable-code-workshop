# 実践リーダブルコード

レシピ管理プログラム

## 開発言語

C言語

## 使い方

recipe.cをコンパイルして実行してください。
以下はGCCを使ってコマンドラインで実行する例です。

```bash
$ gcc recipe.c -o recipe
$ ./recipe recipe-data.txt
```

IDを指定してそのレシピのみ表示したい場合は、
コマンドライン引数にIDを追加してください。
```bash
$ ./recipe recipe-data.txt 2
$2:親子丼
```
