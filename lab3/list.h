#ifndef LIST_H_
#define LIST_H_

class list{
    public:
        list();
        void addBack(char);
        void removeFront();
        char getFront();
        void destroy();
    private:
        bool isEmpty();
        struct item{
            struct item *next;
            char letter;
        };
        struct item *top;
        struct item *bottom;
};

#endif