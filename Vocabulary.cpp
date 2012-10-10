#include "Vocabulary.h"

Vocabulary::Vocabulary(){
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
    this->words->push_back(word);
}
void Vocabulary::setComment(string comment)
{
    this->comment=comment;
}
const int Vocabulary::getNr() const
{
    return this->number;
}
string Vocabulary::getWords() const
{
    string word="";
    for(int i=0; i<this->words->size(); i++)
    {
        word += this->words->at(i);
        if( i != this->words->size()-1)
        {
            word += " ";
        }
    }
    return word;
}
bool Vocabulary::wordExist(string word) const
{
    for(int i=0; i<this->words->size(); i++)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        if(this->words->at(i) == word)
        {
            return true;
        }
    }
    return false;
}
string Vocabulary::getComment() const
{
    return this->comment;
}


