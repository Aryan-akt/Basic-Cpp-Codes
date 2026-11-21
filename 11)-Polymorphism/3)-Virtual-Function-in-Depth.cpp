#include <iostream>
#include <cstring>
using namespace std;

class media
{
    protected:
        char name[50];
        int size;
        char type[10];

    public:
        media(char *n, int s, char *t)
        {
            strcpy(name, n);
            strcpy(type, t);
            size = s;
        }

        virtual void display(){}
};

class video : public media
{
    float vidLenght;

    public:
        video(char *n, int s, char *t, float vl) : media(n, s, t)
        {
            vidLenght = vl;
        }
};

class audio : public media
{
    float audLenght;

    public:
        audio(char *n, int s, char *t, float al) : media(n, s, t)
        {
            audLenght = al;
        }
};

int main()
{
    

    return 0;
}