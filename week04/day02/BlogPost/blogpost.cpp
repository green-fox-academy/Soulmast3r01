#include <iostream>

#include "blogpost.h"
blogpost::blogpost(std::string authorName, std::string title, std::string text, std::string publicationDate ){
    _authorName = authorName;
    _title = title;
    _text = text;
    _publicationDate = publicationDate;
}
std::string blogpost::getAuthorName() {
    return _authorName;
}
std::string blogpost::getTitle() {
    return _title;
}
std::string blogpost::getText() {
    return _text;
}
std::string blogpost::getPublicationDate() {
    return _publicationDate;
}