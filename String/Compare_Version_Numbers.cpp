/* Given two version numbers, version1 and version2, compare them.

Version numbers consist of one or more revisions joined by a dot '.'. 
Each revision consists of digits and may contain leading zeros. Every revision contains at least one character. 
Revisions are 0-indexed from left to right, with the leftmost revision being revision 0, the next revision being revision 1, 
and so on. For example 2.5.33 and 0.1 are valid version numbers.

To compare version numbers, compare their revisions in left-to-right order. 
Revisions are compared using their integer value ignoring any leading zeros. 
This means that revisions 1 and 001 are considered equal. If a version number does not specify a revision at an index, 
then treat the revision as 0. For example, version 1.0 is less than version 1.1 because their revision 0s are the same, 
but their revision 1s are 0 and 1 respectively, and 0 < 1.

Return the following:

If version1 < version2, return -1.
If version1 > version2, return 1.
Otherwise, return 0. */

#include<bits/stdc++.h>
using namespace std;

int compareVersion(char* version1, char* version2)
{
    if(!strlen(version1) || !strlen(version2) || (strcmp(version1, version2) == 0))  
        return 0;
    
    int v1MajorVersion;
    int v2MajorVersion;

    while(*version1 != '\0' || *version2 != '\0') 
    {
        if ('.' == *version1) 
            ++version1;
        if ('.' == *version2) 
            ++version2;
        if('\0' != *version1) 
            v1MajorVersion = strtol(version1, &version1, 10);
        else 
            v1MajorVersion = 0;
        if('\0' != *version2) 
            v2MajorVersion = strtol(version2, &version2, 10);
        else 
            v2MajorVersion = 0;
        if(v1MajorVersion > v2MajorVersion) 
            return 1;
        else if (v2MajorVersion > v1MajorVersion) 
            return -1;
    }
    return 0;
}

int main()
{
    char version1[10] , version2[10] ;
    cout<<"\nENTER FIRST VERSION : ";
    cin>>version1;

    cout<<"\nENTER SECOND VERSION : ";
    cin>>version2;

    cout<<compareVersion(version1,version2);
    return 0;
}