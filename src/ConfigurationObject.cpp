/**
 * Name        : ConfigurationObject.cpp
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : See ConfigurationObject.h
 */

#include <iostream>

#include "ConfigurationObject.h"

ConfigurationObject::ConfigurationObject(FlashcardDecks &flashcard_decks)
    {

    getFlashcardDecks(flashcard_decks);
    }

/*
 * Add flashcard decks to empty flashcard_decks reference argument.
 */
void ConfigurationObject::getFlashcardDecks(FlashcardDecks &flashcard_decks)
    {
    // make the hiragana deck
    FlashcardDeck hiragana("hiragana");

    hiragana.push_back(Flashcard("あ", "a"));
    hiragana.push_back(Flashcard("か", "ka"));
    hiragana.push_back(Flashcard("さ", "sa"));
    hiragana.push_back(Flashcard("た", "ta"));
    hiragana.push_back(Flashcard("な", "na"));
    hiragana.push_back(Flashcard("は", "ha"));
    hiragana.push_back(Flashcard("ま", "ma"));
    hiragana.push_back(Flashcard("や", "ya"));
    hiragana.push_back(Flashcard("ら", "ra"));
    hiragana.push_back(Flashcard("わ", "wa"));
    hiragana.push_back(Flashcard("ん", "n"));

    hiragana.push_back(Flashcard("い", "i"));
    hiragana.push_back(Flashcard("き", "ki"));
    hiragana.push_back(Flashcard("し", "shi"));
    hiragana.push_back(Flashcard("ち", "chi"));
    hiragana.push_back(Flashcard("に", "ni"));
    hiragana.push_back(Flashcard("ひ", "hi"));
    hiragana.push_back(Flashcard("み", "mi"));
    hiragana.push_back(Flashcard("り", "ri"));
    hiragana.push_back(Flashcard("ゐ", "wi"));

    hiragana.push_back(Flashcard("う", "u"));
    hiragana.push_back(Flashcard("く", "ku"));
    hiragana.push_back(Flashcard("す", "su"));
    hiragana.push_back(Flashcard("つ", "tsu"));
    hiragana.push_back(Flashcard("ぬ", "nu"));
    hiragana.push_back(Flashcard("ふ", "fu"));
    hiragana.push_back(Flashcard("む", "mu"));
    hiragana.push_back(Flashcard("ゆ", "yu"));
    hiragana.push_back(Flashcard("る", "ru"));

    hiragana.push_back(Flashcard("え", "e"));
    hiragana.push_back(Flashcard("け", "ke"));
    hiragana.push_back(Flashcard("せ", "se"));
    hiragana.push_back(Flashcard("て", "te"));
    hiragana.push_back(Flashcard("ね", "ne"));
    hiragana.push_back(Flashcard("へ", "he"));
    hiragana.push_back(Flashcard("め", "me"));
    hiragana.push_back(Flashcard("れ", "re"));
    hiragana.push_back(Flashcard("ゑ", "we"));

    hiragana.push_back(Flashcard("お", "o"));
    hiragana.push_back(Flashcard("こ", "ko"));
    hiragana.push_back(Flashcard("そ", "so"));
    hiragana.push_back(Flashcard("と", "to"));
    hiragana.push_back(Flashcard("の", "no"));
    hiragana.push_back(Flashcard("ほ", "ho"));
    hiragana.push_back(Flashcard("も", "mo"));
    hiragana.push_back(Flashcard("よ", "yo"));
    hiragana.push_back(Flashcard("ろ", "ro"));
    hiragana.push_back(Flashcard("を", "wo"));

    hiragana.push_back(Flashcard("が", "ga"));
    hiragana.push_back(Flashcard("ざ", "za"));
    hiragana.push_back(Flashcard("だ", "da"));
    hiragana.push_back(Flashcard("ば", "ba"));
    hiragana.push_back(Flashcard("ぱ", "pa"));

    hiragana.push_back(Flashcard("ぎ", "gi"));
    hiragana.push_back(Flashcard("じ", "ji"));
    hiragana.push_back(Flashcard("ぢ", "di"));
    hiragana.push_back(Flashcard("び", "bi"));
    hiragana.push_back(Flashcard("ぴ", "pi"));

    hiragana.push_back(Flashcard("ぐ", "gu"));
    hiragana.push_back(Flashcard("ず", "zu"));
    hiragana.push_back(Flashcard("づ", "du"));
    hiragana.push_back(Flashcard("ぶ", "bu"));
    hiragana.push_back(Flashcard("ぷ", "pu"));
    hiragana.push_back(Flashcard("ゔ", "vu"));

    hiragana.push_back(Flashcard("げ", "ge"));
    hiragana.push_back(Flashcard("ぜ", "ze"));
    hiragana.push_back(Flashcard("で", "de"));
    hiragana.push_back(Flashcard("べ", "be"));
    hiragana.push_back(Flashcard("ぺ", "pe"));

    hiragana.push_back(Flashcard("ご", "go"));
    hiragana.push_back(Flashcard("ぞ", "zo"));
    hiragana.push_back(Flashcard("ど", "do"));
    hiragana.push_back(Flashcard("ぼ", "bo"));
    hiragana.push_back(Flashcard("ぽ", "po"));

    hiragana.push_back(Flashcard("きゃ", "kya"));
    hiragana.push_back(Flashcard("しゃ", "sha"));
    hiragana.push_back(Flashcard("ちゃ", "cha"));
    hiragana.push_back(Flashcard("にゃ", "nya"));
    hiragana.push_back(Flashcard("ひゃ", "hya"));
    hiragana.push_back(Flashcard("みゃ", "mya"));
    hiragana.push_back(Flashcard("りゃ", "rya"));

    hiragana.push_back(Flashcard("きゅ", "kyu"));
    hiragana.push_back(Flashcard("しゅ", "shu"));
    hiragana.push_back(Flashcard("ちゅ", "chu"));
    hiragana.push_back(Flashcard("にゅ", "nyu"));
    hiragana.push_back(Flashcard("ひゅ", "hyu"));
    hiragana.push_back(Flashcard("みゅ", "myu"));
    hiragana.push_back(Flashcard("りゅ", "ryu"));

    hiragana.push_back(Flashcard("きょ", "kyo"));
    hiragana.push_back(Flashcard("しょ", "sho"));
    hiragana.push_back(Flashcard("ちょ", "cho"));
    hiragana.push_back(Flashcard("にょ", "nyo"));
    hiragana.push_back(Flashcard("ひょ", "hyo"));
    hiragana.push_back(Flashcard("みょ", "myo"));
    hiragana.push_back(Flashcard("りょ", "ryo"));

    hiragana.push_back(Flashcard("ぎゃ", "gya"));
    hiragana.push_back(Flashcard("じゃ", "ja"));
    hiragana.push_back(Flashcard("ぢゃ", "dya"));
    hiragana.push_back(Flashcard("びゃ", "bya"));
    hiragana.push_back(Flashcard("ぴゃ", "pya"));

    hiragana.push_back(Flashcard("ぎゅ", "gyu"));
    hiragana.push_back(Flashcard("じゅ", "ju"));
    hiragana.push_back(Flashcard("ぢゅ", "dyu"));
    hiragana.push_back(Flashcard("びゅ", "byu"));
    hiragana.push_back(Flashcard("ぴゅ", "pyu"));

    hiragana.push_back(Flashcard("ぎょ", "gyo"));
    hiragana.push_back(Flashcard("じょ", "jo"));
    hiragana.push_back(Flashcard("ぢょ", "dyo"));
    hiragana.push_back(Flashcard("びょ", "byo"));
    hiragana.push_back(Flashcard("ぴょ", "pyo"));

    flashcard_decks.push_back(hiragana);

    // make the katakana deck
    FlashcardDeck katakana("katakana");

    katakana.push_back(Flashcard("ア", "a"));
    katakana.push_back(Flashcard("カ", "ka"));
    katakana.push_back(Flashcard("サ", "sa"));
    katakana.push_back(Flashcard("タ", "ta"));
    katakana.push_back(Flashcard("ナ", "na"));
    katakana.push_back(Flashcard("ハ", "ha"));
    katakana.push_back(Flashcard("マ", "ma"));
    katakana.push_back(Flashcard("ヤ", "ya"));
    katakana.push_back(Flashcard("ラ", "ra"));
    katakana.push_back(Flashcard("ワ", "wa"));
    katakana.push_back(Flashcard("ン", "n"));

    katakana.push_back(Flashcard("イ", "i"));
    katakana.push_back(Flashcard("キ", "ki"));
    katakana.push_back(Flashcard("シ", "shi"));
    katakana.push_back(Flashcard("チ", "chi"));
    katakana.push_back(Flashcard("ニ", "ni"));
    katakana.push_back(Flashcard("ヒ", "hi"));
    katakana.push_back(Flashcard("ミ", "mi"));
    katakana.push_back(Flashcard("リ", "ri"));
    katakana.push_back(Flashcard("ヰ", "wi"));

    katakana.push_back(Flashcard("ウ", "u"));
    katakana.push_back(Flashcard("ク", "ku"));
    katakana.push_back(Flashcard("ス", "su"));
    katakana.push_back(Flashcard("ツ", "tsu"));
    katakana.push_back(Flashcard("ヌ", "nu"));
    katakana.push_back(Flashcard("フ", "fu"));
    katakana.push_back(Flashcard("ム", "mu"));
    katakana.push_back(Flashcard("ユ", "yu"));
    katakana.push_back(Flashcard("ル", "ru"));

    katakana.push_back(Flashcard("エ", "e"));
    katakana.push_back(Flashcard("ケ", "ke"));
    katakana.push_back(Flashcard("セ", "se"));
    katakana.push_back(Flashcard("テ", "te"));
    katakana.push_back(Flashcard("ネ", "ne"));
    katakana.push_back(Flashcard("ヘ", "he"));
    katakana.push_back(Flashcard("メ", "me"));
    katakana.push_back(Flashcard("レ", "re"));
    katakana.push_back(Flashcard("ヱ", "we"));

    katakana.push_back(Flashcard("オ", "o"));
    katakana.push_back(Flashcard("コ", "ko"));
    katakana.push_back(Flashcard("ソ", "so"));
    katakana.push_back(Flashcard("ト", "to"));
    katakana.push_back(Flashcard("ノ", "no"));
    katakana.push_back(Flashcard("ホ", "ho"));
    katakana.push_back(Flashcard("モ", "mo"));
    katakana.push_back(Flashcard("ヨ", "yo"));
    katakana.push_back(Flashcard("ロ", "ro"));
    katakana.push_back(Flashcard("ヲ", "wo"));

    katakana.push_back(Flashcard("ガ", "ga"));
    katakana.push_back(Flashcard("ザ", "za"));
    katakana.push_back(Flashcard("ダ", "da"));
    katakana.push_back(Flashcard("バ", "ba"));
    katakana.push_back(Flashcard("パ", "pa"));

    katakana.push_back(Flashcard("ギ", "gi"));
    katakana.push_back(Flashcard("ジ", "ji"));
    katakana.push_back(Flashcard("ヂ", "di"));
    katakana.push_back(Flashcard("ビ", "bi"));
    katakana.push_back(Flashcard("ピ", "pi"));

    katakana.push_back(Flashcard("グ", "gu"));
    katakana.push_back(Flashcard("ズ", "zu"));
    katakana.push_back(Flashcard("ヅ", "du"));
    katakana.push_back(Flashcard("ブ", "bu"));
    katakana.push_back(Flashcard("プ", "pu"));
    katakana.push_back(Flashcard("ヴ", "vu"));

    katakana.push_back(Flashcard("ゲ", "ge"));
    katakana.push_back(Flashcard("ゼ", "ze"));
    katakana.push_back(Flashcard("デ", "de"));
    katakana.push_back(Flashcard("ベ", "be"));
    katakana.push_back(Flashcard("ペ", "pe"));

    katakana.push_back(Flashcard("ゴ", "go"));
    katakana.push_back(Flashcard("ゾ", "zo"));
    katakana.push_back(Flashcard("ド", "do"));
    katakana.push_back(Flashcard("ボ", "bo"));
    katakana.push_back(Flashcard("ポ", "po"));

    katakana.push_back(Flashcard("キャ", "kya"));
    katakana.push_back(Flashcard("シャ", "sha"));
    katakana.push_back(Flashcard("チャ", "cha"));
    katakana.push_back(Flashcard("ニャ", "nya"));
    katakana.push_back(Flashcard("ヒャ", "hya"));
    katakana.push_back(Flashcard("ミャ", "mya"));
    katakana.push_back(Flashcard("リャ", "rya"));

    katakana.push_back(Flashcard("キュ", "kyu"));
    katakana.push_back(Flashcard("シュ", "shu"));
    katakana.push_back(Flashcard("チュ", "chu"));
    katakana.push_back(Flashcard("ニュ", "nyu"));
    katakana.push_back(Flashcard("ヒュ", "hyu"));
    katakana.push_back(Flashcard("ミュ", "myu"));
    katakana.push_back(Flashcard("リュ", "ryu"));

    katakana.push_back(Flashcard("キョ", "kyo"));
    katakana.push_back(Flashcard("ショ", "sho"));
    katakana.push_back(Flashcard("チョ", "cho"));
    katakana.push_back(Flashcard("ニョ", "nyo"));
    katakana.push_back(Flashcard("ヒョ", "hyo"));
    katakana.push_back(Flashcard("ミョ", "myo"));
    katakana.push_back(Flashcard("リョ", "ryo"));

    katakana.push_back(Flashcard("ギャ", "gya"));
    katakana.push_back(Flashcard("ジャ", "ja"));
    katakana.push_back(Flashcard("ヂャ", "dya"));
    katakana.push_back(Flashcard("ビャ", "bya"));
    katakana.push_back(Flashcard("ピャ", "pya"));

    katakana.push_back(Flashcard("ギュ", "gyu"));
    katakana.push_back(Flashcard("ジュ", "ju"));
    katakana.push_back(Flashcard("ヂュ", "dyu"));
    katakana.push_back(Flashcard("ビュ", "byu"));
    katakana.push_back(Flashcard("ピュ", "pyu"));

    katakana.push_back(Flashcard("ギョ", "gyo"));
    katakana.push_back(Flashcard("ジョ", "jo"));
    katakana.push_back(Flashcard("ヂョ", "dyo"));
    katakana.push_back(Flashcard("ビョ", "byo"));
    katakana.push_back(Flashcard("ピョ", "pyo"));

    flashcard_decks.push_back(katakana);

    flashcard_decks.setReady(true);
    }

ConfigurationObject::~ConfigurationObject(){}

