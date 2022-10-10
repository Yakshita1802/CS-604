

#include<stdio.h>
#include<string.h>
struct stud {
   char name[50];
   float score;
};
//Please do not modify struct stud
//You are only allowed to modify inside printThreeLeaders
void printThreeLeaders(struct stud studs[], int count) { //why is count here? C arrays do not carry any size indicator, we 
							  //must explicitly pass the number of elements in as an argument 

	//Please do not modify the content of studs array
	struct stud first, second, third;
	//Your code here
  char temp_stud_name[20]; // I used the temp for swapping name
  int c, temp_stud_score;  // I used the temp for swapping score

  first.score = 0; // I don't know the score of top 3 students so I start with 0
  second.score = 0;
  third.score = 0;

  //Please find the top three highest scoring students on the leaderboard
	//and print out their names and scores.
	//You are allowed to use string functions such as strcmp or strcpy
	//Although you might not need them

  strcpy(third.name," "); // I start with empty string and that find first, second, and third posiions
  for(c = 0;c < count;c++)
  {
    if (studs[c].score > third.score) // here if the student score is larger then third score swap them
  {
temp_stud_score = third.score; 
strcpy(temp_stud_name,third.name);
third.score=studs[c].score;
strcpy(third.name,studs[c].name);
  }
    if(third.score > second.score)  // here if the third score is larger then second score swap them
  {
temp_stud_score=second.score;
strcpy(temp_stud_name,second.name);
second.score=third.score;
third.score=temp_stud_score;
strcpy(second.name,third.name);
strcpy(third.name,temp_stud_name);
  }
    if(second.score > first.score)  // here if the second score is larger then first score swap them
  {
temp_stud_score=first.score;
strcpy(temp_stud_name,first.name); 
first.score=second.score;
second.score=temp_stud_score;      
strcpy(first.name,second.name);    
strcpy(second.name,temp_stud_name);  
  }
  }
   //Please do not modify the following code
	printf("Leader board:\n");
	printf("First place: %s, %.2f\n", first.name, first.score);
	printf("Second place: %s, %.2f\n", second.name, second.score);
	printf("Third place: %s, %.2f\n", third.name, third.score);
}
//Please do not modify main function
int main(void) {
	struct stud students[20];
	int stud_count = 0;
	char temp_name[50];
	float grade = 0;
	printf("Enter a test score(-1 to quit), or\n");
	printf("Enter a grade first, then a student's name\n");
	scanf("%f", &grade);
	while (grade != -1)
	{

		scanf("%s", temp_name);
		students[stud_count].score = grade;
		strcpy(students[stud_count].name, temp_name);
		stud_count ++;
		
		printf("Enter a test score(-1 to quit), or\n");
		printf("Enter a grade first, then a student's name\n");
		scanf("%f", &grade);
	
	}
	if(stud_count > 2) {
		printThreeLeaders(students, stud_count);
	}
	return 0;
}
