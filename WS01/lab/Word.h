/*
    OOP244
    Name   : Chungon Tse
    ID     : 154928188
    Email  : cotse@myseneca.ca
    Section: NDD
    Date   : 17 Jan 2022
*/
#ifndef SDDS_WORD_H
#define SDDS_WORD_H
const int MAX_WORD_LEN = 21;
struct Word
{
    char letters[MAX_WORD_LEN];
    int count;
};
namespace sdds
{

    int searchWords(const Word words[], int num, const char word[]);
    void addWord(Word words[], int* index, const char newWord[]);
    int readWord(char* word, FILE* fptr, int maxLen);
    void title(const char* value, int len);
    void endList();
    void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
    void print(const Word* w, int gotoNextLine, int len);
    int findMaxLen(const Word words[], int noOfWords);
    void listWords(const Word words[], int noOfWords, const char* theTitle);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt, int sortType);
    int totalCount(const Word* words, int num);
    void wordStats(const char* filename);
    void programTitle();

}
#endif