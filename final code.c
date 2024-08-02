
//TITLE:   FIND YOUR DOCTOR.
//AUTHOR:  K.KAVYA

#include <stdio.h>
#include <string.h>

// Function prototypes
void displayDoctorInfo(int choice);
void doctor1(int choice);
void doctor2(int choice);
void doctor3(int choice);
void doctor4(int choice);
void doctor5(int choice);
void doctor6(int choice);
void doctor7(int choice);
void doctor8(int choice);
void doctor9(int choice);


void displayDoctorInfo(int choice)
{
    switch (choice)
    {
        case 1:
            printf("***********************************************************");
            printf("\nName: Dr K.Srinivas   M.S.(OBG)FMAS");
            printf("\n");
            printf("\nExperience: 12 yrs");
            printf("\n");
            printf("\nConsultation fee: Rs.350");
            printf("\n");
            printf("\nTimings: 9:00AM-12:00PM");
            printf("\n");
            printf("\nLocation: Kukatpally, Hyderabad");
            printf("\n");
            printf("\nContact: 9949456927");
            printf("\n");
            printf("\n***********************************************************");
            break;

        case 2:
            printf("***********************************************************");
            printf("\nName: Dr K.karthik Kumar  AuD");
            printf("\n");
            printf("\nExperience: 5 yrs");
            printf("\n");
            printf("\nConsultation fee: Rs.500");
            printf("\n");
            printf("\nTimings: 1:00PM-3:00PM");
            printf("\n");
            printf("\nLocation: lashkar bazar, hanmakonda");
            printf("\n");
            printf("\nContact: 9885479288");
            printf("\n");
            printf("***********************************************************");
            break;

        case 3:
            printf("***********************************************************");
            printf("\nName: Dr K.Kishan MS");
            printf("\n");
            printf("\nExperience: 9 yrs");
            printf("\n");
            printf("\nConsultation fee: Rs.750");
            printf("\n");
            printf("\nTimings: 6:00PM-9:00PM");
            printf("\n");
            printf("\nLocation: kakaji colony, hnk");
            printf("\n");
            printf("\nContact: 8333893420");
            printf("\n");
            printf("***********************************************************");
            break;

        case 4:
            printf("***********************************************************");
            printf("\nName: Dr K.Venu Gopal  MBBS,DO");
            printf("\n");
            printf("\nExperience: 8 yrs");
            printf("\n");
            printf("\nConsultation fee: Rs.550");
            printf("\n");
            printf("\nTimings: 1:00pm-4:00");
            printf("\n");
            printf("\nLocation: hyd");
            printf("\n");
            printf("\nContact:9440461203");
            printf("\n");
            printf("***********************************************************");
            break;

        case 5:
            printf("***********************************************************");
            printf("\nName: Dr K.Ramesh FACC");
            printf("\n");
            printf("\nExperience: 10 yrs");
            printf("\n");
            printf("\nConsultation fee: Rs.650");
            printf("\n");
            printf("\nTimings: 9:00am-12:00pm");
            printf("\n");
            printf("\nLocation: karimnagar");
            printf("\n");
            printf("\nContact: 9849395874");
            printf("\n");
            printf("***********************************************************");
            break;

        default:
            printf("Invalid choice!");
    }
}
void doctor1(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr K.Raju M.S. (OBG) FMAS");
					  	printf("\n");
                			printf("\n Experience:5 yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.500");
                			printf("\n");
                			printf("\n Timings:9:00am-3:00pm");
                			printf("\n");
                			printf("\n Location:kukatpally,hyd");
                			printf("\n");
                			printf("\n Contact:9866442298");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Ajay FFR");
                			printf("\n");
                			printf("\n Experience:10 yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.350");
                			printf("\n");
                			printf("\n Timings: 9:00am-12:00pm");
                			printf("\n");
                			printf("\n Location:Bus depot road,hnk");
                			printf("\n");
                			printf("\n Contact:8074216255");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 3:
                			printf("\n Name :Dr S.Ravi MRCS");
                			printf("\n");
                			printf("\n Experience:5 yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.400");
                			printf("\n");
                			printf("\n Timings:1:00pm-4:00pm");
                			printf("\n");
                			printf("\n Location:Balasamudhram,hnk");
                			printf("\n");
                			printf("\n Contact:9440446269");
                			printf("\n");
                			
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Srinu DPM");
                			printf("\n");
                			printf("\n Experience:6yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.500");
                			printf("\n");
                			printf("\n Timings:7:00pm-9:00pm");
                			printf("\n");
                			printf("\n Location:Vijaya talkies rd,Hnk");
                			printf("\n");
                			printf("\n Contact:9000338947");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Prabhakar DVM");
                			printf("\n");
                			printf("\n Experience:10yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-9:00pm");
                			printf("\n");
                			printf("\n Location:Naimnagar,Hnk");
                			printf("\n");
                			printf("\n Contact:9494466393");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
      				  default:
            				printf("Invalid choice!");
                			
	}
}
void doctor2(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr K.Deepthi MS");
					  	printf("\n");
                			printf("\n Experience:5yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.300");
                			printf("\n");
                			printf("\n Timings:6:00pm-9:00pm");
                			printf("\n");
                			printf("\n Location:Gopalpur,Hnk");
                			printf("\n");
                			printf("\n Contact:9959415670");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Kavya MBBS MS");
                			printf("\n");
                			printf("\n Experience:6yrs");
                			printf("\n");
                			printf("\n Consultation fee:rs.400");
                			printf("\n");
                			printf("\n Timings:12:00pm-4:00pm");
                			printf("\n");
                			printf("\n Location:Mulugu rd,Hnk");
                			printf("\n");
                			printf("\n Contact:9849965982");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Meghana MBBS");
                			printf("\n");
                			printf("\n Experience:7yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:stadium rd,Hyd");
                			printf("\n");
                			printf("\n Contact:9573334700");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Akshara PharmD");
                			printf("\n");
                			printf("\n Experience:8yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.450");
                			printf("\n");
                			printf("\n Timings:6:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Basith nagar,Hnk");
                			printf("\n");
                			printf("\n Contact:9346970310");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Chandana DDS");
                			printf("\n");
                			printf("\n Experience:5yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.250");
                			printf("\n");
                			printf("\n Timings:3:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Hanuman temple rd,Hnk");
                			printf("\n");
                			printf("\n Contact:9866201030");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
      				  default:
          				  printf("Invalid choice!");
	}
}
void doctor3(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr P.Sujatha MBBS");
					  	printf("\n");
                			printf("\n Experience:3yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.200");
                			printf("\n");
                			printf("\n Timings:2:00pm-6:00pm");
                			printf("\n");
                			printf("\n Location:NGO's colony,Hnk");
                			printf("\n");
                			printf("\n Contact:9542104102");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Shailaja M.S. MD");
                			printf("\n");
                			printf("\n Experience:2yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.300");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:SVP rd,Hnk");
                			printf("\n");
                			printf("\n Contact:1878-3566682");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr P.Pushpa GP");
                			printf("\n");
                			printf("\n Experience:6yrs");
                			printf("\n");
                			printf("\n Consultation fee:");
                			printf("\n");
                			printf("\n Timings:1:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Vijaya Talkies rd,Hnk");
                			printf("\n");
                			printf("\n Contact:9000521789");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr M.shireesha DPA");
                			printf("\n");
                			printf("\n Experience:8yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Alkapuri cross rd,Nagole");
                			printf("\n");
                			printf("\n Contact:9640108102");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                		
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr M.Sridhar DPH");
                			printf("\n");
                			printf("\n Experience:15yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.400");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Bandlaguda Jagir-Kismatpura");
                			printf("\n");
                			printf("\n Contact:9908690425");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
       				 default:
           				 printf("Invalid choice!");
	}
}
void doctor4(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr Y.Ravinder MBBS,PhD");
					  	printf("\n");
                			printf("\n Experience:12 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.200");
                			printf("\n");
                			printf("\n Timings:7:00pm-8:00pm ");
                			printf("\n");
                			printf("\n Location:hnk");
                			printf("\n");
                			printf("\n Contact:8019965773");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr Y.Narender DD");
                			printf("\n");
                			printf("\n Experience:10 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.350");
                			printf("\n");
                			printf("\n Timings:3:00pm-5:00pm");
                			printf("\n");
                			printf("\n Location:chilpur");
                			printf("\n");
                			printf("\n Contact:8978247365");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr Y.Ramesh JD");
                			printf("\n");
                			printf("\n Experience:9 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.400");
                			printf("\n");
                			printf("\n Timings:2:00pm-4:00pm");
                			printf("\n");
                			printf("\n Location:hyd");
                			printf("\n");
                			printf("\n Contact:9505695059");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr M.Raju ScD");
                			printf("\n");
                			printf("\n Experience:7 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.300");
                			printf("\n");
                			printf("\n Timings:10:00am-12:30pm");
                			printf("\n");
                			printf("\n Location:ghunpur");
                			printf("\n");
                			printf("\n Contact:9440976253");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr N.Ravi kumar ThD");
                			printf("\n");
                			printf("\n Experience:12 yrs");
                			printf("\n");
                			printf("\n Consultation fee:310");
                			printf("\n");
                			printf("\n Timings:9:30am-11:00am");
                			printf("\n");
                			printf("\n Location:wadapalli");
                			printf("\n");
                			printf("\n Contact:9703134343");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
        				default:
           				 printf("Invalid choice!");
	}
}
void doctor5(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr V.Raju kumar MBBS,FRCS");
					  	printf("\n");
                			printf("\n Experience:4 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.400");
                			printf("\n");
                			printf("\n Timings:2:00pm-4:30pm");
                			printf("\n");
                			printf("\n Location:janagoan");
                			printf("\n");
                			printf("\n Contact:9866197588");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Pranay Kumar Gen. Surgeon");
                			printf("\n");
                			printf("\n Experience:5yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Yousufguda");
                			printf("\n");
                			printf("\n Contact:7386012949");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Vanitha MD");
                			printf("\n");
                			printf("\n Experience:6yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-10:00pm");
                			printf("\n");
                			printf("\n Location:Shaikpet rd,Hyd");
                			printf("\n");
                			printf("\n Contact:7670939274");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Hannah DO");
                			printf("\n");
                			printf("\n Experience:3yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.250");
                			printf("\n");
                			printf("\n Timings:6:00pm-12:00am");
                			printf("\n");
                			printf("\n Location:Vijaypur colony,Uppal");
                			printf("\n");
                			printf("\n Contact:7981911738");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr E.Sameera MBBS,MD");
                			printf("\n");
                			printf("\n Experience:4yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:9:00am-12:00pm");
                			printf("\n");
                			printf("\n Location:Peerzadiguda Boduppal");
                			printf("\n");
                			printf("\n Contact:7661030265");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
       				 default:
           				 printf("Invalid choice!");
	}
}
void doctor6(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :D.Pavani DNB");
					  	printf("\n");
                			printf("\n Experience:2yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.200");
                			printf("\n");
                			printf("\n Timings:12:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Ibrahimpatnam");
                			printf("\n");
                			printf("\n Contact:8688268588");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Sai Charan FRGUHS");
                			printf("\n");
                			printf("\n Experience:8yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.200");
                			printf("\n");
                			printf("\n Timings:5:00pm-10:00pm");
                			printf("\n");
                			printf("\n Location:Jubile Hills ,Hyd");
                			printf("\n");
						printf("\n Contact:9866571003");
						printf("\n");
						break;
                			
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Aniritha MBBS,FRCS");
                			printf("\n");
                			printf("\n Experience:3yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.300");
                			printf("\n");
                			printf("\n Timings:2:00pm-5:00pm");
                			printf("\n");
                			printf("\n Location:Kpbh colony,Hyd");
                			printf("\n");
                			printf("\n Contact:9550048334");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                		
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Kushi GP");
                			printf("\n");
                			printf("\n Experience:2yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:3:00pm-6:00pm:");
                			printf("\n");
                			printf("\n Location:Peerzadiguda,Boduppal");
                			printf("\n");
                			printf("\n Contact:99124444343");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                   		case 5:
                   			printf("***********************************************************");
                			printf("\n Name :Dr M.Harshini GP");
                			printf("\n");
                			printf("\n Experience:1yr");
                			printf("\n");
                			printf("\n Consultation fee:Rs.400");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Hi-tech city,Hyd");
                			printf("\n");
                			printf("\n Contact:9912424343");
                			printf("\n");
                			printf("***********************************************************");
						 break;
						 
        				default:
           				 printf("Invalid choice!");  
	}
}
void doctor7(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr B.Suma Sree LSA");
					  	printf("\n");
                			printf("\n Experience:9yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.300");
                			printf("\n");
                			printf("\n Timings:3:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Bakaram");
                			printf("\n");
                			printf("\n Contact:8106603352");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr E.Prashanth MS");
                			printf("\n");
                			printf("\n Experience:5yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.600");
                			printf("\n");
                			printf("\n Timings:5:00pm-9:00pm");
                			printf("\n");
                			printf("\n Location:Dilsukhnagar");
                			printf("\n");
                			printf("\n Contact:7093701577");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                		
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr V.Ashish MBBS");
                			printf("\n");
                			printf("\n Experience:3yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:LB nagar");
                			printf("\n");
                			printf("\n Contact:8522023409");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr R.Rohan MD");
                			printf("\n");
                			printf("\n Experience:1yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.250");
                			printf("\n");
                			printf("\n Timings:1:00pm-4:00pm");
                			printf("\n");
                			printf("\n Location:Vanasthalipuram");
                			printf("\n");
                			printf("\n Contact:9652395413");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr V.Chaithanyas FFR");
                			printf("\n");
                			printf("\n Experience:5yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.350");
                			printf("\n");
                			printf("\n Timings:7:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Medpalli");
                			printf("\n");
                			printf("\n Contact:95336666543");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
       				 default:
          				  printf("Invalid choice!");
	}
}
void doctor8(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr Y.Ramya MRCOG");
					  	printf("\n");
                			printf("\n Experience:3yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.300");
                			printf("\n");
                			printf("\n Timings:5:00pm-10:00pm");
                			printf("\n");
                			printf("\n Location:Kazipet");
                			printf("\n");
                			printf("\n Contact:8179220923");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr T.Sai Sri Vasuki MBBS,MS,FFR");
                			printf("\n");
                			printf("\n Experience:6yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Siddipet");
                			printf("\n");
                			printf("\n Contact:8179220924");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                		
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr G.Harshitha DD");
                			printf("\n");
                			printf("\n Experience:10yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.200");
                			printf("\n");
                			printf("\n Timings:3:00pm-6:00pm");
                			printf("\n");
                			printf("\n Location:Amberpet");
                			printf("\n");
                			printf("\n Contact:8886510108");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Navya DPA");
                			printf("\n");
                			printf("\n Experience:15yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.350");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Madinaguda");
                			printf("\n");
                			printf("\n Contact:9859111444");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :Dr D.Ruchitha DPH");
                			printf("\n");
                			printf("\n Experience:9yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.400");
                			printf("\n");
                			printf("\n Timings:7:00pm-10:00pm");
                			printf("\n");
                			printf("\n Location:Secundrabad");
                			printf("\n");
                			printf("\n Contact:9949893130");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
       				 default:
           				 printf("Invalid choice!");
	}
}
void doctor9(int choice)
{
	switch(choice)
	{
					case 1:
						printf("***********************************************************");
					  	printf("\n Name :Dr Ch.Eshwari DPhil");
					  	printf("\n");
                			printf("\n Experience:15yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:6:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Gachibowli");
                			printf("\n");
                			printf("\n Contact:9700349143");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 2:
                			printf("***********************************************************");
                			printf("\n Name :Dr S.Nirmala MBBS,PhD");
                			printf("\n");
                			printf("\n Experience:4yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.360");
                			printf("\n");
                			printf("\n Timings:5:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Nachaaram");
                			printf("\n");
                			printf("\n Contact:9440759555");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 3:
                			printf("***********************************************************");
                			printf("\n Name :Dr K.Ramya PsyD");
                			printf("\n");
                			printf("\n Experience:3yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.200");
                			printf("\n");
                			printf("\n Timings:5:00pm-9:00pm");
                			printf("\n");
                			printf("\n Location:Lothkunta Alwal");
                			printf("\n");
                			printf("\n Contact:9703711222");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 4:
                			printf("***********************************************************");
                			printf("\n Name :Dr P.Santhosh ScD");
                			printf("\n");
                			printf("\n Experience:5 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.350");
                			printf("\n");
                			printf("\n Timings:6:00pm-8:00pm");
                			printf("\n");
                			printf("\n Location:Maredpally");
                			printf("\n");
                			printf("\n Contact:9949325841");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
                		case 5:
                			printf("***********************************************************");
                			printf("\n Name :dr S.Keerthi ThD");
                			printf("\n");
                			printf("\n Experience:15 yrs");
                			printf("\n");
                			printf("\n Consultation fee:Rs.500");
                			printf("\n");
                			printf("\n Timings:6:00pm-10:00pm");
                			printf("\n");
                			printf("\n Location:Ramanthapur");
                			printf("\n");
                			printf("\n Contact:9000380363");
                			printf("\n");
                			printf("***********************************************************");
                			break;
                			
        				default:
            				printf("Invalid choice!");
	}
}


void displayHospitalInfo(int choice)
{
    switch (choice)
    
    {
        case 1:
            printf("\n1. RAINBOW");
            printf("\n2. DOLPHIN");
            printf("\n3. AZARA");
            printf("\n4. AIMS");
            printf("\n5. NIMS");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    displayDoctorInfo(1);
                    break;

                case 2:
                    displayDoctorInfo(2);
                    break;

                case 3:
                    displayDoctorInfo(3);
                    break;

                case 4:
                    displayDoctorInfo(4);
                    break;

                case 5:
                    displayDoctorInfo(5);
                    break;

                default:
                    printf("Invalid choice!");
            }
            break;
}
}
void diseasehospital1(int choice)
{
	switch(choice)
	{
		case 2:
		      printf("\n1.PRASHANTHI");
                printf("\n2.KIMS");
                printf("\n3.AMBANI");
                printf("\n4.RAINBOW");
                printf("\n5.CHELMADA");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	case 1:
                		doctor1(1);
                		break;
                	case 2:
                		doctor1(2);
                		break;
                	case 3:
                		doctor1(3);
                		break;
                	case 4:
                		doctor1(4);
                		break;
                	case 5:
                		doctor1(5);
                		break;
                    default:
				printf("Invalid choice");	
                		
			 }
			 break;
	}
}
void diseasehospital2(choice)
{
	switch(choice)
	{
		case 3:
			 printf("\n1.MEDICOVER");
                printf("\n2.ORCHID");
                printf("\n3.OMEGA");
                printf("\n4.STAR HEALTH");
                printf("\n5.KARTHIKEYA");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
              		case 1:
            	  		doctor2(1);
                		break;
                	case 2:
                		doctor2(2);
                		break;
                	case 3:
                		doctor2(3);
                		break;
                	case 4:
                		doctor2(4);
                		break;
                	case 5:
                		doctor2(5);
                		break;
				default:
				printf("Invalid choice");	
			 }
	}
}
void diseasehospital3(choice)
{
	switch(choice)
	{
		case 4:
			 printf("\n1.ABHAYA HOSPITAL");
                printf("\n2.SHATABDHI HOSPITAL");
                printf("\n3.GLOBAL MAXX HOSPITAL");
                printf("\n4.KPR MULTISPECIALITY HOSPITAL");
                printf("\n5.SRI KRISHNA HOSPITAL");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	case 1:
            	  		doctor3(1);
                		break;
                	case 2:
                		doctor3(2);
                		break;
                	case 3:
                		doctor3(3);
                		break;
                	case 4:
                		doctor3(4);
                		break;
                	case 5:
                		doctor3(5);
                		break;
				default:
				printf("Invalid choice")	;
			 }
	}
}
void diseasehospital4(choice)
{
	switch(choice)
	{
		case 5:
			 printf("\n1.SUNRISE HOSPITAL");
                printf("\n2.GOODLIFE");
                printf("\n3.GEMINI HOSPITAL");
                printf("\n4.KAKATIYA MULTISPECIALITY HOSPITAL");
                printf("\n5.OMEGA HOSPITALS");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	
                	case 1:
            	  		doctor4(1);
                		break;
                	case 2:
                		doctor4(2);
                		break;
                	case 3:
                		doctor4(3);
                		break;
                	case 4:
                		doctor4(4);
                		break;
                	case 5:
                		doctor4(5);
                		break;
				default:
				printf("Invalid choice")	;	
			 }
	}
}
void diseasehospital5(choice)
{
	switch(choice)
	{
		case 6:
			 printf("\n1.KRISHNA HOSPITAL");
                printf("\n2.RIDHI HOSPITAL");
                printf("\n3.LAXMINARAYANA HOSPITAL");
                printf("\n4.HOPE HOSPITAL");
                printf("\n5.APOLLO HOSPITALS");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	case 1:
            	  		doctor5(1);
                		break;
                	case 2:
                		doctor5(2);
                		break;
                	case 3:
                		doctor5(3);
                		break;
                	case 4:
                		doctor5(4);
                		break;
                	case 5:
                		doctor5(5);
                		break;
				default:
				printf("Invalid choice")	;
			 }
	}
}
void diseasehospital6(choice)
{
	switch(choice)
	{
		case 7:
				  
            	 printf("\n1.SUN CITY HOSPITAL");
                printf("\n2.VAJRA HOSPITALS");
                printf("\n3.KPR HOSPITAL");
                printf("\n4.TATA HOSPITAL");
                printf("\n5.APEX HOSPITALS");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
              		case 1:
            	  		doctor6(1);
                		break;
                	case 2:
                		doctor6(2);
                		break;
                	case 3:
                		doctor6(3);
                		break;
                	case 4:
                		doctor6(4);
                		break;
                	case 5:
                		doctor6(5);
                		break;
				default:
				printf("Invalid choice")	;	
			 }
	}
}
void diseasehospital7(choice)
{
	switch(choice)
	{
		case 8:
			 printf("\n1.ASIAN HOSPITALS");
                printf("\n2.MGM HOSPITALS");
                printf("\n3.LIFE LINE HOSPITAL");
                printf("\n4.VASAVI HOSPITAL");
                printf("\n5.SPARSH HOSPITALS");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	case 1:
            	  		doctor7(1);
                		break;
                	case 2:
                		doctor7(2);
                		break;
                	case 3:
                		doctor7(3);
                		break;
                	case 4:
                		doctor7(4);
                		break;
                	case 5:
                		doctor7(5);
                		break;
				default:
				printf("Invalid choice")	;
			 }
	}
}
void diseasehospital8(choice)
{
	switch(choice)
	{
		case 9:
			printf("\n1.MOURYA HOSPITAL");
                printf("\n2.KEETHI HOSPITAL");
                printf("\n3.LOTUS HOSPITAL");
                printf("\n4.SEVEN HILLS HOSPITAL");
                printf("\n5.OSMANIA HOSPITALS");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	case 1:
            	  		doctor8(1);
                		break;
                	case 2:
                		doctor8(2);
                		break;
                	case 3:
                		doctor8(3);
                		break;
                	case 4:
                		doctor8(4);
                		break;
                	case 5:
                		doctor8(5);
                		break;
				default:
				printf("Invalid choice")	;	
			 }
	}
}
void diseasehospital9(choice)
{
	switch(choice)
	{
		case 10:
			printf("\n1.RADHIKA HOSPITAL");
                printf("\n2.SRI LASYA HOSPITALS");
                printf("\n3.SRI RAMA HOSPITAL");
                printf("\n4.SRINIVASA HOSPITAL");
                printf("\n5.MEGHANA HOSPITALS");
                printf("\nenter your choice");
                scanf("%d",&choice);
                switch(choice)
                {
                	case 1:
            	  		doctor9(1);
                		break;
                	case 2:
                		doctor9(2);
                		break;
                	case 3:
                		doctor9(3);
                		break;
                	case 4:
                		doctor9(4);
                		break;
                	case 5:
                		doctor9(5);
                		break;
				default:
				printf("Invalid choice")	;
			 }
	}
}
int main()
{ 
 int choice, age, mobile,j;
    char address[50], name[50];
     do
    {
	printf("\n===============================================================");
    printf("\nENTER DETAILS OF PATIENT\n");

    printf("\nEnter patient name: ");
    scanf("%s",&name);

    printf("\nEnter patient age: ");
    scanf("%d", &age);

    printf("\nEnter patient mobile number: ");
    scanf("%d", &mobile);

    printf("\nEnter patient address: ");
    scanf("%s", address);
	
   
         printf("\n1. FLU");
	    printf("\n2. CANCER");
	    printf("\n3. ARTHRITIS");
	    printf("\n4. THYROID");
	    printf("\n5. ASTHMA");
	    printf("\n6. PNEUMONIA");
	    printf("\n7. HEART ATTACK");
	    printf("\n8. BRAIN TUMOUR");
	    printf("\n9. HERNIA");
	    printf("\n10. POLIO");
	
	    printf("\nYour Health Issue is: ");
	    scanf("%d", &choice);
	    printf("\n\nTHE HOSPITALS ARE\n\n");
	
	    displayHospitalInfo(choice);
	    diseasehospital1(choice);
	    diseasehospital2(choice);
	    diseasehospital3(choice);
	    diseasehospital4(choice);
	    diseasehospital5(choice);
	    diseasehospital6(choice);
	    diseasehospital7(choice);
	    diseasehospital8(choice);
	    diseasehospital9(choice);
	    
	    printf("\nEnter 1 to Re-select  or 0 to Exit: ");
	    scanf("%d",&j);
	}while(j==1);

    return 0;

}
