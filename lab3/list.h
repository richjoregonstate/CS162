#ifndef LIST_H_
#define LIST_H_

class list{
    public:
        void addBack(char);
        void removeFront();
        char getFront();

    private:
        void isEmpty();
        struct item{
            struct item *next;
            char letter;
        };
        struct item *top;
        struct item *bottom;
};

#endif