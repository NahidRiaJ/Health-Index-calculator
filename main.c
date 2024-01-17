#include <stdio.h>
#include<stdlib.h>
#include <math.h>
void take_calories(FILE *file)
{
    int rice;
    int dal;
    int fish;
    int vegetables;
    int egg;
    int meat;
    int oil;
    int total_calories;

    printf("If you don't eat any element in the next sequence give 0 unit of those element.\n");
    printf("How many grams of rice did you consume? ");
    scanf("%d", &rice);
    fprintf(file,"Rice: %dGrams\n",rice);
    printf("How many grams of dal did you consume? ");
    scanf("%d", &dal);
    fprintf(file,"Dal: %dGrams\n",dal);
    printf("How many grams of fish did you consume? ");
    scanf("%d", &fish);
    fprintf(file,"Fish: %dGrams\n",fish);
    printf("How many grams of vegetables did you consume? ");
    scanf("%d", &vegetables);
    fprintf(file,"Vegetables: %d Grams\n",vegetables);
    printf("How many eggs did you consume? ");
    scanf("%d", &egg);
    fprintf(file,"Egg: %d Piece\n",egg);
    printf("How many grams of meat did you consume? ");
    scanf("%d", &meat);
    fprintf(file,"Meat: %d Grams\n",meat);
    printf("How many teaspoons of oil did you consume? ");
    scanf("%d", &oil);
    fprintf(file,"Oil: %d Teaspoons\n",oil);


    int rice_calories = rice * 4;
    int dal_calories = dal * 4;
    int fish_calories = fish * 20;
    int vegetable_calories = vegetables * 2;
    int egg_calories = egg * 78;
    int meat_calories = meat * 143;
    int oil_calories = oil * 45;


    total_calories = rice_calories + dal_calories + fish_calories + vegetable_calories + egg_calories + meat_calories + oil_calories;


    printf("Your total calorie intake for the day is %d calories.\n", total_calories);
    fprintf(file,"Your total calorie intake for the day is %d calories.\n", total_calories);



}
void average_blood_sugar(FILE *file)
{
    int num_readings;
    float total_bs = 0;
    float avg_bs;
    float bs;
    printf("Please give the equal number of blood sugar reading before and after feeding.\n\n ");
    printf("Enter the number of blood sugar readings: ");
    scanf("%d", &num_readings);

    for (int i = 1; i <= num_readings; i++)
    {
        printf("Enter blood sugar reading(mg/dl) #%d: ", i);
        scanf("%f", &bs);
        total_bs += bs;
    }

    avg_bs = total_bs / num_readings;

    printf("Average blood sugar level: %.2f\n", avg_bs);
    fprintf(file,"Average blood sugar level: %.2f\n", avg_bs);

    if (avg_bs < 70)
    {
        printf("Warning: Your blood sugar level is below the normal range. Please contact your doctor.\n");
        fprintf(file,"Warning: Your blood sugar level is below the normal range. Please contact your doctor.\n");
    }
    else if (avg_bs > 140)
    {
        printf("Warning: Your blood sugar level is above the normal range. Please contact your doctor.\n");
        fprintf(file,"Warning: Your blood sugar level is above the normal range. Please contact your doctor.\n");
    }
    else
    {
        printf("Your blood sugar level is within the normal range.\n");
        fprintf(file,"Your blood sugar level is within the normal range.\n");

    }
}
void cholesterol(FILE *file)
{
    float totalCholesterol, hdlCholesterol, ldlCholesterol, triglycerides, cholesterolRatio;


    printf("Enter your total cholesterol level (mg/dL): ");
    scanf("%f", &totalCholesterol);
    fprintf(file,"Total Cholesterol: %f\n",totalCholesterol);
    printf("Enter your HDL cholesterol level (mg/dL): ");
    scanf("%f", &hdlCholesterol);
    fprintf(file,"HDL:%.2f\n",hdlCholesterol);
    printf("Enter your LDL cholesterol level (mg/dL): ");
    scanf("%f", &ldlCholesterol);
    fprintf(file,"LDL:%.2f\n",ldlCholesterol);
    printf("Enter your triglycerides level (mg/dL): ");
    scanf("%f", &triglycerides);
    fprintf(file,"Triglycerides: %.2f\n",triglycerides);


    cholesterolRatio = totalCholesterol / hdlCholesterol;


    printf("Your cholesterol ratio is %.2f\n", cholesterolRatio);
    fprintf(file,"Your cholesterol ratio is %.2f\n", cholesterolRatio);

    if (cholesterolRatio > 5)
    {
        printf("Your cholesterol ratio is high. You should contact a doctor.\n");
        fprintf(file,"Your cholesterol ratio is high. You should contact a doctor.\n");
    }
    else if (cholesterolRatio > 3.5)
    {
        printf("Your cholesterol ratio is borderline high. You may want to discuss this with a doctor.\n");
        fprintf(file,"Your cholesterol ratio is borderline high. You may want to discuss this with a doctor.\n");
    }
    else
    {
        printf("Your cholesterol ratio is optimal.\n");
        fprintf(file,"Your cholesterol ratio is optimal.\n");
    }


}


void Blood(FILE *file)
{
    float systolic, diastolic, PP,MAP;

    printf("Enter systolic pressure: ");
    scanf("%f", &systolic);
    fprintf(file,"Systolic Pressure: %.2f",systolic);
    printf("Enter diastolic pressure: ");
    scanf("%f", &diastolic);
    fprintf(file,"Diastolic Pressure: %.2f",diastolic);

    printf("\n\nYou entered a pressure of %.2f / %.2f\n\n",systolic,diastolic);
    PP=systolic-diastolic;
    printf("Your pulse pressure is: %.2f\n",PP);
    fprintf(file,"Your pulse pressure is: %.2f\n",PP);
    if(PP>50)
    {
        printf("Your pulse pressure is HIGH.\n");
        printf("You should seek medical assistance.\n\n");
        fprintf(file,"Your pulse pressure is HIGH.\n");
        fprintf(file,"You should seek medical assistance.\n\n");
    }
    else if(PP<30)
    {
        printf("Your pulse pressure is LOW.\n");
        printf("You should seek medical assistance.\n\n");
        fprintf(file,"Your pulse pressure is LOW.\n");
        fprintf(file,"You should seek medical assistance.\n\n");
    }
    else
    {
        printf("Your pulse pressure is NORMAL.\n\n");
        fprintf(file,"Your pulse pressure is NORMAL.\n\n");
    }
    MAP= diastolic + (1/3)*PP;
    printf("Your mean arterial pressure is: %.2f\n",MAP);
    fprintf(file,"Your mean arterial pressure is: %.2f\n",MAP);
    if(MAP>100||MAP<60)
    {
        printf("You should seek medical assistance.\n\n");
        fprintf(file,"You should seek medical assistance.\n\n");

    }
    else
    {
        printf("Your mean arterial pressure is within acceptable limits.\n\n");
        fprintf(file,"Your mean arterial pressure is within acceptable limits.\n\n");
    }

}




double calculate_burned_calories(FILE *file)
{
    double sum=0;
    int k=0;


    float weight, duration, calories_burned;
    int activity;
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    fprintf(file,"weight: %.2f",weight);
    while(k==0)
    {



        printf("\nSelect the activity:\n");
        printf("1. Walking (2.5 mph)\n");
        printf("2. Desk work (sitting)\n");
        printf("3. Housework (moderate effort)\n");
        printf("4. Running (6 mph)\n");
        printf("5. Bicycling (10-12 mph)\n");
        printf("6. Swimming (freestyle)\n");
        printf("7. Aerobics\n");
        printf("8. Cricket\n");
        printf("9. Football\n");
        printf("10.If you want to stop your calculation.\n");
        printf("Enter your choice: ");
        scanf("%d", &activity);
        if(activity==10)
            break;
        printf("\nEnter the duration of the activity in minutes: ");
        scanf("%f", &duration);

        switch(activity)
        {
        case 1:
            calories_burned = duration * 2.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in walking about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in walking about %.2f minutes.\n", calories_burned,duration);
            break;
        case 2:
            calories_burned = duration * 1.3 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in desk work about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in desk work about %.2f minutes.\n", calories_burned,duration);
            break;
        case 3:
            calories_burned = duration * 3.5 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in House Work about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in House Work about %.2f minutes.\n", calories_burned,duration);
            break;
        case 4:
            calories_burned = duration * 10.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in Running about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in Running about %.2f minutes.\n", calories_burned,duration);
            break;
        case 5:
            calories_burned = duration * 8.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in Bicycling about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in Bicycling about %.2f minutes.\n", calories_burned,duration);
            break;
        case 6:
            calories_burned = duration * 10.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in Swimming about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in Swimming about %.2f minutes.\n", calories_burned,duration);
            break;
        case 7:
            calories_burned = duration * 7.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in Aerobics about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in Aerobics about %.2f minutes.\n", calories_burned,duration);
            break;
        case 8:
            calories_burned = duration * 6.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in Cricket about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in Cricket about %.2f minutes.\n", calories_burned,duration);
            break;
        case 9:
            calories_burned = duration * 8.0 * weight / 60.0;
            sum+=calories_burned;
            printf("\nYou burned an estimated %.2f calories in Football about %.2f minutes.\n", calories_burned,duration);
            fprintf(file,"\nYou burned an estimated %.2f calories in Football about %.2f minutes.\n", calories_burned,duration);
            break;

        default:
            printf("Invalid activity selected.\n");
            continue;


        }




    }
    fprintf(file,"Burned calories:%.2lf",sum);
    return sum;


}


double calculateBMI(double weight, double height)
{
    return weight / pow (height,2);
}

double increaseWeight(double bmi,double height)
{
    double temp=18.5-bmi;
    return temp*pow (height,2);
}
double reduceWeight(double bmi,double height)
{
    double temp=bmi-24.9;
    return temp*pow (height,2);
}

void displayBMIMessage(FILE *file,double bmi,double height)
{
    printf("According to World Health Organization's(WHO):\n");
    if(bmi<16)
    {
        printf("Your category is Severe Thinness.\n");
        printf("You must increase your weight at least :  %.3lf kg.\n\n\n",increaseWeight(bmi,height));
        fprintf(file,"Your category is Severe Thinness.\n");
        fprintf(file,"You must increase your weight at least :  %.3lf kg.\n\n\n",increaseWeight(bmi,height));

    }
    else if (16<=bmi&&bmi < 17)
    {
        printf("Your category is Moderate Thinness.\n");
        printf("You must increase your weight at least :  %.3lf kg.\n\n\n",increaseWeight(bmi,height));
        fprintf(file,"Your category is Moderate Thinness.\n");
        fprintf(file,"You must increase your weight at least :  %.3lf kg.\n\n\n",increaseWeight(bmi,height));

    }
    else if (bmi >= 17 && bmi <18.5)
    {
        printf("Your category is Mild Thinness.\n");
        printf("You must increase your weight at least :  %.3lf kg.\n",increaseWeight(bmi,height));
        fprintf(file,"Your category is Mild Thinness.\n");
        fprintf(file,"You must increase your weight at least :  %.3lf kg.\n",increaseWeight(bmi,height));
    }
    else if (bmi >= 18.5 && bmi <25)
    {
        printf("Your category is Normal.\n");
        printf("You  have to hold your weight as the same level.\n\n\n");
        fprintf(file,"Your category is Normal.\n");
        fprintf(file,"You  have to hold your weight as the same level.\n\n\n");

    }
    else if (bmi >= 25 && bmi <30)
    {
        printf("Your category is Overweight.\n");
        printf("You should reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));
        fprintf(file,"Your category is Overweight.\n");
        fprintf(file,"You should reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));

    }
    else if (bmi >= 30&& bmi <35)
    {
        printf("Your category is obess class I.\n");
        printf("You must reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));
        fprintf(file,"Your category is obess class I.\n");
        fprintf(file,"You must reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));

    }
    else if (bmi >= 35&& bmi <40)
    {
        printf("Your category is obess class II.\n");
        printf("You must reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));

        fprintf(file,"Your category is obess class II.\n");
        fprintf(file,"You must reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));

    }
    else if (bmi >= 40)
    {
        printf("Your category is obess class III.\n");
        printf("You are in the dengerous stage.\n");
        printf("You must reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));
        fprintf(file,"Your category is obess class III.\n");
        fprintf(file,"You are in the dengerous stage.\n");
        fprintf(file,"You must reduce your weight at least :  %.3lf kg as soon as possible.\n\n\n",reduceWeight(bmi,height));

    }
}
float calculateBMR(float weight, float height, int age, char gender)
{
    float bmr;
    if (gender == 'M')
    {
        bmr = 66.5 + (13.75 * weight) + (5.003 * height) - (6.755 * age);
    }
    else
    {
        bmr = 655.1 + (9.563 * weight) + (1.850 * height) - (4.676 * age);
    }
    return bmr;
}
// Function to calculate daily calorie needs based on physical activity level
float calcCalorieNeeds(FILE *file,float BMR, int activityLevel)
{

    float calories;
    if (activityLevel == 1)
    {
        fprintf(file,"Activity: Sedentary.\n");
        calories = BMR * 1.2;
    }
    else if (activityLevel == 2)
    {
        fprintf(file,"Activity: Lightly active.\n");
        calories = BMR * 1.375;
    }
    else if (activityLevel == 3)
    {
        fprintf(file,"Activity: Moderately active.\n");
        calories = BMR * 1.55;
    }
    else if (activityLevel == 4)
    {
        fprintf(file,"Activity: Very active.\n");
        calories = BMR * 1.725;
    }
    else if (activityLevel == 5)
    {
        fprintf(file,"Activity: Extremely active.\n");
        calories = BMR * 1.9;
    }
    return calories;
}

int main()
{
    //system("color AC");
    int choice,d,m,y,c=0;
    FILE *file;
    char name[50];
    printf("Enter Your name:");
    scanf("%s",name);

    printf("Enter date(Day/month/year):");
    scanf("%d %d %d",&d,&m,&y);
    //file=fopen(name,"a");



    printf("\n\n\n---------------------------Welcome !!!-----------------------------\n");
    printf("------------You are in the Health index calculator-----------\n\n\n");

    //fprintf(file,"\n\n\n---------------------------Welcome !!!-----------------------------\n");
    //fprintf(file,"------------You are in the Health index calculator-----------\n\n\n");

    while(1)
    {
        file=fopen(name,"a");
        if(file==(NULL))
        {
            printf("Error opening file.\n");
            return 0;
        }
        if(c==0)
        {
          fprintf(file,"NAME:%s\n",name);
          fprintf(file,"DATE:%d/%d/%d\n",d,m,y);
          c=1;
        }
        printf("-----------What kind of Health index do you want to calculate?----------------\n");
        printf("Enter 1 for BMI. \n");
        printf("Enter 2 for BMR. \n");
        printf("Enter 3 for Calculate burned calories.\n");
        printf("Enter 4 for Calculate the total calories you take per day.\n");
        printf("Enter 5 for Blood pressure and Suggest when you need to contact with doctor.\n");
        printf("Enter 6 for calculate cholesterol Index and Suggest when you need to contact with doctor.\n");
        printf("Enter 7 for calculate Average Blood sugar and Suggest when you need to contact with doctor.\n");
        printf("Enter 8 for continue.\n");
        printf("Enter 9 for exit.\n");



        scanf("%d",&choice);
        if(choice ==1)
        {
            fprintf(file,"------------------------------BMI---------------------------\n\n");
            double height,weight,bmi;
            printf("Do you know about your height in metre unit?? Enter 1 if you know your height in meter or enter 2 if you  know your height in feet/inches unit.\n");
            int c;
            scanf("%d",&c);

            if(c==1)
            {
                printf("Please enter your height(meter): ");
                scanf("%lf",&height);
                fprintf(file,"Height: %.3lf meter\n",height);

            }
            else
            {
                float f,i,s;
                printf("Enter feet of your height:");
                scanf("%f",&f);
                printf("Enter inches of your height:");
                scanf("%f",&i);
                s=f*12+i;
                height=s* 0.0254;
                fprintf(file,"Height: %lf meter\n",height);

            }
            printf("Please give your weight(kg):");

            scanf("%lf",&weight);
            fprintf(file,"Weight: %lf Kg\n",weight);
            bmi=calculateBMI(weight,height);
            printf("Your BMI is: %.3lf\n\n",bmi);
            fprintf(file," BMI is: %.3lf\n\n",bmi);
            displayBMIMessage( file,bmi, height);


        }
        else if(choice ==2)
        {
            fprintf(file,"------------------------------BMR---------------------------\n\n");
            int age,activitylevel;
            float weight,height;
            char gender;
            printf("Please enter your age(year):");
            scanf("%d",&age);
            fprintf(file,"Age: %d\n",age);
            printf("Please enter your weight(kg): ");
            scanf("%f",&weight);
            fprintf(file,"weight: %.2f\n",weight);
            printf("Do you know about your height in metre unit?? Enter 1 if you know your height in meter or enter 2 if you  know your height in feet/inches unit.\n");
            int c;
            scanf("%d",&c);
            if(c==1)
            {
                printf("Please enter your height(meter): ");
                scanf("%f",&height);
                fprintf(file,"Height: %.2f Meter\n",height);
            }
            else
            {
                float f,i,s;
                printf("Enter feet of your height:");
                scanf("%f",&f);
                printf("Enter inches of your height:");
                scanf("%f",&i);
                s=f*12+i;
                height=s* 0.0254;
                fprintf(file,"Height: %.2f Meter\n",height);

            }
            printf("Please enter your Gender M/F('M' for Male and 'F' for female): ");
            scanf(" %c", &gender);

            printf("\nNow give your activity level according to the list:\n");
            printf("1.'1' for sedentary.\n\n");
            printf("2.'2' for lightly active.\n\n");
            printf("3.'3' for moderately active.\n\n");
            printf("4.'4' for very active.\n\n");
            printf("5.'5' for extremely active.\n\n\n");
            scanf("%d",&activitylevel);

            float bmr=calculateBMR( weight,  height,  age, gender);
            printf("Your BMR :%.3f\n\n",bmr);
            fprintf(file,"BMR: %.3f\n\n",bmr);
            float cal=calcCalorieNeeds( file,bmr,  activitylevel);
            printf("Your daily needed calories: %.3f\n", cal);
            printf("If you want to keep your body fitness at the same stage ,you have to take %.3f calories daily.\n",cal);

            fprintf(file,"Your daily needed calories: %.3f\n", cal);
            fprintf(file,"If you want to keep your body fitness at the same stage ,you have to take %.3f calories daily.\n",cal);



        }
        else if(choice == 3)
        {
            fprintf(file,"------------------------------BURNED CALORIES---------------------------\n\n");
            float caln=calculate_burned_calories(file);
            printf("\n\n\nYou burned total %.3f calories at various activities in whole day.\n\n",caln);
            fprintf(file,"\n\n\nYou burned total %.3f calories at various activities in whole day.\n\n",caln);
        }
        else if(choice==4)
        {
            fprintf(file,"------------------------------TAKEN CALOERIES---------------------------\n\n");
            take_calories(file);
        }
        else if(choice==5)
        {
            fprintf(file,"------------------------------BLOOD---------------------------\n\n");
            Blood(file);

        }
        else if(choice==6)
        {
            fprintf(file,"------------------------------CHOLESTEROL---------------------------\n\n");
            cholesterol(file);
            //LDL=less than 100 mg/dL
            //HDL=More than 45 mg/dL
            //Triglycerides =less than 150 mg/dL
        }
        else if(choice==7)
        {
            fprintf(file,"------------------------------BLOOD SUGER---------------------------\n\n");
            average_blood_sugar(file);
        }
        else if(choice==8)
        {
            continue;
        }
        else if(choice==9)
        {
            printf("\n\n");

            printf("---------------------Thank you----------------------");
            fprintf(file,"\n\n---------------------Thank you----------------------");
            break;
        }
        printf("\n\n");
        fclose(file);

    }

    return 0;


}
