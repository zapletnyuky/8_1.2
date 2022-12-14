#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
using namespace std;
int Count(char* str, char* cs, int i)
{
    if (str[i + 1] != 0)
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
    return 1 + Count(str, cs, i + 1);
        else
            return Count(str, cs, i + 1);
    else
        return 0;
}
char* Change(char* dest, char* str, char* t, int i)
{

    if (str[i + 1] != 0)
    {
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
        {
            strcat(t, "***");
            return Change(dest, str, t + 3, i + 5);
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
            return Change(dest, str, t, i);
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    return dest;
}
int main()
{
    char str[101];
    char cs[]="while";
        cout << "enter string:" << endl;
        cin.getline(str, 100);
        cout << "string contained " << Count(str, cs, 0) << " group(s) of 'while'" << endl;
        char* dest1 = new char[151];
        dest1[0] = '\0';
        char* dest2;
        dest2 = Change(dest1, str, dest1, 0);
        cout << "modified string : " << dest2 << endl;
        return 0;
}

//    if (cs[j] != '\0')
//       if (str[k] == cs[j] && str[k] != '\0')
//       {
//           j++;
//           k++;
//       }
//    if(str[i] != '\0'){
//
      
//    if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
//        count++;
//    if (str[i+1] != 0)
//        return Count(str, cs, i+1, count, k, j);
//    else
//        return count;
//
//    }
    
//    if ( str[i] != '\0'){
//        if(str[i] !='\0'){
//            j =0;
//            k=i;
//            if(cs[j]!='\0'){
//                if (str[k] == cs[j] && str[k] != '\0'){
//
//                    j++;
//                    k++;
//                }
//            }
//            if(cs[j]=='\0'){
//
//                count++;
//            }
//        }
//
//    }
//    return 0;
//
    
//    if ( str[i] != '\0')
//        for (int i=0; str[i] != '\0'; i++)
//        {
//            j=0;
//            k=i;
////            while (cs[j] != '\0')
////            {
////                if (str[k] == cs[j] && str[k] != '\0')
////        {
////        j++;
////        k++; }
////    else break;
//            }
//            if (cs[j] == '\0')
//    count++;
//    }
//        return count;

//int Count(char* str, int i)
//{
