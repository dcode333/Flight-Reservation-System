 #include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
string f_name;
string  l_name;
 int choice,src,dest;
bool flag = false;
int glob=0; //global variables
int global=10;
//--------------------------------------------------------------------------------------------------------Muaz
class domesticBooking //class  for domestic booking
{ protected:
    int pnr;
    char timeOfArrival[7],timeOfDeparture[7],f_d[10]; //protected members
    long int doj;

public:
    char departureCity[20];
    char arrivalCity[20];
public://public member functions
    void d_pnr()
    {
        glob++; // increment variable
        pnr=glob;
    }
    int j_detail() // function declaration and definition for domestic journey
    {
        cout << "\nEnter Date-Of-Journey(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "\t\t  -> Lahore(1) \t\ -> Karachi(2) \t\ -> Multan(3) \t\ -> Islamabad(4)\n\n\t\t  -> Quetta(5)\t\ -> Faisalabad(6)" << endl << endl;
        cout << "\tEnter Departure   ";
        cin >> src;
        cout << "\tEnter Arrival     ";
        cin >> dest;
        system("CLS");
        switch(src){
        case 1:  strcpy(departureCity,"Lahore"); break;
        case 2: strcpy(departureCity,"Karachi"); break;
        case 3: strcpy(departureCity,"Multan");break;
        case 4: strcpy(departureCity,"Islamabad"); break;
        case 5: strcpy(departureCity,"Quetta"); break;
        case 6: strcpy(departureCity,"Faisalabad"); break;}

         switch(dest){
        case 1:  strcpy(arrivalCity,"Lahore"); break;
        case 2: strcpy(arrivalCity,"Karachi"); break;
        case 3: strcpy(arrivalCity,"Multan");break;
        case 4: strcpy(arrivalCity,"Islamabad"); break;
        case 5: strcpy(arrivalCity,"Quetta"); break;
        case 6: strcpy(arrivalCity,"Faisalabad"); break;}

           if((src==5 && dest==6) || (src==6 && dest==5))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
          else if((src==4 && dest==6) || (src==6 && dest==4))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
           else if((src==3 && dest==6) || (src==6 && dest==3))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

          else if((src==2 && dest==6) || (src==6 && dest==2))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
           else if((src==1 && dest==6) || (src==6 && dest==1))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
         else if((src==4 && dest==5) || (src==5 && dest==4))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

         else if((src==3 && dest==5) || (src==5 && dest==3))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
         else if((src==2 && dest==5) || (src==5 && dest==2))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==1 && dest==2) || (src==2 && dest==1))//condition
           {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==5) || (src==5 && dest==1))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==1 && dest==4) || (src==4 && dest==1))//condition
             {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition
          {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition
               {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nDeparture and Arrival can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_Route() //function declaration and definition for selecting flight
    {   cout << "\nEnter your choice:  " << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\Route selected: "<<departureCity<<" to "<<arrivalCity<<endl;
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(timeOfDeparture,"8:00"); //copy to string
                strcpy(timeOfArrival,"11:05");// copy to string
                break;
          case 2://condition
                cout << "\Route selected: "<<departureCity<<" to "<<arrivalCity<<endl;
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(timeOfDeparture,"14:00");//copy to string
                strcpy(timeOfArrival,"17:05");//copy to string
                break;
          case 3://condition
                cout << "\Route selected: "<<departureCity<<" to "<<arrivalCity<<endl;
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(timeOfDeparture,"19:00");//copy to string
                strcpy(timeOfArrival,"22:05");//copy to string
                break;
          default://condition
                cout << "Wrong input entered.\nTry again" << endl;
                return select_Route();
        }
    }
};
class internationalBooking//class for international booking
{
protected://protected members
    int pnri;
    char timeOfArrivalinter[7],timeOfDepartureInter[7],f_i[10];
    long int doji;
    int srci,desti,choicei;
public://public member functions
    char departureCityi[20];
    char arrivalCityi[20];
    void i_pnr()
    {
        global++;//increment variable
        pnri=global;
    }

    int j_detaili()// function declaration and definition for journey details
    {
        cout << "Enter DateOfJourney (DD-MM-YY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout<<"\tAvailable routes Currently:  \n"<<endl;
        cout << "\tLondon(1)   Dubai(2)   Pakistan(3)   Singapore(4)   NewYork(5) " << endl << endl;
          cout << "\tEnter Departure   ";
        cin >> srci;
        cout << "\tEnter Arrival     ";
        cin >> desti;
        system("CLS");
        cout << "\t \t \tFlights Found" << endl << endl;

         switch(srci){
        case 1:  strcpy(departureCityi,"London"); break;
        case 2: strcpy(departureCityi,"Dubai"); break;
        case 3: strcpy(departureCityi,"Pakistan");break;
        case 4: strcpy(departureCityi,"Singapore"); break;
        case 5: strcpy(departureCityi,"NewYork"); break;}

        switch(desti){
        case 1:  strcpy(arrivalCityi,"London"); break;
        case 2: strcpy(arrivalCityi,"Dubai"); break;
        case 3: strcpy(arrivalCityi,"Pakisan");break;
        case 4: strcpy(arrivalCityi,"Singapore"); break;
        case 5: strcpy(arrivalCityi,"NewYork"); break;}


        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }

        else  if((srci==1 && desti==2) || (srci==2 && desti==1))//condition
        {
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {   cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.41259\tRefundable\n";  }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "(3)\t18:00\t\t22:05\t\tRs.81478\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
            }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nRoute selected : "<<departureCityi<<" to "<<arrivalCityi<<endl;
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(timeOfDepartureInter,"10:00");//copy to string
            strcpy(timeOfArrivalinter,"14:05");//copy to string
            break;
        case 2://condition
               cout << "\nRoute selected : "<<departureCityi<<" to "<<arrivalCityi<<endl;
               strcpy(f_i,"Fly Dubai");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(timeOfDepartureInter,"14:00");//copy to string
                strcpy(timeOfArrivalinter,"18:05");//copy to string
                break;
        case 3://condition
            cout << "\nRoute selected : "<<departureCityi<<" to "<<arrivalCityi<<endl;
            strcpy(f_i,"Emirates");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(timeOfDepartureInter,"18:00");//copy to string
            strcpy(timeOfArrivalinter,"22:05");//copy to string
            break;
        default://condition
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};

class passenger: public domesticBooking,public internationalBooking//class passenger inherited from class d_booking and i_booking
{
public:
    string contact_no;
public:
    int age,gender;
    string email;//public member functions
    void p_detail(int x)//function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        { j_detail();//function call
          select_Route();//function call
        }
          else
          {  j_detaili();
             select_flighti();//function call
          }
         system("CLS");
        cout << "\n\n\tEnter passenger details \n";
        cout << "\n\tFirst Name:";
        getline(std::cin >> std::ws, f_name);
        cout << "\tLast Name:";
        getline(std::cin >> std::ws, l_name);
        }
    int gender_check()//to check gender input as valid
    {
        cout << "\n\tGender:\n\n\tMale-press   (1)\n\tFemale-press (2)\n";
        cout<<"\n\t>> ";
        cin >> gender;
        cout<<endl;
        if(gender>2 || gender==0)//condition
        {
            cout << "\n\n\tWrong input entered.\n\tTry again\n\n" << endl;
            return gender_check();//function call
        }
    }
       void more_details()//to take more details of the passenger
       {
        cout << "\tAge: ";
        cin >> age;
        cout << "\tEmail Id:";
        cin >> email;
        cout << "\tContact no.(6 digits):";
        cin >> contact_no;
         system("CLS");
         cout<<"\n\n\<><><><><><><><><>";
        cout << "\nDetails Entered\n";
        cout<<"<><><><><><><><><>\n\n";
        cout << "\tName: " << f_name << " " << l_name << endl;
        if(gender==1)
        cout << "\tGender: Male"<< endl;      //displaying details
        else cout << "\tGender: Female"<< endl;      //displaying details
        cout << "\tAge: " << age << endl;
        cout << "\tEmail id: " << email << endl;
        cout << "\tContact No: " << contact_no << endl;
    }


     int getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int getpnri()//function to get pnr for international booking
     {
         return pnri;
     }

     void disp()//function to display details for domestic booking
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure City:" << departureCity<< endl;
         cout<<"Arrival City:" << arrivalCity<<endl;
         cout<<"Departure Time:" << timeOfDeparture << endl;
         cout<<"Arrival Time:" << timeOfArrival;
     }

      void dispi()//function to display details for international booking
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Country:" << departureCityi<< endl;
         cout<<"Arrival Country:" << arrivalCityi<<endl;
         cout<<"Departure Time:" << timeOfDepartureInter << endl;
         cout<<"Arrival Time:" << timeOfArrivalinter;
    }
};


class payment//class for payment
{
protected://protected members
    long int choice1,bank,card,date,cvv,user_id;
    char password[10];
     public://public members functions
    void pay_detail()//function declaration and definition for payment method
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\nDebit Card   (1) \nCredit Card  (2) \nNet Banking  (3)";
        cout << "\n\nEnter your choice: ";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\nEnter card no.: ";
            cin >> card;
            cout << "\nEnter expiry date: ";
            cin >> date;
            cout << "\nEnter CVV no.: ";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available:  West Pac Bank(1)\nNabil Bank(2)\nStandard Chartered Bank(3)\nAMP Bank(4)\nOthers(5)\n";
            cout << "\nSelect your bank: ";
            cin >> bank;
            cout << "\nYou have selected: " << bank;
            cout << "\nEnter user id: ";
            cin >> user_id;
            cout << "\nEnter password: ";
            cin >> password;
            cout << "\nTransaction Successful \n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};


void createfile(passenger p)//file creation for domestic booking
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file

   fin.close();//closing file
}

void cancelticket(int x)//function to cancel ticket
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         p.disp();//display details
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("domestic.txt");//deleting old file
   rename("domestic1.txt","domestic.txt");//renaming new file

}

void checkticket(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {p.disp();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
void cancelticketi(int x)//function to cancel ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//opening file
   ofstream fin("international1.txt",ios::binary|ios::app);//writing to a new file
   fout.read((char *)&p,sizeof(p));//reading old file
   while(fout)
   {
     if(p.getpnri()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to new file;
      else {
         p.dispi();//display details
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"\nTicket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("international.txt");//deleting old file
   rename("international1.txt","international.txt");//renaming new file

}
void checkticketi(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnri()==x)//checking pnr
     {p.dispi();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;
}

#include<windows.h>
#include "SSL.h"
#include <fstream>
int reserveSeat;
void sendmail(string mail){

    cout << endl << endl << endl << endl << endl << endl;

    string b="curl smtp://smtp.gmail.com:587 -v --mail-from \"pakistaninternationala@gmail.com\" --mail-rcpt \"";
    string c="\" --ssl -u pakistaninternationala@gmail.com:pia19990101 -T \"file.txt\" -k --anyauth";
   string    a=b+mail+c;

    int n = a.length();
    // declaring character array
    char char_array[n + 1];
    // copying the contents of the string to char array
    strcpy(char_array, a.c_str());
    for (int i = 0; i < n; i++)
    cout << char_array[i];
    char *command=char_array;
    WinExec(command, SW_HIDE);

    return;
}

void ReserveSeat(){

    temp=head;


 cout<<"Choose Seat No from available slots from(1-40):  \n\n";
 cout<<"Select: ";
 cin>>reserveSeat;
if(reserveSeat>40){
     cout << "\n\nSorry!!! Choose  from(1-40)\n";
    system("pause");
    return ReserveSeat();
}
for(int i=0;i<reserveSeat-1;i++)
  temp=temp->next;

  if(reserveSeat == temp->seatNo && temp->data!=0 ) {

    cout << "\n\nSorry!!! This seat is already booked\n\n";
    system("pause");
    ReserveSeat();
  }


if(temp->data==0)
temp->data=reserveSeat;
return;
}


int main()//main function
{
    declinkedlist();
    class domesticBooking d1;//object for class d_booking
    class internationalBooking i1;//object for class i_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
    int ch,ch1,n;//integer variables
    char input;//character variables
    do//do while loop
    {
    	system("CLS");
    cout << "\n\n\n\n\n \t\t    <| Welcome To PIA Flight Reservation System |>" << endl << endl;
    cout <<"\t\t    <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t\t    Book your Flight tickets at affordable prices !!" << endl;
    cout <<"\t\t    <><><><><><><><><><><><><><><><><><><><><><><>";

    cout << "\n\n\t\t\t>>> Book Flight  (1) \n\t\t\t>>> Cancel Fight (2) \n\t\t\t>>> Check Ticket (3) \n\t\t\t>>> Exit         (4)" << endl;
    cout << "\n\t\t        Please enter your choice:  ";
    cin >> ch;
    int sendMail=ch;
      switch(ch)//witch case
      {
          case 1://condition
          system("CLS");
                cout << "\t\t(1). Domestic Fights\n\t\t(2). International Flight" << endl;
                 cout << "\n                Please enter your option  :  ";
                 cin >> ch1;
            system("CLS");
              switch(ch1)//inner switch case
              {
                   case 1://for booking domestic ticket
                       flag = false;
                        p1.d_pnr();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        traverseList(2);//
                        ReserveSeat();
                        system("CLS");
                        cout<<"Seat Booked successfully !!!\n\n";
                        traverseList(2);
                        cout<<endl<<endl;
                        p2.pay_detail();
                        if(ch1==1){
                            ofstream domFile;
                            domFile.open("domestic.txt");
                        }
                        createfile(p1);//call to create file
                        break;
                   case 2: // ----------------------------------------------> for booking international ticket
                           flag = true;
                           p1.p_detail(2);//function calls
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           traverseList(2);
                           ReserveSeat();
                           system("CLS");
                           cout<<"Seat Booked successfully !!!\n\n";
                           traverseList(2);
                           cout<<endl<<endl;
                           p2.pay_detail();
                          createfilei(p1);//call to create file
                           break;
                   default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              //for canceling ticket
              system("CLS");
              cout << "(1). Domestic Fights\n(2). International Flight" << endl;
                 cout << "\nPlease enter your option   " << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3://for displaying booked ticket details
          system("CLS");
                   cout << "(1). Domestic Fights\n(2). International Flight" << endl;
                   cout << "\nPlease enter your option   " << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}//function call to display domestic ticket details
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);//function call to display domestic ticket details
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			cout<<"\n\n\t\t\t\tThanks for choosing us !!!\n\n\n\n";
			return 0;
          default://for wrong input
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }

      if(sendMail==1){
     passenger pas;
     ofstream myFile;
     myFile.open("file.txt");

      myFile<<"----------------- THANKS FOR CHOOSING PIA -----------------\n\n";
      if(ch1 == 1) {
        myFile<<"\nTicket ID: " << p1.getpnr();
     } else if(ch1 == 2){
        myFile<<"\nTicket ID: " << p1.getpnri();
     }

     myFile<<"\n\nTicket No : "<<reserveSeat<<"\n\nName: "<<f_name<<" "<<l_name<<"\n\nDeparture Time: 18 : 00\n\nArrival Time: 22 : 05  \n\nFlight No: 7234\n\n";

     myFile<<"\n----------------- WE WISH YOU A SAFE JOURNEY -----------------";
     myFile<<"\n------------ PAKISTAN INTERNATIONAL AIRLINES -------------\n\n";
     myFile<<"Contact us at: 051-123-4567\n";
     myFile<<"                          051-987-6543";

     myFile.close();
     system("cls");
     cout<<"\n\t\t\t\tTransacting Details ";
     Sleep(1000);
     cout<<". ";
       Sleep(1000);
     cout<<". ";
       Sleep(1000);
     cout<<". ";
       Sleep(1000);
     cout<<". ";
       Sleep(1000);
     cout<<". ";
     sendmail(p1.email);
     Sleep(8100);
     system("cls");
     cout << endl << endl;
     cout<<"Transaction Successful !!!!!\n\n";
     if(!flag) {
        p1.disp();
     } else {
        p1.dispi();
     }


    }

cout<<"\n\n\nDo you wish to continue:(y/Y or n/N)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');//condition for do while loop
return 0;
}

