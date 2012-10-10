#include "Vocabulary.h"

Vocabulary::Vocabulary(){
<<<<<<< HEAD
//this->sect4 = vector<string>(10000, string(""));
    this->number=0;
    this->words = new vector<string>();
    this->comment="";

}
Vocabulary::Vocabulary(int nr, string words, string comment){
    this->number=nr;
    this->words = new vector<string>();
    if (words != "") {
        this->words->push_back(words);
    }
    this->comment=comment;
}
Vocabulary::~Vocabulary(){
    delete this->words;
}
void Vocabulary::setNr(int nr)
{
    this->number=nr;
}
void Vocabulary::addWord(string word)
{

}
=======
this->sect4 = vector<string>(10000, string(""));
}
Vocabulary::~Vocabulary(){}
>>>>>>> new repo for CCA
