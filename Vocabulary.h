
/* 
 * File:   Location.h
 * Author: Daniel Nilsson and Fredrik Hägg 
 *
 * Created on October 4, 2012, 9:58 AM
 */

#include <vector>
#include <string>
#include <string.h>
#include <iostream>

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
    const int getNr() const;
    string getWords();
    
};


#endif	/* VOCABULARY_H */

