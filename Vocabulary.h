
/* 
 * File:   Location.h
 * Author: Daniel Nilsson and Fredrik Hägg 
 *
 * Created on October 4, 2012, 9:58 AM
 */

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

#ifndef VOCABULARY_H
#define	VOCABULARY_H
/**Vocabulary = words*/
class Vocabulary{
private:
    int number;
    vector<string> *words;
    string comment;
public:
    Vocabulary();
    Vocabulary(int nr, string words, string comment);/*comment=""*/
    virtual ~Vocabulary();
    
    void setNr(int nr);
    void addWord(string word);
    void setComment(string comment);
    const int getNr() const;
    string getWords() const;
    bool wordExist(string word) const;
    string getComment() const;
    const string show();
    virtual const string toString() = 0;
};


#endif	/* VOCABULARY_H */

