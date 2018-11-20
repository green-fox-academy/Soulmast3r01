

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H
#include <iostream>

class Postit {
public:

    Postit(std::string backgroundColor, std::string text, std::string textColor );


    std::string getBackgroundColor();
    std::string getText();
    std::string getTextColor();



private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;
};


#endif //POST_IT_POSTIT_H
