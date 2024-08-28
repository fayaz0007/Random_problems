grade[i]);
    }
    lowest_grade = grade[0];
    
    for ( i =1; i< 5; i++)
    {
        if(grade[i] < lowest_grade)
            lowest_grade = grade[i];
    }
    printf("your lowest grade is: %d\n",lowest_grade);
    return 0;
}