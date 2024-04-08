#include <iostream>
using namespace std;
#include <string>
#include <sstream>

int main() {
    string inputString, currentWord, letters = "";
    
    int oddLetterCount = 0; // Кількість слів, які мають непарну довжину
    cout << "Enter a text: ";   
    getline(cin, inputString);  // Зчитуємо  символи з вхідного рядка та поміщаємоо їх у рядок: 
    stringstream split(inputString); // Створюємо потік з вхідного текста

    
    while (getline(split, currentWord, ' ')) { // Цикл розподілу вхідного текста на слова
        if(currentWord.length() % 2 != 0) {
            oddLetterCount++;
        }            
        for(int i = 0; i < currentWord.length();i++) { // Цикл розподілу поточного слова на літери
            const char currChar = currentWord[i]; //  Поточне слово            
            if(isspace(currChar) == 0) { // Перевірка чи не є поточне пустим
                if(letters.length() > 0) {                    
                    if(letters.find(currChar) == string::npos && letters.find(tolower(currChar)) == string::npos) { // Перевіряємо чи наявний поточний символ в текстовому рядку letters
                        letters = letters + currChar;             
                    }
                } else {
                    letters = letters + currChar;
                }
            }
        }  
    }  
    
    int frequency[] = {}; // Масив для запису частоти входження  
    for(int i =0;i < letters.length();i++) { // Цикл розподілу рядка letters на літери
        const char currChar = letters[i]; // Поточна літера
        int currCharCount = 0; // Частота входження 
        for(int x = 0;x < inputString.length();x++) { // Цикл для розподілення вхідного тексту на літери
            if(currChar == inputString[x]) { // Перевірка чи поточна літера дорівнює поточному символу вхідного тексту
                currCharCount++;
            }
        }
        frequency[i] = currCharCount;
    }

    string noParentheses = inputString; // Строка без словосполучень з дужками
    int startIndex = 0; // Індекс для позначення початку словосполучення в дужках
    int endIndex = 0;  // Індекс для позначення закінчення  словосполучення в дужках
    for(int i = 0; i< inputString.length();i++) { // Цикл розподілу вхідного тексту на літери
        char currChar = inputString[i]; 
        if(currChar == '(') {
            startIndex = i;            
        }        
        if(currChar == ')') {
            endIndex = i+1;
        }
        if(endIndex > startIndex) { // Перевірка на закриття дужки
            int range = endIndex-startIndex;            
            if(range > 0) { // Перевірка на коректність індексів
                noParentheses.erase(startIndex,range); // Видалення тексту у дужках та самих дужок
                startIndex = endIndex; 
                endIndex = 0;
            }
        }
    } 
        
    cout << " " << endl;    
    cout << "Input string: " << inputString << endl;   
    cout << " " << endl;  
    cout << "Input string without parentheses: " << noParentheses << endl;
    cout << " " << endl;  

    cout << "Number of words with odd number of letters: " << oddLetterCount << endl;

    for(int i = 0; i < letters.length();i++) {
        cout << "Letter  " << "' " << letters[i] << " '";
        cout << " appeared " << frequency[i] << " times; "<< endl;
    }      
    
    return 0;
}