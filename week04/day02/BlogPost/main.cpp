#include <iostream>
#include "blogpost.h"

int main() {
    blogpost work1("The author: John Doe", "The title: Lorem Ipsum", "/Lorem ipsum dolor sit amet./", "2000.05.04.");
    std::cout <<  work1.getAuthorName() << std::endl << work1.getTitle() << std::endl << work1.getText() << std::endl << work1.getPublicationDate() << std::endl;
std::cout << " " << std::endl;
    blogpost work2("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    std::cout <<  work2.getAuthorName() << std::endl << work2.getTitle() << std::endl << work2.getText() << std::endl << work2.getPublicationDate() << std::endl;
std::cout << " " << std::endl;
    blogpost work3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28.");
    std::cout <<  work3.getAuthorName() << std::endl << work3.getTitle() << std::endl << work3.getText() << std::endl << work3.getPublicationDate() << std::endl;
    return 0;

}