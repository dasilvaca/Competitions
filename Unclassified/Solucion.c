#include <stdio.h>
//#include<string.h>

/* typedef struct skater {const char *pName; double Points;} SKATER
   typedef struct judge {const char *pName;SKATER Skaters[10];} JUDGE;
   Write a function with prototype SKATER *EXAM (JUDGE *pJudges, int nJudges)
   where pJudges points to an array with length nJudges, for example

   JUDGE Competition[]={
       {"John Smith",{{"Mary Cook", 5.9}, {"Nancy Gardener", 5.7}, {"Lindsay Weaver", 5.2}, {"Jane Clerk", 5.4}, {"Joan Singer", 5.3}}},
       {"Richard Farmhand",{{"Nancy Gardener", 5.9}, {"Mary Cook", 5.4}, {"Joan Singer", 5.3}{"lindsay Weaver", 4.9},{"Jane Clerk", 5.1}}},
       {"Elizabeth Sailor",{{"Jane Clerk", 4.8},{"Joan Singer", 5.3}, {"Nancy Gardener", 5.1}{"Lindsay Weaver", 5.0}, {"Mary Cook", 5.7}}},
       {"Agatha Lawyer", {{"Joan Singer", 5.5},{"mary Cook", 5.5}, {"Nancy Gardener", 5.4}, {"Lindsay Weaver", 5.3}, {"Jane Clerk", 4.7}}},
       {"Clara Baker", {{"Lindsay Weaver", 5.3}, {"Lindsay Weaver", 5.5}, {"Jane Clerk", 5.6}, {"Mary Cook", 5.3}, {"Joan Singer", 5.3}, {"Nancy Gardener", 5.6}}};

   The names of Skater are everywehere the same but their order in input structs may be different. The number of skaters may be less than 10(in our example it is 5). The
   final points of a skater is the average from points given by each of the judges. The highest and lower points, however, are discarded.
   The output value is the pointer to struct presenting the winner (name and final points). If some of the input values is zero, the return value is also zero.
   Write also main to test the code and print the results.
    */

typedef struct skater {
    const char *pName;
    double Points;
} SKATER;

typedef struct judge {
    const char *pName;
    SKATER Skaters[10];
} JUDGE;

SKATER *EXAM (JUDGE *pJudges, int nJudges);

JUDGE Competition[]={
        {"John Smith",{{"Mary Cook", 5.9}, {"Nancy Gardener", 5.7}, {"Lindsay Weaver", 5.2}, {"Jane Clerk", 5.4}, {"Joan Singer", 5.3}}},
        {"Richard Farmhand",{{"Nancy Gardener", 5.9}, {"Mary Cook", 5.4}, {"Joan Singer", 5.3}, {"lindsay Weaver", 4.9}, {"Jane Clerk", 5.1}}},
        {"Elizabeth Sailor",{{"Jane Clerk", 4.8}, {"Joan Singer", 5.3}, {"Nancy Gardener", 5.1}, {"Lindsay Weaver", 5.0}, {"Mary Cook", 5.7}}},
        {"Agatha Lawyer", {{"Joan Singer", 5.5}, {"Mary Cook", 5.5}, {"Nancy Gardener", 5.4}, {"Lindsay Weaver", 5.3}, {"Jane Clerk", 4.7}}},
        {"Clara Baker", {{"Lindsay Weaver", 5.3}, {"Jane Clerk", 5.6}, {"Mary Cook", 5.3}, {"Joan Singer", 5.3}, {"Nancy Gardener", 5.6}}}
};



int main(){
    //printf("xd");
    int nJudges = 5;
    SKATER *winner = EXAM(Competition, nJudges);
    printf("The winner is %s, with the average score of: %lf", winner->pName, winner->Points);
    return 0;
}

SKATER *EXAM (JUDGE *pJudges, int nJudges){
    JUDGE qualifications = *pJudges, min_qualifications = *pJudges, max_qualifications = *pJudges;
    for(int i = 1; i < nJudges; i++){
        SKATER *actualSkaterList = pJudges[i].Skaters;
        for(int j = 0; j <10; j++){
            if (actualSkaterList[j].pName){
                for(int k = 0; k < 10 && qualifications.Skaters[k].pName; k++){
                    if(qualifications.Skaters[k].pName){
                        if(qualifications.Skaters[k].pName ==  actualSkaterList[j].pName){
                            qualifications.Skaters[k].Points += actualSkaterList[j].Points;
                            if (min_qualifications.Skaters[k].Points > actualSkaterList[j].Points) min_qualifications.Skaters[k].Points = actualSkaterList[j].Points;
                            if (max_qualifications.Skaters[k].Points < actualSkaterList[j].Points) max_qualifications.Skaters[k].Points = actualSkaterList[j].Points;
                            break;
                        }
                    } else break;

                }
            } else break;
        }
    }
    SKATER *max_average = qualifications.Skaters;
    for (int i = 0; i < 10; i++){
        if (qualifications.Skaters[i].pName){
            qualifications.Skaters[i].Points = qualifications.Skaters[i].Points - (min_qualifications.Skaters[i].Points + max_qualifications.Skaters[i].Points);
            qualifications.Skaters[i].Points /= (nJudges-2);
            if (qualifications.Skaters[i].Points > max_average->Points) max_average = &qualifications.Skaters[i];
        } else break;
    }
    return max_average;

}