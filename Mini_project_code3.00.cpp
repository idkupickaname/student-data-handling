#include<stdio.h>
#include<stdlib.h>
#include<string.h>


	char temp_subject_code[9][9]={0},temp_branch[3];	
	char phy_subject_codes_sem_1[9][9]={"18MAT11","18PHY12","18ELE13","18CIV14","18EGDL15","18PHYL16","18ELEL17","18EGH18"};
	char phy_subject_codes_sem_2[9][9]={"18MAT21","18PHY22","18ELE23","18CIV24","18EGDL25","18PHYL26","18ELEL27","18EGH28"};                             
	char chem_subject_codes_sem_1[9][9]={"18MAT11","18CHE12","18CPS13","18ELN14","18ME15","18CHEL16","18CPL17","18EGH18"};
	char chem_subject_codes_sem_2[9][9]={"18MAT21","18CHE22","18CPS23","18ELN24","18ME25","18CHEL26","18CPL27","18EGH28"};

	int temp_marks_array[60][8],sum,average_array[8],temp_attendance_array[60][8],arr[70][6],i,x,j,q,flag1,sub;
	FILE *fp;
	int ch,counter_35=0,counter_60=0,counter_75=0,counter_85=0,counter_100=0,random1,tell_me;
    char teacher_input_branch[4],teacher_input_subjectcode[9],random,s2[6],data='%';
    int option,flag,student_user_semester,units,tens,roll_number,temp_graph[60]={},teacher_user_semester,temp_graph2[60]={};
	char password[50],USN[11],USN1[9]="1RF19",student_user_password[19],teacher_user_password[19],teacher_correct_password[19]="rvitm.password";	
	char str[240][12],pass[12],newpass[12];
	int temp,choice,m;
	
	
	int student_average_graph(int array[8],int n,char temp_subject_code[9][9],int average_array[8])
    {
    	
	
	printf("\n\n");

    printf("         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	for(i=0;i<n;i++)
		
	{
		
		if(i==0)
		 printf("        |  ");
		else 
		 printf("  ");
		for(j=0;j<array[i];j++)
		 printf("_");
		printf("\n");
		printf("%s",temp_subject_code[i]);
		if(strlen(temp_subject_code[i])<8)
		{
			for(j=0;j<(8-strlen(temp_subject_code[i]));j++)
			 printf(" ");
			
		}
		printf("| |");
		for(j=0;j<array[i];j++)
		 printf("_");
		printf("| <%d/100>\n",array[i]);
		printf("        |  ");
		for(j=0;j<average_array[i];j++)
		 printf("_");
		printf("\n");
		printf("Average ");
		printf("| |");
		for(j=0;j<average_array[i];j++)
		 printf("_");
		printf("| <%d/100>",average_array[i]);
		printf("\n");
		printf("        |\n");
		printf("        |\n");
		printf("        |");
	    
		
	}
	}
	int student_graph(int array[8],int n,char temp_subject_code[9][9],int array2[8])
    {

	
	printf("\n\n");
	printf("SUBJECT                                            MARKS                                                                    ATTENDANCE STATUS \n");

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	for(i=0;i<n;i++)
		
	{
		
		if(i==0)
		 printf("        |  ");
		else 
		 printf("  ");
		for(j=0;j<array[i];j++)
		 printf("_");
		printf("          ");
		for(j=0;j<(100-array[i]);j++)
		 printf(" ");
		printf("|"); 
		printf("\n");
		printf("%s",temp_subject_code[i]);
		if(strlen(temp_subject_code[i])<8)
		{
			for(j=0;j<(8-strlen(temp_subject_code[i]));j++)
			 printf(" ");
			
		}
	
		printf("| |");
		for(j=0;j<array[i];j++)
		 printf("_");
		printf("| <%d/100>",array[i]);
		for(j=0;j<(100-array[i]);j++)
		 printf(" ");
		printf("| %d%c\n",array2[i],data);
		printf("        |");
	}
}
	int teacher_graph(int array[],int n,char temp_branch[3],int array2[])
    {
	
	printf("\n\n");
	printf("USN                                                       MARKS                                                              ATTENDANCE STATUS\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	
	for(i=0;i<60;i++)
	{
		
		if(i==0)
		 printf("          |  ");
		else 
		printf("          |  ");
		for(j=0;j<array[i];j++)
		 printf("_");
		printf("         ");
		for(j=0;j<(100-array[i]);j++)
		 printf(" ");
		printf("|");
		printf("\n");
		if(i>=0 && i<=8)
		 printf("1RF19%s00%d| |",temp_branch,i+1);
		else 
		 printf("1RF19%s0%d| |",temp_branch,i+1);
		for(j=0;j<array[i];j++)
		 printf("_");
		printf("| <%d/100>",array[i]);

		for(j=0;j<99-array[i];j++)
		 printf(" ");
		printf("| %d%c",array2[i],data);
		printf("\n");
		
	}
}
    int student_usn()
 	{
		//Entering USN
	jump:	
		;
		
		printf("\nEnter your USN: \n");
		scanf("%s",USN);
		
		int x;
		flag=0;
		if(strlen(USN)!=10)
		{
			printf("\nIncorrect USN\n\n");
			goto jump;
		}
		for(x=0;x<5;x++)
		{
			if(USN[x]!=USN1[x])
			{
				
			 flag=1;
			 break;
		    }
		}
		if(flag==1)
		{
			printf("\nIncorrect USN\n");
			goto jump;
		}
		if((USN[5]!='I'||USN[6]!='S') && (USN[5]!='C'||USN[6]!='S')&& (USN[5]!='E'||USN[6]!='C') && (USN[5]!='M'||USN[6]!='E'))
		{
			printf("\nIncorrect USN\n");
			goto jump;
		}
		if(USN[7]!='0')
		{
			printf("\nIncorrect USN\n");
			goto jump;
		}
	    if(USN[8]>=48&&USN[8]<=54)
		 ;	
		else 
		{
		
		 printf("\nIncorrect USN\n");	
		 goto jump;
	    }
		if(USN[8]==54)
		{
			if(USN[9]>=48 && USN[9]<=54)
			 ;
			else 
			 printf("\nIncorrect USN\n");
			 goto jump;
		}
	 }
    int student_password_update()
	{
		printf("\nEnter Old Pass: ");
		scanf("%s",pass);
		//printf("\n%s\n",pass);
	
		pass[11]='\0';
			
			
	fp=fopen("password_c.csv","r");
	for(i=0;i<240;i++)
	{
		fscanf(fp,"%s\n",str[i]);
		str[i][11]='\0';	
	}
	
	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	if(USN[5]=='I')
	     		roll_number=roll_number+60;
	     	else if(USN[5]=='E')
			 	roll_number=roll_number+120;
			else if(USN[5]=='M')
			 	roll_number=roll_number+180;
	
	temp=strcmp(pass,str[roll_number]);
	
	if(temp==0)
	{
		printf("\nEnter New Password (Max 11 Character) : ");
		scanf("%s",newpass);
		newpass[11]='\0';
		strcpy(str[roll_number],newpass);
		printf("\nPassword updated\n");
	}
	else
	{
		printf("\nPassword incorrect\n");
		exit(0);
	}
	
	
	fp=fopen("password_c.csv","w");
	
		
	for(i=0;i<240;i++)
	{
		fprintf(fp,"%s\n",str[i]);
	}
	fclose(fp);
	}
	int student_password()
    {
    
    		units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	     	if(USN[5]=='I')
	     		roll_number=roll_number+60;
	     	else if(USN[5]=='E')
			 	roll_number=roll_number+120;
			else if(USN[5]=='M')
			 	roll_number=roll_number+180; 	
				 	
    		fp=fopen("password_c.csv","r");
	for(i=0;i<240;i++)
	{
		fscanf(fp,"%s\n",str[i]);
		str[i][11]='\0';	
	}
		 jump1:
		printf("\nEnter your password:\n");
		scanf("%s",student_user_password);
		//printf("%s",str[roll_number]);
		flag=strcmp(str[roll_number],student_user_password);
		if(flag==0)
		{
		
		printf("\nDo you want to update your password?\n1.Yes\n2.No\n");
		scanf("%d",&choice);
		if(choice==1)
			student_password_update();
	}
			
		else
		{
		 printf("\nIncorrect password\n");
		 goto jump1;
	    }
	}
	int student_semester()
	{
		jump4:
	    printf("\nEnter the semester data that you want to access: (1 or 2)\n");
	    scanf("%d",&student_user_semester);
	    if(student_user_semester!=1 && student_user_semester!=2)
		{
			printf("\nIncorrect semester\n\n");
			goto jump4;
		}
	}
	int teacher_password()
	{
			jump3:
		printf("\nEnter teacher password: \n");
	 	
		
		scanf("%s",teacher_user_password);
		flag=strcmp(teacher_correct_password,teacher_user_password);
		if(flag!=0)
		{
		 printf("\nIncorrect password\n\n");
		 goto jump3;
	    }
    
	}
	int teacher_branch()
	{ 
	  jump7:
	    printf("\nEnter branch of interest: \n(ECE,ME,ISE,CSE)\n");
	    scanf("%s",teacher_input_branch);
	    if(strcmp(teacher_input_branch,"ECE")!=0 &&strcmp(teacher_input_branch,"ME")!=0 &&strcmp(teacher_input_branch,"CSE")!=0 &&strcmp(teacher_input_branch,"ISE")!=0 )
	    {
	    	printf("\nInvalid branch entered\n");
	    	goto jump7;
		}
    
	}	
	int teacher_semester()
	{
	   	 jump5:	    
	    printf("\nEnter semester of interest: \n(1 or 2)\n");
	    scanf("%d",&teacher_user_semester);
	    
	    if(teacher_user_semester!=1 && teacher_user_semester!=2)
		{
			printf("\nIncorrect semester\n\n");
			goto jump5;
		}
	   }
    int student_data_transfer_from_excel()
	{
		if(option==1)
		 ;
		if(USN[5]=='I'&&student_user_semester==1)
	    {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	     	
	     	fp=fopen("phy_is_1.csv","r");
	     	
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
	     	
	     	fp=fopen("attendance_is_1.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
	     }
	     	// initialize graph function , and pass temp_graph array
				     	
		}
		else if(USN[5]=='I'&&student_user_semester==2)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	    
	     	fp=fopen("chem_is_2.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		
	     		for(j=0;j<8;j++){
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
	     	
	     	fp=fopen("attendance_is_2.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
			}
		}
		
		
		
		else if(USN[5]=='C'&&student_user_semester==1)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	     	FILE *fp;
	     	
	     	fp=fopen("phy_cs_1.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		for(j=0;j<8;j++){
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
			 
			fp=fopen("attendance_cs_1.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
			}
		}
		
		
			else if(USN[5]=='C'&&student_user_semester==2)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	    
	     	fp=fopen("chem_cs_2.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		
	     		for(j=0;j<8;j++){
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
	     	
	     	fp=fopen("attendance_cs_2.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
	     	}
	     	// initialize graph function , and pass temp_graph array			     	
		}
			else if(USN[5]=='E'&&student_user_semester==1)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	     	
	     	//open ec_phy file n copy contents in 2D temp array 
	    
	     	fp=fopen("chem_ec_1.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		
	     		for(j=0;j<8;j++){
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
	     	
	     	fp=fopen("attendance_ec_1.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
	     	}
	     	// initialize graph function , and pass temp_graph array
				     	
		}
			else if(USN[5]=='E'&&student_user_semester==2)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	    
	     	fp=fopen("phy_ec_2.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		
	     		for(j=0;j<8;j++){
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
	     	
	     	fp=fopen("attendance_ec_2.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
	        }
	     	// initialize graph function , and pass temp_graph array
				     	
		}
			else if(USN[5]=='M'&&student_user_semester==1)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	    
	     	fp=fopen("chem_me_1.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		
	     		for(j=0;j<8;j++){
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
			 }
	     	
	     	fp=fopen("attendance_me_1.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
	     	}
	     	// initialize graph function , and pass temp_graph array
				     	
		}
			else if(USN[5]=='M'&&student_user_semester==2)
		 {
	     	units=USN[9]-48;
	     	tens=USN[8]-48;
	     	roll_number=10*tens+units;
	     	roll_number--;
	    
	     	fp=fopen("phy_me_2.csv","r");
	     	
	     	for(i=0;i<60;i++){
	     		
	     		for(j=0;j<8;j++){
	     			
	     			fscanf(fp,"%d,",&temp_marks_array[i][j]);
				 }
				 
			 }
	     	
	     	fp=fopen("attendance_me_2.csv","r");
	     	for(i=0;i<60;i++)
			 {
	     		
	     		for(j=0;j<8;j++)
				 {
	     			
	     			fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				 }
			 }
			 
	     	
	    
	     	for(i=0;i<8;i++)
	     	{
			 
	     	 temp_graph[i]=temp_marks_array[roll_number][i];
	     	 temp_graph2[i]=temp_attendance_array[roll_number][i];
	     	}
	     	// initialize graph function , and pass temp_graph array
				     	
		}
	
	
		if((USN[5]=='I'&&student_user_semester==1)||(USN[5]=='C'&&student_user_semester==1))
		{
			for(i=0;i<9;i++)
			 strcpy(temp_subject_code[i],phy_subject_codes_sem_1[i]);
		}
		else if((USN[5]=='I'&&student_user_semester==2)||(USN[5]=='C'&&student_user_semester==2))
		{
			for(i=0;i<9;i++)
			 strcpy(temp_subject_code[i],chem_subject_codes_sem_2[i]);
		}
			else if((USN[5]=='E'&&student_user_semester==1)||(USN[5]=='M'&&student_user_semester==1))
		{
			for(i=0;i<9;i++)
			 strcpy(temp_subject_code[i],chem_subject_codes_sem_1[i]);
		}
			else if((USN[5]=='E'&&student_user_semester==2)||(USN[5]=='M'&&student_user_semester==2))
		{
			for(i=0;i<9;i++)
			 strcpy(temp_subject_code[i],phy_subject_codes_sem_2[i]);
		}
	} 
	int  teacher_subject_code_input_validation()
	{
	  	jump6:
	    printf("\nEnter subject code:\n");
	    scanf("%s",teacher_input_subjectcode);
	    
	    flag1=0;
	    
	    	    if((strcmp("ISE",teacher_input_branch)==0)||(strcmp("CSE",teacher_input_branch)==0)&&(teacher_user_semester==2))
					{
						for(i=0;i<9;i++)
						{	if(strcmp(teacher_input_subjectcode,chem_subject_codes_sem_2[i])==0)
								{
									flag1=1;
									sub=i;
									break;
									
								}
						}
					}
					
				if((strcmp("ISE",teacher_input_branch)==0)||(strcmp("CSE",teacher_input_branch)==0)&&(teacher_user_semester==1))
					{
						for(i=0;i<9;i++)
						{	if(strcmp(teacher_input_subjectcode,phy_subject_codes_sem_1[i])==0)
								{
									flag1=1;
									sub=i;
									break;
									
								}
						}
					}
	
				
				else if((strcmp("ECE",teacher_input_branch)==0||strcmp("ME",teacher_input_branch)==0)&&(teacher_user_semester==1))
					{
						for(i=0;i<9;i++)
						{	if(strcmp(teacher_input_subjectcode,chem_subject_codes_sem_1[i])==0)
								{
									flag1=1;
									sub=i;
									break;
								}
						}
					}
		    		else if((strcmp("ECE",teacher_input_branch)==0||strcmp("ME",teacher_input_branch)==0)&&(teacher_user_semester==2))
					{
						for(i=0;i<9;i++)
						{	if(strcmp(teacher_input_subjectcode,phy_subject_codes_sem_2[i])==0)
								{
									flag1=1;
									sub=i;
									break;
								}
						}
					}
					
					
					if(flag1==0)
					{					
						printf("\nInvalid subject code\n\n");
						goto jump6;
			        }	
	}
	int teacher_data_transfer_from_excel()
	{
		 if(strcmp(teacher_input_branch,"CSE")==0 &&teacher_user_semester==1)
				    {	
				    	fp=fopen("phy_cs_1.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
				    			
							}
						}
							fp=fopen("attendance_cs_1.csv","r");
	                  	for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
				    	
				    	for(i=0;i<60;i++)
				    	{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
				    	 temp_graph2[i]=temp_attendance_array[i][sub];
				        }
					}
					
					
					else if(strcmp(teacher_input_branch,"CSE")==0 &&teacher_user_semester==2)
				    {
				    	fp=fopen("chem_cs_2.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
						fp=fopen("attendance_cs_2.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					    temp_graph2[i]=temp_attendance_array[i][sub];
				     }
				}
					
					
					else if(strcmp(teacher_input_branch,"ISE")==0 &&teacher_user_semester==1)
				    {
				    	fp=fopen("phy_is_1.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
							fp=fopen("attendance_is_1.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					     temp_graph2[i]=temp_attendance_array[i][sub];
				        }
				    
					}
					
					
					else if(strcmp(teacher_input_branch,"ISE")==0 &&teacher_user_semester==2)
				    {
				    	fp=fopen("chem_is_2.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
				    		fp=fopen("attendance_is_2.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					     temp_graph2[i]=temp_attendance_array[i][sub];
				        }
				    	
					}
					
					
					else if(strcmp(teacher_input_branch,"ECE")==0 &&teacher_user_semester==1)
				    {
				    	fp=fopen("chem_ec_1.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
				    	
				        	fp=fopen("attendance_ec_1.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					    temp_graph2[i]=temp_attendance_array[i][sub];
				        }
					}
					
					
					else if(strcmp(teacher_input_branch,"ECE")==0 &&teacher_user_semester==2)
				    {
				    	fp=fopen("phy_ec_2.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
				    		fp=fopen("attendance_ec_2.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					    temp_graph2[i]=temp_attendance_array[i][sub];
				        }
					}
					
					
					else if(strcmp(teacher_input_branch,"ME")==0 &&teacher_user_semester==1)
				    {
				    	fp=fopen("chem_me_1.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
				        	fp=fopen("attendance_me_1.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					    temp_graph2[i]=temp_attendance_array[i][sub];
				        }
					}
					
					
					else if(strcmp(teacher_input_branch,"ME")==0 &&teacher_user_semester==2)
				    {
				    	fp=fopen("phy_me_2.csv","r");
				    	
				    	for(i=0;i<60;i++){
				    		for(j=0;j<8;j++){
				    			
				    			fscanf(fp," %d, ",&temp_marks_array[i][j]);
							}
						}
				        	fp=fopen("attendance_me_2.csv","r");
							for(i=0;i<60;i++)
			           {
	     		
	     	             	for(j=0;j<8;j++)
				           {
	     			
	     		          	fscanf(fp,"%d,",&temp_attendance_array[i][j]);
				            }
			             }
						for(i=0;i<60;i++)
						{
						
				    	 temp_graph[i]=temp_marks_array[i][sub];
					    temp_graph2[i]=temp_attendance_array[i][sub];
				        }
					}
	}
	int  teacher_display_functionality()
	{
	  if(teacher_input_branch[0]=='C')
		strcpy(temp_branch,"CS");
					 
	else if(teacher_input_branch[0]=='I')
	     strcpy(temp_branch,"IS");
	else if(teacher_input_branch[0]=='E')
	     strcpy(temp_branch,"EC");
	else if(teacher_input_branch[0]=='M')
		 strcpy(temp_branch,"ME");
	teacher_graph(temp_graph,60,temp_branch,temp_graph2);
					for(i=0;i<60;i++)
					{
						if(temp_marks_array[i][j]<=35 )
							counter_35++;
							
						if(temp_marks_array[i][j]>85 ) 
							counter_100++;
							
						if(temp_marks_array[i][j]>35 && temp_marks_array[i][j]<=60)
							counter_60++;
							
						if(temp_marks_array[i][j]>60 && temp_marks_array[i][j]<=75)
							counter_75++;
							
						if(temp_marks_array[i][j]>75 && temp_marks_array[i][j]<=85)
							counter_85++;			
									
					}
					
						
			        printf("\n\n");
				    printf("                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
				    printf("                        |          Marks range           |             Frequencies            |\n");
				    printf("                        |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
				    printf("                        |            00-35               |                 %2d                 |\n",counter_35);
				    printf("                        |            35-60               |                 %2d                 |\n",counter_60);
				    printf("                        |            60-75               |                 %2d                 |\n",counter_75);
				    printf("                        |            75-85               |                 %2d                 |\n",counter_85);
				    printf("                        |            85-100              |                 %2d                 |\n",counter_100);
				    printf("                        |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");	
	}
	int student_display_functionality()
	{
		scanf("%d",&tell_me);
		if(tell_me==1)
		{
		
		printf("\nYour data is as follows:\n");
		student_graph(temp_graph,8,temp_subject_code,temp_graph2);
	    }
	    else
	    {
		
			for(j=0;j<8;j++)
			{
					   sum=0;
	  				for(i=0;i<60;i++)
					{
						sum=sum+temp_marks_array[i][j];
					}
						average_array[j]=sum/60;
			}
			student_average_graph( temp_graph,8,temp_subject_code,average_array);
	    }
		
	}
 
	
	int main()
	{
	
    
	// Checking if teacher or student
	jump8:
	printf("Welcome to RV Institute of Technology and Management\n\nPress any key to continue:\n");
	scanf("%c",&random);
	printf("\nEnter:\n->1. If you are a student\n->2. If you are a teacher\n");	
	scanf("%d",&option);
	//Student option
	if(option==1)
	{
		//Input USN and verify if USN is valid
		student_usn();
		// Input password and check if password is correct
		student_password(); 
		//Input Semester and verify if semester is valid
		student_semester(); 
	    //Transfer of data from excel sheet to 2D array
	    student_data_transfer_from_excel();
	    
		printf("\n\nEnter\n1. If you want to view your data\n2. If you want to compare your data with the class.\n");
		//Initializing graph and display functionality
		student_display_functionality();	
    }
	//Teacher option
	else if(option==2)
	{	
     //Input password and validate
     teacher_password();
     //Input branch and verify
     teacher_branch();
     //Input semester and verify
     teacher_semester();
     //Input subject code and verify
     teacher_subject_code_input_validation();
     //teacher data transfer from excel
     teacher_data_transfer_from_excel();
    //teacher display functionality
     teacher_display_functionality();
     			
	}
	printf("\n\n\nEnter:\n1.To exit\n2.Any key to go back to the menu\n");	
	scanf("%d",&random1);
	if(random1==1)
		exit(0);
	else	
	 goto jump8;	
	
	}





	

