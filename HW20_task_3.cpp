#include <iostream>

bool substr(char* a, char* b)
{

    int i = 0, watchdog = 0, b_length = 0;
    bool found = false;

    while(*(b+b_length) != '\0')
    {
        b_length++;
    }

    while(*(a+i) != '\0')
    {
        for (int j = 0; j < b_length; j++)
        {
            if(*(a+j+i) == *(b+j))
            {
                watchdog++;
                if (watchdog == b_length)
                {
                    found = true;
                    return found;
                }
            }
        }
        i++;
        watchdog = 0;
    }
    return found;
}

int main()
{
    char a[] = "We manufacture force-feedback, broadband seismometers, accelerometers and data acquisition systems for a range of research and industrial applications";
    char b[] = "range";
    char c[] = "xyz";

    (substr(a, b)) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
    (substr(a, c)) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    return 0;
}