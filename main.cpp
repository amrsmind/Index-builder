#include <iostream>
#include "BSTFCI.h"

using namespace std;



int main()
{
    BSTFCI<string> bst;
    BSTFCI<string> bst2;
char *wrd = "i am for truth,\nno matter who tells it.\ni am for justice,\nno matter who it is for or against.\nMalcolm X";
char *wrd2 = "hello um amr,\ni am not from here\ni am from another world you are not belong to.\nsay hello";
bst.indexbuilder(wrd);
bst.toinordertraversal(bst.root);
cout<<endl<<endl;
bst2.indexbuilder(wrd2);
bst2.toinordertraversal(bst2.root);
    return 0;
}
