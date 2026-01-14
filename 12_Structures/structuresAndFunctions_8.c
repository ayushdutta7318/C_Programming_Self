/*structures and fn*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
While passing structure to fn, always pass as a pointer. passing structure by value is more often used for small structures. though we have less security of original data, but using const solves this problem
*/

struct Family {
    char name[20];
    char mother[20];
    char father[20];
    int age;
};

//structure as fn arg
bool siblings(struct Family member1, struct Family member2){
    if(strcmp(member1.mother, member2.mother) == 0){
        return true;
    }else{
        return false;
    }
}

//pointer to structure as fn arg

bool siblings2(struct Family *member1, struct Family *member2){
    if(strcmp(member1->mother, member2->mother)==0){
        return true;
    }else{
        return false;
    }
}

//we can also use const to not allow any modification of what struct pointing to
bool siblings3(struct Family const *member1, struct Family const *member2){
    if(strcmp(member1->mother, member2->mother)==0){
        return true;
    }else{
        return false;
    }
}
int main(void){

    return 0;
}

//last: return structure from a fn