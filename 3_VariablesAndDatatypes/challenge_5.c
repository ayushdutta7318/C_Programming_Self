#include <stdio.h>

int main()
{
    // create company var
    enum company
    {
        Google,
        Facebook,
        Xerox,
        Yahoo,
        Ebay,
        Microsoft
    };

    // assign value to vars.
    enum company xerox, google, ebay, microsoft, facebook, yahoo;
    xerox = Xerox;
    google = Google;
    ebay = Ebay;
    microsoft = Microsoft;
    facebook = Facebook;
    yahoo = Yahoo;
    printf("%d %d %d %d %d %d", xerox, google, ebay, microsoft, facebook, yahoo);

    return 0;
}