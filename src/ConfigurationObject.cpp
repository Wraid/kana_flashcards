/**
 * Name        : ConfigurationObject.cpp
 * Author      : Stuart Will
 * Version     : 0.01
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

    flashcard_decks.push_back(katakana);

    flashcard_decks.setReady(true);
    }

ConfigurationObject::~ConfigurationObject(){}

